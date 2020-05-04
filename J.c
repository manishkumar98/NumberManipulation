#include<stdio.h>
#include<math.h>
int main()
{
	long long ans[1000000],x,ans2;
	scanf("%lld",&x);
	ans[0]=1e15+5;
	int i=1;
	while(x%2==0)
	{
		if(ans[i-1]!=2)
			ans[i++]=2;
		x=x/2;
	}
	for(int j=3;j<=sqrt(x);j+=2)
	{
		while(x%j==0)
		{	
			if(ans[i-1]!=j)
				ans[i++]=j;
			x=x/j;
		}
	}
	if (x > 2)  
		if(ans[i-1]!=x)
          ans[i++]=x;
    ans2=ans[1];
    if(ans2==x)
    {
    	ans2=ans2^0;
    	printf("%lld\n",ans2);
    }
    else
    {
    	/*for(int j=1;j<i;j++)
    	{
    		printf("%lld ",ans[j]);
    	}
    	printf("\n");*/
    for(int j=2;j<i;j++)
    {
      ans2=ans2^ans[j];
    }
    printf("%lld\n",ans2);
}


}
/*In this task, given an integer X (in base 10), you are supposed to find the bitwise-xor of
the binary representation of all it’s unique prime factors. If X is prime, xor with 0. Write a
program to do the same.
Input
The only line of input contains a single integer X (0 ≤ X ≤ 10 15 ).
Output
Print a single integer S, denoting the xor of the prime factors of the given number X, in base
10.
input
6744518270181
output
39441627327
input
67231
output
67231*/
