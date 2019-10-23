#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)


char* getStringByLine(const char* fileName, const unsigned int line) {
	FILE* fp = fopen(fileName, "r");

	if (fp) {
		unsigned int currentLine = 0;
		char* buffer = malloc(LINE_SIZE);
		while (fgets(buffer, LINE_SIZE, fp) != NULL) {
			if (currentLine == line) {
				return buffer;
			}
			++currentLine;
		}
		free(buffer);
		fclose(fp);
	}
	else {
		fclose(fp);
		return NULL;
	}
}

char* getStringByName(const char* fileName, const char* keyString) {
	FILE* fp = fopen(fileName, "r");

	if (fp) {
		char* buffer = malloc(LINE_SIZE);
		while (fgets(buffer, LINE_SIZE, fp) != NULL) {
			if (strstr(buffer, keyString) != NULL) {
				return buffer;
			}
		}
		free(buffer);
		fclose(fp);
	}
	else {
		fclose(fp);
		return NULL;
	}
}

_Bool eraseByLine(const char* fileName, const unsigned int line) {
	FILE* fp = fopen(fileName, "r");
	FILE* newFp = fopen(fileName, "w");

	if (!fp || !newFp) {
		return 0;
	}
	else {
		char* buffer = malloc(LINE_SIZE);
		while (!feof(fp)) {
			
		}
		free(buffer);
		return 0;
	}
}

_Bool erase(const char* fileName, const char* keyString) {
	return 0;
}

_Bool append(const char* fileName, const char* string) {
	FILE* fp = fopen(fileName, "a");

	if (fp) {
		fputs("\n", fp);
		fputs(string, fp);
		return 1;
	}
	else {
		return 0;
	}
}

_Bool find(const char* fileName, const char* string) {
	FILE* fp = fopen(fileName, "r");

	if (fp) {
		char* buffer = malloc(LINE_SIZE);
		while (fgets(buffer, LINE_SIZE, fp) != NULL) {
			if (strstr(buffer, string) != NULL) {
				return 1;
			}
		}
		free(buffer);
		fclose(fp);
	}
	else {
		fclose(fp);
		return 0;
	}
}

void printFile(const char* fileName) {
	FILE* fp = fopen(fileName, "r");
	char* buffer = malloc(LINE_SIZE);

	while (fgets(buffer, LINE_SIZE, fp) != NULL) {
		printf("%s", buffer);
	}
	free(buffer);
	fclose(fp);
}