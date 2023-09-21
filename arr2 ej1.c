#include<stdio.h>
int main(){
	int arr1[]={1,2,3,4,5}, arr2[]={6,7,8,9,10}, res[5], i;
	 
	for (i=0; i<5; i++){
		res[i]=arr1[i]+arr2[i];
	}

	for (i=0; i<5; i++)
	printf("%d\t", res[i]);
	
	return 0;
}
