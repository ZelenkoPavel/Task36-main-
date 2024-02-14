#include <iostream>
#include <string>

using namespace std;

#define vertically 3
#define horizontally 6


int max_number_of_increments(int matrix[vertically][horizontally]) {
	string msg = "";
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
					number_of_increments = 1;
				}
			}
		}
		if (number_of_increments > max_number) {
			max_number = number_of_increments;
		}
	}
	for (int k = 0; k < vertically; k++) {
		int count = 0;
		for (int l = 0; l < horizontally - 1; l++) {
			if (matrix[k][l] < matrix[k][l + 1]) {
				count++;
			}
			else {
				if (count == max_number) {
					return max_number;
				}
				else {
					count = 0;
				}
			}
		}
	}
	return max_number;
}