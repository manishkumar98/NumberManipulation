#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmpfunc1 (const void * a, const void * b) 
{
   return *((char*) b) - *((char*) a);
}
int cmpfunc2 (const void * a, const void * b) 
{
	return *((char*) a) - *((char*) b);
}
char a[100000],s[100000],b[100000],ans[100000];
int main()
{
	
	scanf("%s",a);
	int l;
	l=strlen(a);
	qsort((void*)a,l,sizeof(a[0]),cmpfunc1);
	strcpy(b,a);
	qsort(a,l,sizeof(a[0]),cmpfunc2);
	strcpy(s,a);
	int i=0;
	while(s[i]=='0') i++;
	char temp;
	temp=s[i];
	s[i]=s[0];
	s[0]=temp;
	int c=0;
	for(int i=l-1;i>=0;i--)
	{
		int sub=((b[i]-'0')-(s[i]-'0')-c);
		if (sub < 0)  sub = sub + 10, c = 1;
        else c= 0; 
		ans[i] = sub + '0';
	}
	printf("%s\n", ans);
}
/*
You find a very interesting question in your maths test. Given a positive integer X (in base
10), you have to find the difference between the largest and smallest permutation of the digits
of X.
Note that, in this problem, a permutation beginning with 0s is not considered a proper permu-
tation, i.e. the smallest and largest permutations cannot have leading 0s.
Input
5
The only line of input contains a single integer X (0 ≤ X ≤ 10 10 ).
Output
Print a single integer denoting the difference between the largest and smallest permutation of
the given number X.
input
30411367001212
output
66432108877533
input
100000
output
0




#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    long long c=0;
	long long arr[1000001];
	long long arr1[1000001];
int main(){

	
	for(long long i=0;i<1000001;i++){
		arr[i]=0;
		arr1[i]=0;
	}
	do{
		long long num=0;
		scanf("%lld\n",&num);
		arr[c++]=num;
		arr1[c++]=num;
	}while(getchar()!=10);
	long long temp=0;
	long long temp1=0;
	long long tempx=0;
	long long tempy=0;
	long long len=c;//0-c-1 tak element hai
	for(long long i=0;i<len-1;i++){
		temp=i;
		tempx=i;
		for(long long j=i+1;j<len;j++){
			if(arr[j]>arr[temp])
				temp=j;
			if(arr1[j]<arr1[tempx])
				tempx=j;

		}
		temp1=arr[i];
		arr[i]=arr[temp];
		arr[temp]=temp1;
		tempy=arr1[i];
		arr1[i]=arr1[tempx];
		arr1[tempx]=tempy;

		
	}
	c=0;
	if(arr1[0]==0){
	while(arr1[c]==0){
		c++;
	}
	temp=arr1[c];
	arr1[c]=arr1[0];
	arr1[0]=temp;
  }
  for(long long i=len-1;i>=0;i--){
  	if(arr[i]>=arr1[i]){
  		arr[i]=arr[i]-arr1[i];
  	}
  	else{
  		arr[i]=10+arr[i]-arr1[i];
  		arr[i-1]--;
  	}
  }
for(long long i=0;i<len;i++)
	printf("%lld",arr[i]);

return 0;

}
*/
