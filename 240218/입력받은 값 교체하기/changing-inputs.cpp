#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;
    int temp;

    temp=a;
    a=b;
    b=temp;

    cout << a << " " << b;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}