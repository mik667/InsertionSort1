
template<typename T> void ExchangeSort(T arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int copy = arr[i];
				arr[i] = arr[j];
				arr[j] = copy;

			}
		}
	}
}
