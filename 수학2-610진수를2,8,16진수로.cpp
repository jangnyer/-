//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//void by(int N) {
//	if (N == 0)
//		return;
//	by(N / 2);
//	printf("%d", N % 2);
//}
//
//void octal(int N) {
//	if (N == 0)
//		return;
//
//	octal(N / 8);
//	printf("%d", N % 8);
//}
//
//void hexa(int N) {
//	if (N == 0)
//		return;
//	hexa(N / 16);
//	
//	if (N % 16 == 10)
//		printf("A");
//	else if (N % 16 == 11)
//		printf("B");
//	else if (N % 16 == 12)
//		printf("C");
//	else if (N % 16 == 13)
//		printf("D");
//	else if (N % 16 == 14)
//		printf("E");
//	else if (N % 16 == 15)
//		printf("F");
//	else
//		printf("%d", N % 16);
//
//}
//
//int main() {
//	int N, B;
//	
//	scanf("%d %d", &N, &B);
//
//	if (B == 2)
//		by(N);
//	else if (B == 8)
//		octal(N);
//	else if (B == 16)
//		hexa(N);
//
//	return 0;
//}