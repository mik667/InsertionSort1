

template<typename T> void OptimizedBubbleSort(T arr[], int n) {
	int copy;
	bool flag = 1;

	while (flag = 1) {
		flag = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					copy = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = copy;
					flag = 0;
				}
			}
		}
		if (flag == 0) {
			break;
		}
	}
}

