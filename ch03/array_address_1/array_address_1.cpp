#include <iostream>
using namespace std;

/**
 * 배열 원소의 주소와 포인터 연산의 결과
 * - 배열의 인덱스로 각 원소에 접근하는 것처럼, 포인터 연산으로도 각 원소에 접근할 수 있다.
 * - 1. &lotto[0] == lotto + 0
 * - 2. &배열_변수[인덱스] == 배열_변수 + 인덱스
 * - 이러한 특징이 성립하는 이유는 배열의 이름인 lotto가 첫 번째 원소의 주소 &lotto가 첫 번째 원소의 주소 &lotto[0]를 가리키기 때문이다.
 * - 포인터 연산에서 덧셈은 자료형의 크기를 곱한 만큼 덧셈을 수행한다.
 * - 즉 int이면 주소가 4byte씩 증가한다.
 * - 이 원리는 사칙 연산과 증감 연산(++, --) 같은 단항 연산자에서도 같다.
 */
int main()
{
    int lotto[45] = { 
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 
    };

    cout << "lotto[0] Address: " << &lotto[0] << endl;
    cout << "lotto[1] Address: " << &lotto[1] << endl;
    cout << "lotto[2] Address: " << &lotto[2] << endl;
    cout << "lotto[3] Address: " << &lotto[3] << endl;
    cout << "lotto[4] Address: " << &lotto[4] << endl;
    cout << "lotto[5] Address: " << &lotto[5] << endl << endl;

    cout << "(lotto + 0) Address: " << lotto + 0 << endl;
    cout << "(lotto + 1) Address: " << lotto + 1 << endl;
    cout << "(lotto + 2) Address: " << lotto + 2 << endl;
    cout << "(lotto + 3) Address: " << lotto + 3 << endl;
    cout << "(lotto + 4) Address: " << lotto + 4 << endl;
    cout << "(lotto + 5) Address: " << lotto + 5 << endl;
    
    return 0;
}