#include<stdio.h>
void read(int arr[],int);
void display(const int arr[],int);
main(){
	int i,num,loc,arr[100];
	printf("Enter number of elements in the array\n");
	scanf("%d",&num);
	read(arr,num);
	printf("Reading data successful! Array is:\n");
	display(arr,num);
printf("\nEnter Location of Number to be deleted\n");
scanf("%d",&loc);
if(loc>0){
	for(i=loc-1;i<num-1;i++){
	arr[i]=arr[i+1];        }
display(arr,num-1);
}
else{
	printf("Location can only be greater than or equal to 1.\n");  }
}
void read(int arr[],int i){
	int j;
	printf("Start entering values.\n");
	for(j=0; j<i; j++){
	printf("\narr[%d]=",j);
	scanf("%d",&arr[j]);
	}}
void display(const int arr[],int i){
	int j;
	for(j= 0; j <i; j++){
		printf("%d ",arr[j]);
	}}