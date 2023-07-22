# import hashlib
# import random
# import string
# from flask import Flask, render_template, request, redirect
# from utils.database import create_table, insert_mapping, retrieve_long_url

#  # Import the database functions from the database.py file

# app = Flask(__name__)

# def generate_short_url():
#     # Generate a random string of characters for the shortened URL
#     characters = string.ascii_letters + string.digits
#     short_url = ''.join(random.choice(characters) for _ in range(6))
#     return short_url

# @app.route('/', methods=['GET', 'POST'])
# def index():
#     if request.method == 'POST':
#         long_url = request.form.get('long_url')
#         if long_url:
#             # Generate the shortened URL
#             short_url = generate_short_url()

#             # Hash the long URL (SHA-256) for storing in the database
#             hashed_long_url = hashlib.sha256(long_url.encode()).hexdigest()

#             # Store the mapping in the database
#             database.insert_mapping(short_url, long_url)

#             # Display the shortened URL to the user
#             return f'Shortened URL: http://localhost:5000/{short_url}'
#     return render_template('index.html')

# @app.route('/<short_url>')
# def redirect_url(short_url):
#     # Retrieve the long URL from the database
#     long_url = database.retrieve_long_url(short_url)

#     if long_url:
#         return redirect(long_url)
#     return 'Invalid Short URL'

# if __name__ == '__main__':
#     database.create_table()
#     app.run(debug=True)

# import hashlib
# import random
# import string
# from flask import Flask, render_template, request, redirect
# from utils.database import Database

# app = Flask(__name__)
# x = Database()

# def generate_short_url():
#     # Generate a random string of characters for the shortened URL
#     characters = string.ascii_letters + string.digits
#     short_url = ''.join(random.choice(characters) for _ in range(6))
#     return short_url

# @app.route('/', methods=['GET', 'POST'])
# def index():
#     if request.method == 'POST':
#         long_url = request.form.get('long_url')
#         if long_url:
#             short_url = generate_short_url()
#             x.insert_mapping(short_url, long_url)
#             return f'Shortened URL: http://localhost:5000/{short_url}'
#     return render_template('index.html')

# @app.route('/<short_url>')
# def redirect_url(short_url):
#     long_url = x.retrieve_long_url(short_url)
#     if long_url:
#         return redirect(long_url)
#     return 'Invalid Short URL'

# if __name__ == '__main__':
#     x.create_table()
#     app.run(debug=True)
import hashlib
import random
import string
from flask import Flask, render_template, request, jsonify, redirect
from utils.database import Database  # Import the Database class from database.py

app = Flask(__name__)

db = Database()

def generate_short_url():
    characters = string.ascii_letters + string.digits
    short_url = ''.join(random.choice(characters) for _ in range(6))
    return short_url

@app.route('/', methods=['GET'])
def index():
    history = db.get_all_mappings()
    return render_template('index.html', history=history)

@app.route('/shorten', methods=['POST'])
def shorten_url():
    data = request.json
    long_url = data.get('long_url')

    if long_url:
        short_url = generate_short_url()

        hashed_long_url = hashlib.sha256(long_url.encode()).hexdigest()

        # Store the mapping in the URL mapping dictionary
        db.insert_mapping(short_url, long_url)

        # Return the shortened URL as a JSON response
        return jsonify({'short_url': short_url})

    # If there is no long URL provided, return a bad request status
    return jsonify({'error': 'Bad Request'}), 400

@app.route('/<short_url>', methods=['GET'])
def redirect_url(short_url):
    long_url = db.retrieve_long_url(short_url)
    if long_url:
        return redirect(long_url)

    return 'Invalid Short URL'

if __name__ == '__main__':
    app.run(debug=True)
