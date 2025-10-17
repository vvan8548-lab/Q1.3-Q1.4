#include <stdio.h> 

#define MOD 9901

int main() {
	long long d0=1,d1=4,d;
	for (int n =2;n<=1000;n++) {
		d=(3 * d1+3 * d0) % MOD;
		d0=d1;
		d1=d;
	}
	printf("d1000 mod 9901 = %lld\n",d1);
	
	return 0;
}