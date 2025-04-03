#include <iostream>
using namespace std;
int main()
{
    // 부모 클래스 = Person
class Person{
    private :
        string name; // 이름
        string idNum; // 주민등록번호 또는 학번
    public : 
        //...
        Person(string name, string idNum); // 생성자 추가
        void print(); // 정보 출력
        string getName(); // 이름 반환
    };

    // 자식 클래스 = Student
class Student : public Person{ // Person을 상속받음
    private :
        string major; // 전공
        int gradYear; // 졸업 연도
    public :
        //...
        // 생성자 추가
        Student(string name, string idNum, string major, int gradYear)
        : Person(name, idNum), major(major), gradYear(gradYear) {}
        void print(); // 학생에게맞게 다시 정의(오버라이딩)
        void changeMajor(const string& newMajor);
        // 전공 변경
    };

    Person person("Mary", "12-345");
    Student student("Bob", "98-765", "Math", 2012);

    cout << student.getName() << endl;
}