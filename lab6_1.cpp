#include<iostream>
using namespace std;

int main(){
    int N=1;
    int countE = 0;
    int countO = 0;
    while (N != 0){
        cout << "Enter an integer: ";
        cin >> N;
    if (N != 0 ){
        if (N % 2 ==0 ){
        countE++;

    }else{countO++;}
}
    }

    cout << "#Even numbers = " << countE << endl;
    cout << "#Odd numbers = " << countO;
    return 0;
}
