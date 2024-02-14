#include <iostream>
#include <string>
#include <time.h>

using namespace std;

#define vertically 3
#define horizontally 6

void random_init_matrix(int matrix[vertically][horizontally], int max, int min) {
	srand(time(NULL));
	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}
	for (int i = 0; i < vertically; i++) {
		for (int j = 0; j < horizontally; j++) {
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

string convert_matrix_to_string(int matrix[vertically][horizontally]) {
	string msg = "";

	for (int i = 0; i < vertically; i++) {
		for (int j = 0; j < horizontally; j++) {
			if (matrix[i][j] < 0) {
				msg += to_string(matrix[i][j]) + " ";
			}
			else if (matrix[i][j] >= 0 && matrix[i][j] < 10) {
				msg += " " + to_string(matrix[i][j]) + " ";
			}
			else {
				msg += to_string(matrix[i][j]) + " ";
			}
		}
		msg += "\n";
	}

	return msg;
}