class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

# In-order traversal to print values
def in_order_traversal(node):
    if node is None:
        return
    in_order_traversal(node.left)
    print(node.data, end=" ")
    in_order_traversal(node.right)

# Binary tree setup
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

in_order_traversal(root)
print()
