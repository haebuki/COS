#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* func_a(char* str, int len) {
    char* padZero = (char*)malloc(sizeof(char) * len);
    for (int i = 0; i < len; i++)
        padZero[i] = 0;
    int padSize = len - strlen(str);
    for (int i = 0; i < padSize; i++)
        padZero[i] = '0';
    strcat(padZero, str);
    return padZero;
}
int max(int a, int b) {
    return a > b ? a : b;
}
int solution(char* binaryA, char* binaryB) {
    int max_length = max(strlen(binaryA), strlen(binaryB));
    if (max_length > strlen(binaryA))
        binaryA = func_a(binaryA, max_length);
    if (max_length > strlen(binaryB))
        binaryB = func_a(binaryB, max_length);


    int hamming_distance = 0;
    for (int i = 0; i < max_length; i++)
        if (binaryA[i] != binaryB[i])
            hamming_distance += 1;
    return hamming_distance;
}

// The following is main function to output testcase.
int main() {
    char* binaryA = "10010";
    char* binaryB = "10220";
    int ret = solution(binaryA, binaryB);

    // Press Run button to receive output. 
    printf("Solution: return value of the function is %d .\n", ret);
}