//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	int n;
//	int num = 'A';
//	char arr[100][100] = { 0, };
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		
//		if (i % 2 == 0) {//Â©¼öÀÏ¶§
//			for (int j = 0; j < n; j++) {
//				arr[j][i] = num++;
//				if (num == 'Z' + 1) {
//					num = 'A';
//				}
//			}
//		}
//			if (i % 2 == 1) {//È¦¼öÀÏ¶§
//				for (int m = n - 1; m >= 0; m--) {
//					arr[m][i] = num++;
//					if (num == 'Z' + 1) 
//						num = 'A';
//				}
//			}
//
//			
//		}
//	
//
//	for (int k = 0; k < n; k++) {
//		for (int l = 0; l < n; l++) {
//			printf("%c ", arr[k][l]);
//		}
//		printf("\n");
//	}
//	
//
//	return 0;
//}