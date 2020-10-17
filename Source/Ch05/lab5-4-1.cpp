#include			<iostream>
#include			<iomanip>
using	namespace	std;


const int 	NUM_ROWS = 6; // Number of rows
const int 	NUM_COLS = 5; // Number of columns
const int	SIZE=10;
void		findMaxSum(int [], int [][5]);

int		main()
{
		int 		result[SIZE] = {0}; 
		int 	numbers[NUM_ROWS][NUM_COLS] = {	{2, 7, 9, 6, 4},
								{6, 1, 8, 10, 4},
								{4, 3, 7, 2, 9},
								{9, 9, 0, 3, 1},
								{8, 8, 7, 8, 9},
								{1, 2, 1, 2, 3}};

		findMaxSum(result, numbers);
		cout << "The row values are:" ;
		for(int i=0; i<NUM_COLS; i++)
			cout << setw(5) << result[i] ;
		cout << endl;

}

void		findMaxSum(int result[], int num[][NUM_COLS])
{
	int maxsum = 0, sum, idx;
	for(int i=0; i<NUM_ROWS; i++) {
		sum = 0;
		for(int	j=0; j<NUM_COLS; j++){
			cout << setw(5) << num[i][j];
			sum += num[i][j];
		}
		cout << "\tThe sum of row is :" << setw(5) << sum << endl;
		if (i==0) {
			maxsum = sum;
			idx = i;
		}
		else if (maxsum < sum){
			maxsum = sum;
			idx = i;
		}
	}
	cout << "The max sum of row is " << maxsum << endl;
	for(int i=0; i<NUM_COLS; i++)
		result[i] = num[idx][i];
}
