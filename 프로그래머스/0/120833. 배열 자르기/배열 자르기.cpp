#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    
    int idx = num1 ;
    for(int i=0;i<=(num2-num1);i++){
        answer.push_back(numbers[idx++]);
    }
    return answer;
}