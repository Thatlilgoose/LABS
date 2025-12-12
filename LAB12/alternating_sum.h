int alternating_sum(int* p) {
	int summ = 0;
	for (int i = 0; i < 20; i++) {
		if (i % 2 != 0) {
			summ += *(p + i);
		}
		else {
			summ -= *(p + i);
		}
	}
	printf("%d", summ);
	return 0;
}