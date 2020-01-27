
// Selection sort is the opposite of Bubble sort. In selection sort we need to check from the last

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int i=n-2, j=n-1, k=0, swapped =0;
    
    while(1)
    {
        i=n-2;              // i <-  2nd element from the last
        j=n-1;              // last element
        swapped = 0;
        
        while(j >= k)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
            i--;
            j--;
        }
        k++;                   // we don't need to check the sorted elements
        if(swapped == 0)
            break;
    }
    
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
        

    return 0;
}
