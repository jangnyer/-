//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	int n;
//	int arr[40];
//	int m;
//	int aliquot = 0;
//	int multiple=0;
//	scanf("%d", &n);
//	for(int i=0;i<n;i++)
//		scanf("%d", &arr[i]);
//	scanf("%d", &m);
//	//약수의 합                  
//	for (int j = 0; j < n; j++) {
//		if ((m %arr[j] == 0)&&m>=arr[j])
//			aliquot += arr[j];
//	}
//	printf("%d\n", aliquot);
//
//	//배수의 합
//	for (int k = 0; k < n; k++) {
//		if (arr[k] % m == 0&&m<=arr[k])
//			multiple += arr[k];
//	}
//	printf("%d\n", multiple);
//
//
//	return 0;
//}
