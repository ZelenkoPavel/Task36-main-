#include <iostream>
#include <string>

using namespace std;

#define vertically 3
#define horizontally 6


string searching_for_columns_with_a_monotonous_sequence(int matrix[vertically][horizontally]) {
	string msg = "";
	for (int i = 0; i < horizontally; i++) {
		bool flag_1 = true;
		bool flag_2 = true;
		for (int j = 1; j < vertically; j++) {
			if (matrix[j - 1][i] >= matrix[j][i]) {
				flag_1 = false;
				break;
			}
		}
		for (int k = 1; k < vertically; k++) {
			if (matrix[k - 1][i] <= matrix[k][i]) {
				flag_2 = false;
				break;
			}
		}

		if (flag_1 || flag_2) {
			msg += to_string(i + 1) + " ";
		}
	}

	return msg;
}

