#include <iostream>
#include <cassert>

using namespace std;

void print_number(int* _pt_int)
{
    // assert는 디버그 모드에서만 컴파일되므로 다른 코드에 영향을 주지 않는 코드로만 작성해야 한다.
    // 잘못 사용한 예) assert (count++ > 0);
    assert(_pt_int != NULL); // true가 아니면 프로그램 실행이 중지되며 어떤 문제인지 알려준다.
    cout << *_pt_int << endl;
}

int main()
{
    int a = 100;
    int* b = NULL;
    int* c = NULL;

    b = &a;
    print_number(b);

    // c는 NULL인 상태로 인자 전달
    print_number(c);
    return 0;
}