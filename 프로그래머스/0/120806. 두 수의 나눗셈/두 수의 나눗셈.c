#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    double num3 = (double)num1/(double)num2;
    num3*=1000;
    int answer = num3;
    return answer;
}