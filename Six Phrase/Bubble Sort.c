#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int i=0, j=1, k=n, swapped =0;
    
    while(1)
    {
        i=0;
        j=1;
        swapped = 0;
        
        while(j<n)                   // the loop stops when the largest element is bubbled up to the last position
        {
            if(arr[i] > arr[j])      // current number is checked with the next one
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
            i++;
            j++;
        }
        n--;                          //we doesn't need to check the bubbled elements. They are already sorted.
        if(swapped == 0)
            break;
    }
    
    for(int i=0; i<k; i++)
        printf("%d ", arr[i]);
        

    return 0;
}
