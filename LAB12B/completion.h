#ifndef completion_H
#define completion_H

#ifdef __cplusplus
extern "C" {
#endif
#define K 4
#define COLS 8
#define ROWS 6

int completion(int (*p)[COLS]) {
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			p[i][j] = rand();
		}
	}
	return 0;
}
#ifdef __cplusplus
}
#endif

#endif