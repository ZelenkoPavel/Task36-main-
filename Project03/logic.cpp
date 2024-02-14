#include <iostream>
#include <string>

using namespace std;

#define vertically 3
#define horizontally 6


string max_sequence_numbaers(int matrix[vertically][horizontally]) {
	string msg = "";
	int first_sequence = 0;
	for (int i = 0; i < vertically; i++) {
		int second_sequence = 0;
		for (int j = 1; j < horizontally; j++) {
			if (matrix[i][j - 1] == matrix[i][j]) {
				second_sequence++;
			}
			else {
				if (second_sequence > first_sequence) {
					int t = second_sequence;
					second_sequence = 0;
					first_sequence = t;
				}
			}
		}
	}
	for (int k = 0; k < vertically; k++) {
		int count = 0;
		for (int l = 1; l < horizontally; l++) {
			if (matrix[k][l - 1] == matrix[k][l]) {
				count++;
			}
			else {
				if (count == first_sequence) {
					msg += to_string(k + 1) + " ";
					break;
				}
				else {
					count = 0;
				}
			}
		}
	}
	return msg;
}