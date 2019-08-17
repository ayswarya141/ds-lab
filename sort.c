#include <stdio.h>
void bubble(int [],int);
int main(){
int arr[30],c,n;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the number of elements\n");
for(c=0;c<n;c++)
{
	scanf("%d",&arr[c]);
}
bubble(arr,n);
printf("SORTED ARRAY IN ASCENDING ORDER:\n");
for(c=0;c<n;c++)
{
	printf("%d\n",arr[c]);
}
return 0;
}
void bubble (int arr[],int n)
{
int c,d,t;
for(c=0;c<n-1;c++)
	for (d=0;d<n-c-1;d++)
	{
		if (arr [d]>arr[d+1])
		{
			t=arr[d];
			arr[d]=arr[d+1];
			arr[d+1]=t;
		}
	}
}
