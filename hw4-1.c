#include <stdio.h>
#include <math.h>


int panduan(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2;i <= sqrt(num);i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("輸入要判斷幾個數字");
    scanf("%d", &n);

    int num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (panduan(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

