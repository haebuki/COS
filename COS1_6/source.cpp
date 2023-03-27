// You may use include as below.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int dx[] = { 1, 1, -1, -1, 2, 2, -2, -2 };
int dy[] = { 2, -2, 2, -2, 1, -1, 1, -1 };

int range(int x, int y)
{
    return ((1 <= x && x <= 8) && (1 <= y && y <= 8));
}

int solution(char* pos) {
    // Write code here.
    int answer = 0;
    int x, y;
    x = pos[0] - 'A' + 1;
    y = pos[1] - '1' + 1;
    int x1, y1;

    for (int i = 0; i < 8; i++)
    {
        x1 = x + dx[i];
        y1 = y + dy[i];
        if (!range(x1, y1))
        {
            continue;
        }
        answer++;
    } 

    return answer;
}

// The following is main function to output testcase.
int main() {
    char* pos = "A7";
    int ret = solution(pos);

    // Press Run button to receive output. 
    printf("Solution: return value of the function is %d .\n", ret);
}