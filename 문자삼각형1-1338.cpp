//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main() {                //����󿡼��� �������, ������wrong answer
//	int n;
//	int j, k;
//	char alpha = 'A';
//	char arr[100][100] = { '\0',0 };   //�迭���� NULL������ �ʱ�ȭ�ϴ� ���
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