from collections import defaultdict

graph = defaultdict(list)

def add_edge(graph, src, dest):
    graph[src].append(dest)

def print_graph(graph):
    for vertex in graph:
        print(f"Vertex {vertex}:", " -> ".join(map(str, graph[vertex])))

# Add edges
add_edge(graph, 0, 1)
add_edge(graph, 0, 4)
add_edge(graph, 1, 2)
add_edge(graph, 1, 3)
add_edge(graph, 1, 4)
add_edge(graph, 2, 3)
add_edge(graph, 3, 4)

print_graph(graph)
