#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    double  num;
    num = double(num1)/double(num2);
    answer = num*1000;
    return answer;
}