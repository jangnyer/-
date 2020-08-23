//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	char arr[50];
//	int sum = 10;
//
//	scanf("%s", arr);
//	int len = strlen(arr);
//	for (int i = 0; i < len - 1; i++) {
//		if (arr[i] == '(') {
//			if (arr[i + 1] == '(') {
//				sum += 5;
//			}
//			else if (arr[i + 1] == ')')
//				sum += 10;
//		}
//
//		else if(arr[i]==')')
//		{
//			if (arr[i + 1] == '(')
//				sum += 10;
//			else
//				sum += 5;
//		}
//	}
//
//	printf("%d", sum);
//	return 0;
//}