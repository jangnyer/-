//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {       //웨 오류났는지 모르겠....ㅠㅠ
//	int N;
//	char arr[20][20] = { 0, };
//	char c = 'A';
//
//	scanf("%d", &N);
//	int x = N, y = -1;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i % 4 == 0) {
//				x++; y++;
//			}
//			else if (i % 4 == 1) {
//				x++; y--;
//			}
//			else if (i % 4 == 2) {
//				x++; y++;
//			}
//			else if (i % 4 == 3) {
//				x--; y++;
//			}
//			arr[x][y] = c++;
//			if (c == 'Z' + 1)
//				c = 'A';
//		}
//	}
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (arr[i][j] == 0)
//				printf("  ");
//			else
//				printf("%c ", arr[i][j]);
//		}printf("\n");
//	}
//
//	return 0;
//}