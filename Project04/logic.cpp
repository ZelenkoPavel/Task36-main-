#include <iostream>
#include <string>

using namespace std;

#define vertically 3
#define horizontally 6


int max_number_of_increments(int matrix[vertically][horizontally]) {
	int max_number = -2147483648;
	for (int i = 0; i < vertically; i++) {
		int number_of_increments = 1;
		for (int j = 0; j < horizontally - 1; j++) {
			if (matrix[i][j] < matrix[i][j + 1]) {
				number_of_increments++;
			}
			else {
				if (number_of_increments > max_number) {
					max_number = number_of_increments;
				}
				number_of_increments = 1;
			}
		}
		if (number_of_increments > max_number) {
			max_number = number_of_increments;
		}
	}

	return max_number;
}