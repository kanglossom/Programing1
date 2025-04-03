#include "polynomial.h"
#include <iostream>

using namespace std;

TermOperate::TermOperate(int coeff, int expo){
    // 생성자
    this->coeff = coeff;
    this->expo = expo;
}

TermOperate::~TermOperate(){
    // 소멸자
}

/*
int main(){
    int coeff, expo, term_num[1], i, j, k;

    for(j = 0; j < 2; j++){
        cin >> term_num[j];
        TermOperate term[j][term_num[j]];
        // TermOperate 타입의 term[j] 배열 생성

        for(i = 0; i < term_num[j]; i++){
            cin >> coeff >> expo;
            term[j][i] = TermOperate(coeff, expo);
        }
    }
    // 다항식 두개 입력 완료
    
    // 두 다항식을 더한 다항식에 대해
    // 지수의 내림차순으로 출력한 계수와 지수

    // 지수가 같은게 있는지를 찾아야함
    for(k=0; k < term_num[j]; k++){
        if(term[0][0].expo == term[1][0].expo){
            term[3][k] = term[0][0].coeff + term[1][0].coeff;
        }
    }

}
*/