//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main() {               //비쥬얼에선 되는데 정올에선 output limit exceed
//	int N;
//	char arr[100][100] = { 0, };
//	char alpha = 'A';
//	scanf("%d", &N);
//
//	if (N%2==0||1 > N || N > 100) {
//		printf("INPUT ERROR");
//		return 0;
//	}
//	else {
//		for (int i = N / 2; i >= 0; i--) {
//			for (int j = i; j<= (N / 2) * 2 - i;j++) {
//				arr[j][i] = alpha++;
//				if (alpha > 'Z')
//					alpha = 'A';
//			}
//		}
//	}
//
//	for (int n = 0; n < N; n++) {
//		for (int m = 0; m < N; m++) {
//			if (arr[n][m] == 0) printf("  ");
//			else printf("%c ", arr[n][m]);
//
//				}
//		printf("\n");
//	}
//	return 0;
//}
