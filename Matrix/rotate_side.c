#include <stdio.h>
#include <conio.h>

int main() {
	int N, Nsqr;
	
	// [Input from user Block]
	while(1) {
		printf("Enter the size of the matrix : ");
		scanf("%i", N);
		
		if(N < 2)
			printf("\n! Matrix's size can't be smaller than 4 \n");
		else if(N > 100)
			printf("\n! Matrix is too big, try a smaller size (should be <= 100)\n");
		else
			break;
	}
	
	// Initialization of the Matrix
		Nsqr = N*N;
	int matrix[Nsqr];
	
	for(int i=0; i<Nsqr; i++) {
		scanf("%i", &matrix[i]);
	}
	// End of [Input from user Block]
	
	// [Print the matrix]
	for(int i=0; i<Nsqr; i++) {
		printf("%i, ", matrix[i]);
	}
	// End of [Print the matrix]
	return 0;
}
