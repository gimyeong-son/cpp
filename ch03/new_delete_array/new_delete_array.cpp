#include <iostream>
using namespace std;

int main()
{
    int *pt_int_array_value = new int[5]; // 동적 메모리 할당(배열)

    for (int i = 0; i < 5; i++)
    {
        pt_int_array_value[i] = i; // 할당된 배열 변수에 0~4까지 순서대로 넣기
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(pt_int_array_value + i) << endl;
    }

    delete[] pt_int_array_value; // 반드시 사용이 끝난 메모리는 해제해줘야 메모리 누수가 발생하지 않는다.
    return 0;
}