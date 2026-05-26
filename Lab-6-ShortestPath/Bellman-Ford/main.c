#include <stdio.h>

#define INF 999999

struct Edge {
    int u, v, w;
};

int main() {
    int V, E;
    scanf("%d %d", &V, &E);

    struct Edge edges[1000];

    for(int i = 0; i < E; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    int src;
    scanf("%d", &src);

    int dist[100];

    for(int i = 0; i < V; i++)
        dist[i] = INF;

    dist[src] = 0;

    for(int i = 1; i < V; i++) {
        for(int j = 0; j < E; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if(dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    printf("Shortest distances from vertex %d:\n", src);

    for(int i = 0; i < V; i++) {
        if(dist[i] == INF)
            printf("%d: INF\n", i);
        else
            printf("%d: %d\n", i, dist[i]);
    }

    return 0;
}
