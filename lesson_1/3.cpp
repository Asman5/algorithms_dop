#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = n - 1; i > 1; i--)
    {
        if(n % i == 0){
            cout << "not prime";
            return 0;
        }
    }
    cout << "prime";

    return 0;
}