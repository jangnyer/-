//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//
////제곱수에대한 소수판별(제곱수가 소수로 취급됨)
//int isprime(int N) {
//	if (N < 2)return 0;
//	for (int i = 2; i <= N / i; i++) {
//		if (N % i == 0) {
//			return 0;
//			//if (N % i != i) {
//			//	return 1;
//			//}
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int M, N;
//	int buffer;
//	int sum = 0;
//	int small=0;
//	scanf("%d %d", &M, &N);
//
//	if (N>M) {
//		buffer = N;
//		N = M;
//		M = buffer;
//}
//	for (int i = N; i <= M; i++) {
//		if (isprime(i)) {
//			if (sum == 0) 
//				small = i;
//			sum += i;
//		}
//	}
//
//
//	if (sum == 0) {
//		printf("-1");
//	}
//	else
//	printf("%d\n%d", sum, small);
//
//	return 0;
//}
