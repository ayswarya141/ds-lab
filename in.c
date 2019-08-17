#include<stdio.h>
void insert(int a[20],int n){
	int temp,j,i;
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(a[j]<a[i]){
				temp=a[j];
				while(j>i)
				{
					a[j]=a[j-1];
					j=j-1;
				}
				a[j]=temp;
			}
		}
	}
	printf("sorted array is:");
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
void main()
{
	int a[20],n,i;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insert(a,n);
}

