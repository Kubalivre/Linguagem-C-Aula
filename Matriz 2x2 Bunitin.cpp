#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	
	int M[2][2] = {
		{5,2},
		{7,6}
	};
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
