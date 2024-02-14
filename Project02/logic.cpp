#define vertically 4
#define horizontally 3


int searching_for_columns_with_a_monotonous_sequence(int matrix[vertically][horizontally]) {
	int max = -2147483648;
	for (int i = 0; i < vertically; i++) {
		bool flag_1 = true;
		bool flag_2 = true;
		for (int j = 1; j < horizontally; j++) {
			if (matrix[i][j - 1] > matrix[i][j]) {
				flag_1 = false;
				break;
			}
		}
		for (int k = 1; k < horizontally; k++) {
			if (matrix[i][k - 1] < matrix[i][k]) {
				flag_2 = false;
				break;
			}
		}
		if (flag_1 || flag_2) {
			for (int l = 0; l < horizontally; l++)
			{
				if (max < matrix[i][l]) {
					max = matrix[i][l];
				}
			}
		}
	}

	return max;
}