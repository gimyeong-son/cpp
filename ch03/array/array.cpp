#include <iostream>
using namespace std;

/**
 * 배열과 포인터
 * - 자료형 배열_이름[크기] = { 값1, 값2, 값3, ... , 값n };
 */

int main()
{
    int lotto[45] = { 
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 
    };

    cout << "Today's Lotto : "
         << lotto[0]  << ", " << lotto[7]  << ", " << lotto[15] << ", "
         << lotto[27] << ", " << lotto[36] << ", " << lotto[44] << endl;

    for(int number : lotto) {
        cout << number << " ";
        if(number % 5 == 0) {
            cout << endl;
        }
    }

    return 0;
}