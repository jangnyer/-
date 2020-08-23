//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	int N, K;
//	int aliquot = 0;
//
//	scanf("%d %d", &N, &K);
//
//	for (int i = 1; i <= N; i++) {
//		if (N % i == 0) {
//			aliquot++;
//			if (aliquot == K) {
//				printf("%d", i);
//				return 0;
//			}
//			else if (aliquot < K&&i==N)
//			{
//				
//				printf("0");
//			//	return 0;
//			}
//		}
//		continue;
//	}
//
//
//	return 0;
//}