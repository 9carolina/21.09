#include<stdio.h>
int main(){
	int arr1[]={1,2,3,4,5}, arr2[]={6,7,8,9,10}, res[5], i, z;
	 
	 printf("1.Div\n2.Mult\n3.Suma\nIngrese un numero segun la operacion: ");
	 scanf("%d", &i);
	 
	for (i=0; i<5; i++){
		if(z=1){
			res[i]=arr1[i]/arr2[i];
		}
		else if(z=2){
			res[i]=arr1[i]*arr2[i];
		}
		else if (z=3){
		res[i]=arr1[i]*arr2[i];
		}
	}

	for (i=0; i<5; i++)
	printf("%d\t", res[i]);
	
	return 0;
}
