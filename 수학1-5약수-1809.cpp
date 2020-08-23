//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//
//int main() {
//	int N;
//	int sq;
//	int buffer;
//	int arr[10000] = { 0, };
//	int  cnt = 0;
//
//	scanf("%d", &N);
//	sq = (int)sqrt(N);
//
//	for (int i = 1; i <= sq; i++) {
//		if (N % i == 0) {
//			arr[cnt++] = i;
//			if (N / i != i)
//				arr[cnt++] = N / i;
//		}
//	}
//	for (int i = 0; i < cnt; i++) {
//		for (int j = 0; j < cnt-1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				buffer = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = buffer;
//			}
//		}
//	}
//
//	for (int i = 0; i < cnt; i++) {
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}
