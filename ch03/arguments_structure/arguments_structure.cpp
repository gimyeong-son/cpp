#include <iostream>
using namespace std;

/**
 * 구조체
 * - struct 키워드로 정의하며, 다른 데이터 형식 여러 개를 묶어 하나의 커스텀 데이터 형식을 만드는데 사용한다.
 * - 구조체는 여러 개의 멤버 변수를 가질 수 있으며, 각 멤버 변수는 다른 데이터 형식을 가질 수 있다.
 * - 구조체를 함수의 매개변수로 전달하여 복잡한 데이터를 쉽게 관리할 수 있다.
 * - 매개변수로 구조체를 전달할 때는 구조체의 복사본이 함수로 전달된다.
 * - 구조체는 메모리에 연속으로 할당되며, 구조체의 멤버 변수에는 점(.) 연산자로 접근할 수 있다.
 * ------------------------------------------------------------------------------------
 * - 구조체를 사용하면 관련 값을 하나의 객체로 그룹화하므로 코드를 더 읽기 쉽고 유지 관리하기 좋게 만들 수 있다.
 * - 함수에 전달할 인자가 많을 때 특히 유용하다.
 * - 구조체가 매우 크면 성능 문제가 발생할 수 있다.
 *  - 이럴때는 복사본 대신 구조체에 포인터(주소)를 전달하면 해결할 수 있다.
 */
struct Person
{
    string name;
    int age;
    float height;
    float weight;
};

void check_age(Person* _adult, int _count)
{
    for(int i = 0; i < _count; i++)
    {
        if(_adult[i].age >= 25)
        {
            cout << "name : " << _adult[i].name << endl;
            cout << "age : " << _adult[i].age << endl;
            cout << "height : " << _adult[i].height << endl;
            cout << "weight : " << _adult[i].weight << endl;
        }
    }
}

int main()
{
    Person adult[3] =
    {
        { "Brain", 24, 100, 70 },
        { "Jessica", 22, 165, 55 },
        { "James", 30, 170, 65 },
    };
    check_age(adult, 3);

    return 0;
}