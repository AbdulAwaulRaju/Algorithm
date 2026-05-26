#include <stdio.h>

int queue[100], front = 0, rear = 0;
int visited[100];

int adj[100][100];
int n;

void bfs(int start) {
    queue[rear++] = start;
    visited[start] = 1;

    while(front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        for(int i = 0; i < n; i++) {
            if(adj[node][i] == 1 && visited[i] == 0) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    int start;
    scanf("%d", &start);

    bfs(start);

    return 0;
}
