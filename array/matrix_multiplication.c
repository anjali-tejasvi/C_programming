#include <stdio.h>
#include <stdlib.h>

// In order to multiply two matrices
//Column of 1st matrix = Row of 2nd matrix

void getMatrixElements(int matrix[10][10],int row, int column)
{
	printf("\nEnter the Elements\n");

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
}

//Function to Multiply the both Matrices
void multiplication(int first[][10],int second[][10],
					int result[][10],int r1,int c1,
					int r2, int c2)
{

	//Initializing elements of matrix mult to 0
	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c2; j++)
		{
			result[i][j] = 0;
		}
	}
	

	//Multiplying first and second matrices and storing in result
	for(int i = 0; i<r1; i++)
	{
		for(int j =0; j<c2; j++)
		{
			for(int k=0; k<r2 ; k++)
			{
				result[i][j] += first[i][k] * second[k][j];
			}
		}
	}
}

//Function to display the Matrix
void display(int result[][10],int row, int column)
{
	printf("\nResultant Matrix\n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<column ; j++)
		{
			printf("%d ",result[i][j]);
			if(j== column-1)
				printf("\n");

		}
	}
}


int main()
{
	int first[10][10], second[10][10], result[10][10];
	int r1, c1, r2, c2;
	printf("Enter the rows and the column of the first matrix:\n");
	scanf("%d %d",&r1,&c1);
	printf("Enter the rows and the column of the second matrix:\n");
	scanf("%d %d",&r2,&c2);

	/*Condition to check whether 
	  Column of the first matrix = Row of second matrix 
	*/

	// To get elements of the first Matrix
	getMatrixElements(first, r1, c1);

	//To get elements of the second Matrix
	getMatrixElements(second, r2, c2);

	//multiply two matrices
	multiplication(first,second,result,r1,c1,r2,c2);

	//display the resultant matrix
	display(result,r1,c2);
	

}
