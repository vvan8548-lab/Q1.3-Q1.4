#include <stdio.h>

#define MOD 9901
long long pow_mod(long long a,long long b){
    long long res =1;
    while (b > 0) {
    	if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
	}
	return res;
}


long long fact_mod(int n) {
	long long f=1;
	for (int i=1;i<n;i++)
	    f=(f*i) % MOD;
	return f;
}

int main() {
	int i=100,j=90,k=80,l=70;
	int n= i+j+k+l;
	long long num = fact_mod(n);
	long long den = (fact_mod(i) * fact_mod(j)) % MOD;
	den= (den * fact_mod(k)) % MOD;
	den= (den * fact_mod(l)) % MOD;
	
	
	long long inv_den = pow_mod (den, MOD);
	long long result = (num * inv_den) % MOD;
	
 	printf("c(100,90,80,70) mod 9901= %lld\n", result);
	
	
	return 0;
}