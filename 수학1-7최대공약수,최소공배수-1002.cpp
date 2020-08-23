//#include <stdio.h>
//
////지은님이 가르쳐준 방식대로 풀기
//
//int gcd_get(int x, int y) {
//    int i, ans = 0;
//
//    for (i = 1; i <= x; i++) {
//        if (x % i == 0 && y % i == 0) {
//            ans = i;
//        }
//    }
//    return ans;
//}
//
//int main(void)
//{
//    int N, i, a[10] = { 0, }, gcd, lcm;
//    scanf("%d", &N);
//
//    for (i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    gcd = lcm = a[0];
//
//    for (i = 1; i < N; i++) {
//        gcd = gcd_get(gcd, a[i]);
//        lcm = lcm / gcd_get(lcm, a[i]) * a[i];
//
//    }
//
//    printf("%d %d", gcd, lcm);
//
//    return 0;
//}
//
////////int main(void)
////{
////int N;
////scanf("%d", &N);
////int* p = (int*)malloc(sizeof(int) * N);
////for (int i = 0; i < N; i++)
////    scanf("%d", &p[i]);
////int m = p[0];
////int M = p[0];
////for (int i = 1; i < N; i++)
////{
////    m = minimum(m, p[i]);
////    M = maximum(M, p[i]);
////}
////printf("%d %d\n", m, M);
////return 0;
////}