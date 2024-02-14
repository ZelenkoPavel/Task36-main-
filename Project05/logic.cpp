#include <iostream>
#include <string>

using namespace std;

#define vertically 3
#define horizontally 6


int sum_matrix_number(int matrix[vertically][horizontally]) {
	int sum_number = 0;

	for (int i = 0; i < vertically; i++) {
		int first_index = 0;
		int second_index = 0;
		for (int j = 0; j < horizontally; j++) {
			if (matrix[i][j] > 0) {
				first_index = j + 1;
				break;
			}
		}
		if (first_index > 0) {
			for (int k = first_index + 1; k < horizontally; k++) {
				if (matrix[i][k] > 0 && k < horizontally) {
					second_index = k;
					break;
				}
				if (k == horizontally - 1) {
					second_index = horizontally;
					break;
				}
			}
		}
		for (int l = first_index; l < second_index; l++) {
			//cout << "sum_number += " << matrix[i][l] << " i = " << i << endl;
			sum_number += matrix[i][l];
		}
	}
	
	return sum_number;
}