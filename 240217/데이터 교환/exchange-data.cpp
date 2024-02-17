#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp1;
    int temp2;

    temp1=b;
    temp2=c;
    b=a;
    c=temp1;
    a=temp2;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}