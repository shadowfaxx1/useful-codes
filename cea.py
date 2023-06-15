from unittest import result


text = "middle-Outz"
result=""
s = 2
print ("Cipher: " + encrypt(text,s))
 
for i in range(len(text)):
    char = text[i]
	if (char.isupper()):
		result += chr((ord(char) + s-65) % 26 + 65)
   

	elif(char.islower()):
		result += chr((ord(char) + s - 97) % 26 + 97)
