#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <int> queue;
    while(true){
        string str;
        int count;
        cin >> str;
        if(str == "push"){
            cin >> count;
            queue.push(count);
            cout << "ok" << "\n";
        }
        else if(str == "pop"){
            if(queue.empty()){
                cout << "error" << "\n";
            }
            else{
                cout << queue.front() << "\n";
                queue.pop();
            }
        }
    }

    return 0;
}
