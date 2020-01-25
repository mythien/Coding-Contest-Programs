#include <stdio.h>

int main()
{
     long long int n;
     scanf("%lld", &n);
     int a = 2, b = 8;   // the first occuring 2 - even fibonacci numbers 
     
     if (n >= 8) 
        printf("%d %d ", a, b); 
     else if(n >= 2) 
        printf( "%d ", a);
     
     int c = 4*b + a;   
     
     // f(n) = f(n-1) + f(n-2) = f(n-2) + f(n-3) + f(n-3) + f(n - 4) ===> 2f(n-3) + f(n-2) + f(n-4) ===> 2f(n-3) + f(n-3) + f(n -4) + f(n-5) + f(n-6) ===> 2f(n-3) + f(n-3) + f(n-3) + f(n-6) ===> 4f(n-3) + f(n-6)
     // f(n - 3) = f(n-4) + f(n-5)
     
     while(c <= n)
     {
         printf("%d ", c);
         a = b;
         b = c;
         c  = 4*b + a;
     }
}
