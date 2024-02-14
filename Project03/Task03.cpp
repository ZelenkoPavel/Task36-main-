#include <iostream>

using namespace std;

#define vertically 3
#define horizontally 6


void random_init_matrix(int matrix[vertically][horizontally], int max, int min);
string convert_matrix_to_string(int matrix[vertically][horizontally]);
string max_sequence_numbaers(int matrix[vertically][horizontally]);



int main() {

	int max = 5, min = 1;
	int matrix[vertically][horizontally];

	random_init_matrix(matrix, max, min);

	cout << convert_matrix_to_string(matrix) << endl;

	cout << "Columns with a monotonous sequence: " << max_sequence_numbaers(matrix) << endl;

	return 0;
}