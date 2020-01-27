
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int max_heap[n+1];
    int i =1;
    scanf("%d", &max_heap[1]);
    int temp, k, l, max;
    
    for(i = 2; i <= n; i++)
    {
        scanf("%d", &max_heap[i]);
        k = i;
        while ( max_heap[k] > max_heap[k/2])
        {
            temp = max_heap[k];
            max_heap[k] = max_heap[k/2];
            max_heap[k/2] = temp;
            k = k/2;
        }
    }
    
    for(i = 1; i <= n; i++)
        printf("%d ", max_heap[i]);
    
    printf("\n");
    
    k = n;
    int j = 1;
    
    for(i = 1; i<n; i++)
    {
        temp = max_heap[j];
        max_heap[j] = max_heap[k];
        max_heap[k] = temp;
        
        l = j;
        int left = 2*l, right = 2*l+1;
        
        while(left<=n || right <= n)
        {
            if (right == k)
                max = left;
            else if (left == k)
                break;
            else
                max = (  max_heap[left] > max_heap[right] ) ? left : right;
                
            
            if ( max == right && max_heap[right] > max_heap[l] && right <= n)
            {
                temp = max_heap[right];
                max_heap[right] = max_heap[l];
                max_heap[l] = temp;
                l = right;
            }
            else if (max_heap[left] > max_heap[l] && left <= n)
            {
                temp = max_heap[left];
                max_heap[left] = max_heap[l];
                max_heap[l] = temp;
                l = left;
            }
            else
                break;
                
            left = 2*l;
            right = 2*l +1;
        }

        
        k--;
        
    }
    for(i = 1; i <= n; i++)
        printf("%d ", max_heap[i]); 

    return 0;
}
