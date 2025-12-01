#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char text[100];
	fgets(text, sizeof(text), stdin);
	/*char* word;*/
	text[strcspn(text, "\n")] = '\0';

	/*word = strtok(text, " ");
	while (word != NULL) {
		if (word[0] == 'a') {
		}
		word = strtok(NULL, " ");
	}*/
	char textCopy[100];
	strcpy(textCopy, text);

	char *minWord = NULL;
	char* currentWord = strtok(textCopy, " ");

	while (currentWord != NULL) {
		if (minWord == NULL || strcmp(currentWord, minWord) < 0) {
			minWord = currentWord;
		}
		currentWord = strtok(NULL, " ");
	}
	if (minWord != NULL) {
		printf("\nMin word : % s\n", minWord);
	}
	return 0;
}