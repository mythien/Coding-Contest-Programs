import java.io.*;
import java.util.*;

public class Main
{
    static void print(int arr[][], int row, int col, String s1)
    {
        if (arr[row][col] == 0) return;
        
        print(arr, row-1, col-1, s1);
        System.out.print(s1.charAt(row-1));
    }
	public static void main(String[] args) 
	{
		String s1,s2;
		Scanner sc = new Scanner(System.in);
		s1 = sc.nextLine();
		s2 = sc.next();
		if (s2.length() < s1.length())
		 {
		     String s3 = s1;
		     s1 = s2;
		     s2 = s3;
		 }
		int n1 = s1.length(), n2 = s2.length();
		int arr[][] = new int[n1+1][n2+1];
		
		for(int i=0; i<=n1; i++)
		{
		    for(int j=0; j<=n2; j++)
		    {
		        if (i==0 || j==0)
		            arr[i][j] = 0;
		        else if (s1.charAt(i-1) == s2.charAt(j-1))
		            arr[i][j] = arr[i-1][j-1] + 1;
		        else
		            arr[i][j] = 0;
		    }
		}
		
		int max = 0, row = 0, col = 0;
		for(int i=0; i<=n1; i++)
		    for (int j=0; j<=n2; j++)
		      {
		          if (arr[i][j] > max)
		          {
		              max = arr[i][j];
		              row = i;
		              col = j;
		          }
		      }
		 print(arr, row, col, s1);
	}
}
