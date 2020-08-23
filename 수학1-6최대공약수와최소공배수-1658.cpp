//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int get_gcd(int a, int b) {
//	int r;
//	while (b != 0) {
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//int main() {                //두수의 곱은 두수의 최대공약수와 최소공배수의 곱과 같다.
//	int a, b;
//	int gcd;
//	int lcm;
//	scanf("%d %d", &a, &b);
//
//	gcd = get_gcd(a,b);
//	
//	lcm = a * b / gcd;
//
//
//	printf("%d\n",gcd );
//	printf("%d\n",lcm );
//	return 0;
//}