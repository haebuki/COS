// You may use include as below.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long num) {
    // Write code here.
    long long answer = 0;
    int count=1;
    num = num + 1;
    answer = num;
    while (1)
    {
        if (num % 10 == 0)
        {
            answer = answer + count;

        }
        count = count * 10;
        num = num / 10;
        if (num < 10)
            break;
    }

    return answer;
}

// The following is main function to output testcase.
int main() {
    long long num = 259;
    long long ret = solution(num);

    // Press Run button to receive output. 
    printf("Solution: return value of the function is %lld .\n", ret);
}