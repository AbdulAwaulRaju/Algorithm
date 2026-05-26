#include <stdio.h>

#define INF 999999

int minKey(int key[], int mst[], int n) {
    int min = INF, index;

    for(int i = 0; i < n; i++) {
        if(mst[i] == 0 && key[i] < min) {
            min = key[i];
            index = i;
        }
    }
    return index;
}

int main() {
    int n;
    scanf("%d", &n);

    int graph[100][100];
    int parent[100], key[100], mst[100];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        key[i] = INF;
        mst[i] = 0;
    }

    key[0] = 0;
    parent[0] = -1;

    for(int count = 0; count < n - 1; count++) {
        int u = minKey(key, mst, n);
        mst[u] = 1;

        for(int v = 0; v < n; v++) {
            if(graph[u][v] && mst[v] == 0 && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    for(int i = 1; i < n; i++) {
        printf("%d - %d\n", parent[i], i);
    }

    return 0;
}
