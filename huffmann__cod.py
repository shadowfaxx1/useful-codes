

class node:
    def __init__(self,freq,symbol,left=None,right=None):
        self.freq=freq
        self.symbol=symbol
        self.left=left
        self.right=right
        self.huff=''
        

def printNodes(node, val=''):
    newVal = val + str(node.huff)

    if(node.left):
        printNodes(node.left, newVal)
    if(node.right):
        printNodes(node.right, newVal)
  

    if(not node.left and not node.right):
        print(f"{node.symbol} -> {newVal}")


chars = ['a', 'b', 'c', 'd', 'e', 'f']
  
freq = [ 10, 7, 11, 15, 4, 71]

nodes=[]
for x in range(len(chars)):
    nodes.append(node(freq[x],chars[x]))

while(len(nodes)>1):
    nodes=sorted(nodes,key=lambda x:x.freq)
    left=nodes[0]
    right=nodes[1]
    left.huff=0
    right.huff=1
    newnode=node(left.freq+right.freq,left.symbol+right.symbol,left,right)
    nodes.remove(left)
    nodes.remove(right)
    nodes.append(newnode)
    


printNodes(nodes[0])

 
                
                 