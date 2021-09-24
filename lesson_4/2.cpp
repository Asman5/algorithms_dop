#include <bits/stdc++.h>
using namespace std;

int main(){
    deque <int> p1;
    deque <int> p2;
    int n;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> n;

            if(!i){
                // cin >> n;
                p1.push_back(n);
            }
            else{
                // cin >> n;
                p2.push_back(n);
            }
        }
        
    }
    // i = 0, 1
    int count = 0;
    // 1 * 10^(power) 8 000 000 = 8e6 10 000 000 =  10e6 =  1e7
    while (count <= 1e6)
    {
        if(p1.empty()){
            cout << "second" << " " << count;
            return 0;
        }
        else if(p2.empty()){
            cout << "first" << " " << count;
            return 0;
        }
        else if(p1.front() == 0 && p2.front() == 9){
            p1.push_back(p1.front());
            p1.push_back(p2.front());
            p1.pop_front();
            p2.pop_front();
            count++;
        }
        else if(p1.front() == 9 && p2.front() == 0){
            p2.push_back(p1.front());
            p2.push_back(p2.front());
            p1.pop_front();
            p2.pop_front();
            count++;
        }

        else if(p1.front() > p2.front()){
            p1.push_back(p1.front());
            p1.push_back(p2.front());
            p1.pop_front();
            p2.pop_front();
            count++;
        }
        
        else if(p1.front() < p2.front()){
            p2.push_back(p1.front());
            p2.push_back(p2.front());
            p1.pop_front();
            p2.pop_front();
            count++;
        }
        
        else if(p2.front() == p1.front()){
            count++;
            cout << count << " ";
        }
    }
    cout << "botva";

    return 0;
}

//  9
//  0 1 2 3 4 5 6 7 8