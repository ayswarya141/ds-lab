#include <stdio.h>
void linear(int arr[],int,int);
void linear(int arr[],int n,int key){
	int flag=0,i=0;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			flag=1;
			break;
		}	
	}
	if(flag==1){
		printf("Element:%d is found at %d position\n",key,i+1);
	}
	else{
		printf("Element not found\n");
	}
}
void sort(int arr[],int n);
void sort(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void binary(int arr[],int n,int key,int lower,int upper);
void binary(int arr[],int n,int key,int lower,int upper){
	static int mid;
	mid=(lower+upper)/2;
	if(arr[mid]==key){
		printf("Element:%d is found at %d position\n",key,mid+1);
		return;
	}
	else if(arr[mid]>key){
		return binary(arr,n,key,lower,mid-1);
	}
	else{
		return binary(arr,n,key,mid+1,upper);
	}
	printf("Element not present:\n");
}
void main(){
	int n,key,choice;
	printf("Enter the no of elements in the array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched:\n");
	scanf("%d",&key);
	printf("Enter your choice:\n");
	printf("1.Linear search:\n");
	printf("2.Binary search:\n");
	scanf("%d",&choice);
	if(choice==1){
		linear(arr,n,key);
	}
	else if(choice==2){
		sort(arr,n);
		printf("SORTED ARRAY IS :\n");
		for(int p=0;p<n;p++){
			printf("%d \n",arr[p]);
		}
		static int lower=0,upper;
		upper=n;
		binary(arr,n,key,lower,upper);
	}
	else{
		printf("No such a choice:");
	}
}
