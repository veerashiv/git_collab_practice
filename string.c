#include<stdio.h>
int main()
{
		char str[100];
		int i;
		printf("enter string :");
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
				for(j=i+1;j<len;j++)
				{
						if(str[i]==str[j])
						{
								cnt++;
						}
				}
		}
		printf("the repeated string :%s",str[i]);
}
int develop(int a, int b)
{
		sum=a+b;
		printf("after summing the result will be :",sum=a+b);
}


