#include <iostream>
#include <queue>
using namespace std;

queue <pair<int, int> > q;

int used[1000000];

int f(int a, int b){
    q.push(make_pair(a, 0));
    used[a] = 1;
    while(!q.empty()){
        int t = q.front().first;
        int d = q.front().second;
        if(t == b){
            return d;
        }
        if(used[t + 1] == 0){
            q.push(make_pair(t + 1, d + 1));
            used[t + 1] = 1;
        }
        if(used[t * 2] == 0){
            q.push(make_pair(t * 2, d + 1));
            used[t * 2] = 1;
        }
        if(used[t - 1] == 0){
            q.push(make_pair(t - 1, d + 1));
            used[t - 1] = 1;
        }
        q.pop();
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << f(a, b) << endl;

    return 0;
}