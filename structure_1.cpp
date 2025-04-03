#include <iostream>
using namespace std;

int main(){
    int i, j, term_num;

    for(int j = 0; j < 2; j++){
        // 다항식 입력받기
        // 다항식의 항의 수 입력받기
        cin >> term_num;

        // 다항식의 항의계수, 지수 입력받기
        // 계수는 영어로 coefficient, 지수는 영어로 exponent
        int coeff[j][term_num];
        int expo[j][term_num];

        for(int i = 0; i < term_num; i++){
            cin >> coeff[j][i] >> expo[j][i];
        }
        // 여기까지 다항식 두개 입력 완료
    }


    // 두 다항식을 더한 다항식에 대해
    // 지수의 내림차순으로 출력
    // 다항식을 더하려면? 지수가 같은게 있다면 계수를 더하고
    // 지수가 다르면 그냥 출력하면 됨
    // 지수는 expo
    int term[term_num];
    for(int i = 0; i < term_num; i++){
        if(coeff[0][i] == coeff[1][i]){
            term[i] = coeff[0][i] + coeff[1][i];
        }
        else{
            cout << coeff[0][0] << " " << expo[0][0] << endl;
            cout << coeff[1][0] << " " << expo[1][0] << endl;
        }
    }





    /*
    for(int i = 0; i < term_num; i++){
        cout << coeff[i] << " " << expo[i] << endl;
    }
    */
    

}