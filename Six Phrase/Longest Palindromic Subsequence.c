#include<stdio.h>
#include<string.h>
int max(int a,int b){
    return a>b?a:b;
}
int main()
{
    char str[1000];
    scanf("%s",str);
    int n=strlen(str);
    int dp[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                dp[i][j]=1;   // Basic case : Every indivual element is a palindrome
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    int i=0,j=1,k=1;
    while(1){
        i=0;
        j=k;
        if(i==0 && j==n){
            break;
        }
        while(j<n){
            if(str[i]==str[j]){
                dp[i][j]=dp[i+1][j-1]+2;  // abba = no. of found palindrome count + 2  ===> b = 1 ==> bb = 2 ==> abba = 4
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i+1][j]); // abbc = maximum of found plaindroms ===> abb = 2 , bbc = 2 ==> abbc = 2
            }
            i++;
            j++;
        }
        k++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
    i = 0;
    j = n-1;
    k =0;
    char ans[1000];
    while(dp[i][j] != 0)
    {
        if(str[i] == str[j])
        {
            ans[k] = str[i];
            k++;
            i++;
            j--;
        }
        else
        {
            if(dp[i+1][j] > dp[i][j-1])
                i++;
            else
                j--;
        }
    }
    int t;
    if(dp[0][n-1]%2 == 0) // if the characters are even, original + (reverse the whole original) ==>  original = BABC, o/p = BABCCBAB
        t = k-1;
    else                  // if the characters are odd, original + (reverse the (whole original - 1)) ==>  original = BAB, o/p = BABAB
        t = k-2;
    
    while(t >= 0)
    {
        ans[k] = ans[t];
        k++;
        t--;
    }
    ans[k] = '\0';
    printf("%s", ans);
}
