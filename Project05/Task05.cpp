#include <iostream>

using namespace std;

#define vertically 3
#define horizontally 6


void random_init_matrix(int matrix[vertically][horizontally], int max, int min);
string convert_matrix_to_string(int matrix[vertically][horizontally]);
int sum_matrix_number(int matrix[vertically][horizontally]);



int main() {

	int max = 1, min = -5;
	int matrix[vertically][horizontally];

	random_init_matrix(matrix, max, min);

	cout << convert_matrix_to_string(matrix) << endl;

	cout << "The sum of the numbers : " << sum_matrix_number(matrix) << endl;

	return 0;
}