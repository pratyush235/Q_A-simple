/*
You are given an implementation of funtion:
class Solution{ public int solution(int[] A,int X);}

This function,when given an array A of N integers,sorted in non-
decreasing order, and some integer X,looks for X in A. If X is present
in A,then the function returns position of (some) occurance of X in A.
Otherwise,the function returns -1.

For example,given the following array:
A[0] = 1    A[1] = 2    A[2] = 5
A[3] = 9    A[4] =9
and X=5,the function should return 2,as A[2]=5.

*/


import java.util.Scanner;
public class Solution {

public static int solution(int[] A, int X) 
{
int N= A.length;
 if (N == 0) 
 { 
    return -1;

 } 
 //sorting the array elements in increasing order by quick sort
int l = 0; //1st element
int r = N - 1; //last element
while (l<r) 
{ 
    int m= (l + r) / 2;
     if (A[m] > X) 
     { 
         r=m-1;
     } 
     else 
     {
         l=m;
     }
    l++;
}

if (A[l] == X)
{ 
 return l;

}
else{
 return -1;
 

}

}
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter X:");
int X=sc.nextInt();
System.out.println("Enter size of the array:");
int N=sc.nextInt();
int [] A=new int[N];
int i=0;
System.out.println("Enter the array element:");
while(i<N){
    A[i]=sc.nextInt();
    i++;
}
int x=solution (A,X);
System.out.println("Location of "+X+" is: "+(x+1));
}
}