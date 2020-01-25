
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int flag = 1;
    
    if (n==1)
        flag = 0;      // 1 is not a prime number
    
    if(n>3 && (n%2 == 0 || n%3 == 0) )
        flag = 0;      // the number divisible by 2 and 3 is not a prime number
    
    int k =1;
    int a= 6*k -1;     // generates prime number ex: if k = 1 ==> 6k-1 = 5, if k = 2 ==> 6k-1 = 11 and so on
    int b = 6*k +1;    // generates prime number ex: if k = 1 ==> 6k+1 = 7, if k = 2 ==> 6k+1 = 13 and so on
    
    while(flag == 1 && (a <= sqrt(n) || b <= sqrt(n))) // The prime numbers must be within the sqrt of the given number
    {
        if (n%a == 0 || n%b == 0)
            flag = 0;
        k++;
        a = 6*k -1;
        b = 6*k +1;
    }
    
    (flag) ? printf("%d = prime", n) : printf("%d = Not Prime", n);

    return 0;
}
