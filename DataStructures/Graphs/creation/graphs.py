from collections import defaultdict

graph = defaultdict(list)

def add_edge(graph, src, dest):
    graph[src].append(dest)

# Adding edges to the graph
add_edge(graph, 0, 1)
add_edge(graph, 0, 4)
add_edge(graph, 1, 2)
add_edge(graph, 1, 3)
add_edge(graph, 1, 4)
add_edge(graph, 2, 3)
add_edge(graph, 3, 4)

