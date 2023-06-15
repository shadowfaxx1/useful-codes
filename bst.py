from turtle import left, right


class nodes:
    def __init__(self,key):
        self.key=key
        self.left=None
        self.right=None

def insert(node,key):
    if node is None:
        return nodes(key)
    if key<node.key:
        node.left=insert(node.left,key)
    else:
        node.right=insert(node.right,key)
        
    return node
def inorder(root):
    if root is not None:
        inorder(root.left)
        print(root.key , end=' ')
        inorder(root.right)
        
root=None
while(True):
    x=int(input())
    if(x==-1):
        break
    else:
        root=insert(root,x)
        
inorder(root)  
            
        

    