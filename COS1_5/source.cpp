// You may use include as below.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    // Write code here.
    int answer = 0;
	int k = 1, nk, temp;

	temp = n;
	while (1)
	{
		nk = 2 * n - 2 + k;
		answer = answer + k + nk;
		k = nk + 2 * n - 2;

		n = n - 2;

		if (n < 2)
		{
			if (n % 2 != 0)
			{
				answer = answer + k;
			}
			break;
		}
	}
    return answer;
}

// The following is main function to output testcase.
int main() {
    int n1 = 7;
    int ret1 = solution(n1);

    // Press Run button to receive output. 
    printf("Solution: return value of the function is %d .\n", ret1);

    int n2 = 2;
    int ret2 = solution(n2);

    // Press Run button to receive output. 
    printf("Solution: return value of the function is %d .\n", ret2);
}
