#include <stdio.h>
#include<math.h>

int main()
{
    long long int n;
    scanf("%lld",  &n);
    long long int arr[n-1]; // Since we want to check elements from 2 to n ==> arr[n-1]
    
    for (long long int i = 0; i< n-1; i++)
        arr[i] = i+2;      // Storing values of 2 to n in arr ==> arr[0] = 2, arr[1] = 3, arr[2] = 4.,

    
    for (long long int i = 0; i <= sqrt(n); i++)
    {
        if(arr[i] != 0)       // Don't take the eliminated values
            for (long long int j = i + arr[i]; j < n-1; j = j + arr[i]) // Take the multiples of the number and eliminate it. i = 0 ==> j = 2,4,6,8, i = 1 ==> j = 4,7.., 
                arr[j] = 0;
    }
    
    for (long long int i =0; i< n-1; i++)
        if(arr[i] != 0)
            printf("%lld ", arr[i]);
}
