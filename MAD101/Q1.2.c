#include <stdio.h>



#define MOD 9901


long long power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b % 2) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}




int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int half = (n + 1) / 2; // làm tròn lên
    long long bn = power(4, half) % MOD;

    printf("b(%d) mod 9901 = %lld\n", n, bn);
    
    
    return 0;
}
