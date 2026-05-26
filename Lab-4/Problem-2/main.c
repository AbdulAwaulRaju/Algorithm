#include <stdio.h>

struct Item {
    int value;
    int weight;
};

void sort(struct Item arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            double r1 = (double)arr[i].value / arr[i].weight;
            double r2 = (double)arr[j].value / arr[j].weight;

            if(r1 < r2) {
                struct Item temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

double knapsack(struct Item arr[], int n, int W) {
    sort(arr, n);

    double total = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i].weight <= W) {
            W -= arr[i].weight;
            total += arr[i].value;
        } else {
            total += arr[i].value * ((double)W / arr[i].weight);
            break;
        }
    }

    return total;
}

int main() {
    int n, W;
    scanf("%d", &n);

    struct Item arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].value, &arr[i].weight);
    }

    scanf("%d", &W);

    printf("%.0f", knapsack(arr, n, W));

    return 0;
}
