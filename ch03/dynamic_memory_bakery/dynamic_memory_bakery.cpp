#include <iostream>
#include <string>

using namespace std;

/**
 * 포인터를 다룰 때 주의할 점
 * 1. 포인터를 역참조하기 전에 포인터가 유효한 메모리를 가리키는지 확인해야 한다.
 * - 유효하지 않은 메모리를 가리키는 포인터를 역참조하려고 하면 세그멘테이션 실패나 런타임 오류가 발생한다.
 * 2. 할당된 메모리의 범위를 벗어나는 포인터 연산은 피해야 한다.
 * - 할당하지 않은 메모리에 접근했는데 만일 다른 곳에서 사용하는 메모리라면 엄청난 문제가 발생한다.
 * 3. 할당 해제된 메모리를 역참조하지 말아야 한다.
 * - 할당 해제된 메모리를 접근한면 2번과 같은 문제나 정의되지 않은 동작이 발생한다.
 */
int main()
{
    int customer_num = 0;

    cout << "오늘 방문 손님: ";
    cin >> customer_num; // 손님 수 입력
    
    string *bread = new string[customer_num];
    
    for(int i = 0; i < customer_num; i++)
    {
        bread[i] = "빵_" + to_string(i);
    }

    cout << endl << "---생산된 빵---" << endl;
    for(int i = 0; i < customer_num; i++)
    {
        cout << *(bread + i) << endl;
    }

    delete[] bread;

    return 0;
}