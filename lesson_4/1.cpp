#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque <int> deq;

    while (true)
    {
        string s;
        int count;
        cin >> s;
        if(s == "push_front"){
            cin >> count;
            deq.push_front(count);
            cout << "ok" << "\n";
        }
        else if(s == "push_back"){
            cin >> count;
            deq.push_back(count);
            cout << "ok" << "\n";
        }
        else if (s == "pop_front"){
            if(deq.empty()){
                cout << "error" << "\n";
            }
            else{
                cout << deq.front() << "\n";
                deq.pop_front();
            }
        }
        else if (s == "pop_back"){
            if(deq.empty()){
                cout << "error" << "\n";
            }
            else{
                cout << deq.back() << "\n";
                deq.pop_back();
            }
        }
        else if(s == "front"){
            if(deq.empty()){
                cout << "error" << "\n";
            }
            else{
                cout << deq.front() << "\n";
            }
        }
        else if(s == "back"){
            if(deq.empty()){
                cout << "error" << "\n";
            }
            else{
                cout << deq.back() << "\n";
            }
        }
        else if(s == "size"){
            cout << deq.size() << "\n";
        }
        else if(s == "clear"){
            // while (!deq.empty())
            // {
            //     deq.pop_back();
            // }
            deq.clear();
            cout << "ok" << "\n";
        }
        else if(s == "exit"){
            cout << "bye" << "\n";
            break;
        }
    }
    

    return 0;
}
