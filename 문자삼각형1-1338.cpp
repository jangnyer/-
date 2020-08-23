//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main() {                //비쥬얼에서는 정상출력, 정올은wrong answer
//	int n;
//	int j, k;
//	char alpha = 'A';
//	char arr[100][100] = { '\0',0 };   //배열에서 NULL값으로 초기화하는 방법
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		for( j=i,k=n-1;j<n;j++,k--)	{
//			arr[j][k] = alpha++;
//			if (alpha > 'Z')
//				alpha = 'A';
//		}
//	}
//	for (int l = 0; l < n; l++) {   //
//		for (int m = 0; m < n; m++) {
//			if (arr[l][m] == 0)printf("  ");
//			else
//			printf("%c ", arr[l][m]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}