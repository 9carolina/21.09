/*0 1 2 3 4 5   [fila, columna] = [fila][columna]
  1
  2
  3
  4			*/
#include<stdio.h>
int main(){
	int i, j, a[5][2]={{0,0},{1,2},{2,4},{3,6},{4,8}};
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("a[%d][%d]=%d\n", i,j,a[i][j]);
		}
	}
	
	return 0;
}
