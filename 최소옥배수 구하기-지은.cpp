//#include <stdio.h>
//
//int minimum(int a, int b)
//{
//    int m = 1;
//    for (int i = 2; i <= a && i <= b; i++)
//    {
//        if (a % i == 0 && b % i == 0)
//            m = i;
//    }
//
//    return m;
//}
//
//int maximum(int a, int b)
//{
//    int A = a;
//    int B = b;
//    while (A != B)
//    {
//        if (A < B)
//            A += a;
//        else B += b;
//    }
//    return A;
//}
//
//
//int main(void)
//{
//    int A, B;
//    scanf("%d %d", &A, &B);
//    printf("%d\n", minimum(A, B));
//    printf("%d\n", maximum(A, B));
//    return 0;
//}