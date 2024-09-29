
template<typename T> void insertionSort(T arr[], int n) {
	for (int i = 1; i < n; i++) {
		int el = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > el) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = el;
	}
}
