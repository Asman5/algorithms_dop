//gcd(a, b)
#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = 0;
    if(a > b){
        c = b;
    }
    else{
        c = a;
    }
    for(int i = c; i > 0; i--){
        if(a % i == 0 && b % i == 0){
            cout << i;
            break;
        }
    }

    return 0;
}
