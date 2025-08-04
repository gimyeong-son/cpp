#include <iostream>
using namespace std;

// 배열로 매개변수를 사용하면 포인터와 마찬가지로 실제로는 주솟값을 전달 받는다는 의미이다.
int average(int _array[], int _count)
{
    int sum = 0;
    for(int i = 0; i < _count; i++)
    {
        sum += _array[i];
    }
    return (sum / _count);
}

int main()
{
    int score[5] = { 90, 75, 80, 100, 65 };
    cout << "평균 점수 : " << average(score, 5) << endl;
    return 0;
}