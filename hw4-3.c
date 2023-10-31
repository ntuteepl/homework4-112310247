#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Order;

void sort(Order *orders, int n) {
    // 使用氣泡排序按照開始時間對訂單進行排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (orders[j].start > orders[j + 1].start) {
                Order temp = orders[j];
                orders[j] = orders[j + 1];
                orders[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int count = 0;

    // 讀取訂單數量
    if (scanf("%d", &n) == 1) {
        Order *orders = (Order *)malloc(n * sizeof(Order));
        for (int i = 0; i < n; i++) {
            // 讀取每個訂單的出發時間和返回時間
            scanf("%d %d", &orders[i].start, &orders[i].end);
        }

        // 將訂單按照出發時間進行排序
        sort(orders, n);

        // 計算需要的遊覽車數量
        int currentEnd = 0;
        for (int i = 0; i < n; i++) {
            if (orders[i].start >= currentEnd) {
                currentEnd = orders[i].end;
                count++;
            }
        }

        // 輸出結果
        printf("%d\n", count);

        // 顯示每位司機的時間表
        currentEnd = 0;
        int currentDriver = 1;
        for (int i = 0; i < n; i++) {
            if (orders[i].start >= currentEnd) {
                printf("Driver %d: %d-%d\n", currentDriver, orders[i].start, orders[i].end);
                currentEnd = orders[i].end;
                currentDriver++;
            }
        }

        free(orders);
    }

    return 0;
}
