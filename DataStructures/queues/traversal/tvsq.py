from collections import deque

queue = deque()

# Enqueue elements
queue.append(10)
queue.append(20)
queue.append(30)

# Print queue
for item in queue:
    print(item, end=" ")
print()
