#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
   int n,a[100],pos[10000]={0},neg[10000]={0},index=0,max=0;
   scanf("%d",&n);

   int check;
   if(n%2==0)
    check=n/2;
   else
    check=(n/2)+1;

   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>=0){
        pos[a[i]]++;
        if(pos[a[i]]>=max){
            max=pos[a[i]];
            index=a[i];
        }
    }
    else{
            neg[-1*a[i]]++;
            if(neg[-1*a[i]]>=max){
                max=neg[-1*a[i]]++;
                index=a[i];
            }
    }
   }
   if(max>=check)
    printf("%d",index);
   else
        printf("NO MAJORITY ELEMENT");
return 0;

}
/*In this task you are supposed to find the majority element of a given array. A majority ele-
ment of a given array of size N is defined as the element that occurs atleast N/2 times in it.
If N is odd, apply the ceiling function on N/2. So, given an array, compute its majority element.
Input
The first line contains a single integer N (1 ≤ N ≤ 10 5 ) denoting the size of the given array A.
The next line contains N space-separated integers (−10 9 ≤ A i ≤ 10 9 ) denoting the array A.
Output
Print a single integer X, which is the majority element of the given array. If more than one
majority element exist, print the greatest one. If no majority element is present, print “NO
MAJORITY ELEMENT”.
input
11
1 2 2 2 8 8 1 1 1 1 1
output
1
input
12
1 2 -7 -1 -1 7 -23 -23 -12 -67 12 78
output
NO MAJORITY ELEMENT*/
