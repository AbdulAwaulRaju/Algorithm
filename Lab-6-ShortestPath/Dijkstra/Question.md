You are given a directed graph with V vertices and E edges. Each edge has a non-negative weight. Your task is to implement Dijkstra's algorithm to find the shortest path from a given source vertex to all other vertices in the graph.

### Input:
V: Number of vertices (1 ≤ V ≤ 100)  
E: Number of edges (1 ≤ E ≤ 1000)  

A list of edges where each edge is represented as (u, v, w), where:  
- u is the source vertex  
- v is the destination vertex  
- w is the weight of the edge  

Source vertex is also given.

### Output:
Print the shortest distance from the source vertex to all other vertices in the graph.

If a vertex is unreachable, print "INF".

### Example Input:
V = 5, E = 6  
Edges:  
0 -> 1, weight = 2  
0 -> 2, weight = 4  
1 -> 2, weight = 1  
1 -> 3, weight = 7  
2 -> 3, weight = 3  
3 -> 4, weight = 1  

Source = 0  

### Output:
Shortest distances from vertex 0:  
0: 0  
1: 2  
2: 3  
3: 6  
4: 7
