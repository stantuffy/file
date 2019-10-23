#define LINE_SIZE 100

char* getStringByLine(const char* fileName, const unsigned int line);

char* getStringByName(const char* fileName, const char* string);

_Bool eraseByLine(const char* fileName, const unsigned int line);

_Bool eraseByName(const char* fileName, const char* string);

_Bool append(const char* fileName, const char* string);

_Bool find(const char* fileName, const char* string);

void printFile(const char* fileName);



