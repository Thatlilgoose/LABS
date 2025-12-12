int completion(int* p) {
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		*(p + i) = rand();
	}
	return 0;
}
