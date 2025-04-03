#include <iostream>
#include "vector2.h"

using namespace std;

// 생성자
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(double x, double y) : x(x), y(y) {} // 0으로 초기화

double Vector2::getX() const { return x; } // getX() 정의
double Vector2::getY() const { return y; } // getY() 정의

Vector2 operator+(const Vector2& lhs, const Vector2& rhs){
  // Vector2 타입으로 반환하는 + 연산자 오버로딩
  // lhs, rhs를 수정 불가능하도록 Vector2 객체 참조로 받음.
  // 즉 lhs, rhs는 Vector2 로 생성된 객체(ex. Vector2 v1(1,2))에서 v1의 다른이름(참조)
  // 참고로 lhs = letf-hand side, rhs = right-hand side
  return Vector2(lhs.getX() + rhs.getX(), lhs.getY() + rhs.getY());
  // 여기서 lhs.x의 .x : 생성된 객체의 멤버변수 x를 의미함.
}
Vector2 operator*(double scalar, const Vector2& rhs){
  return Vector2(scalar * rhs.getX(), scalar * rhs.getY());
}
Vector2 operator*(const Vector2& lhs, double scalar){
  return Vector2(lhs.getX() * scalar, lhs.getY()* scalar);
}
double operator*(const Vector2& lhs, const Vector2& rhs){
  return lhs.getX() * rhs.getX() + lhs.getY()* rhs.getY();
}
ostream& operator<<(ostream& out, const Vector2& vector){
  out << vector.getX() <<" "<< vector.getY();
  return out;
}

int main(int argc, char** argv) {
  double x1, y1, x2, y2, scalar;
  cin >> x1 >> y1 >> x2 >> y2 >> scalar;

  Vector2 v1(x1, y1);
  Vector2 v2(x2, y2);

  cout << v1 + v2 << endl;
  cout << scalar * v1 << endl;
  cout << v1 * v2 << endl;
  return 0;
}