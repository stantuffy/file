#include "file.h"
#define TEST_FILE "persone.txt"

_Bool testGetStringByLine() {
	return strcmp(getStringByLine(TEST_FILE, 7), "Jacopo Piccioni 21 Roma\n") == 0;
}

_Bool testGetStringByName() {
	return strcmp(getStringByName(TEST_FILE, "Jacopo"), "Jacopo Piccioni 21 Roma\n") == 0;
}

_Bool testFind() {
	return find(TEST_FILE, "Corinna");
}

_Bool testAppend() {
	append(TEST_FILE, "Gabriele Romualdi 21 Roma");
	return find(TEST_FILE, "Gabriele");
}

int main() {
	//printFile("persone.txt");
	printf("%d\n", testGetStringByLine());
	printf("%d\n", testGetStringByName());
	printf("%d\n", testFind());
	printf("%d\n", testAppend());
	system("pause");
}