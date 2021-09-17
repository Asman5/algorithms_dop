#include <bits/stdc++.h>

using namespace std;
class Students{
    public:
    void set_name(string student_name)
    {
        name = student_name;
    }
    void set_last_name(string student_last_name)
    {
        last_name = student_last_name;
    }
    string get_name()
    {
        return name;
    }
    string get_last_name()
    {
        return last_name;
    }
    private:
    string name;
    string last_name;
    float average_ball;
};

int main(){
    Students student_1;
    Students student_2;
    Students student_3;
    string name;
    string last_name;
    cout << "Name:";
    getline(cin, name);
    cout << "Last name:";
    getline(cin, last_name);
    student_1.set_name(name);
    student_1.set_last_name(last_name);
    cout << student_1.get_name() << " " << student_1.get_last_name();



    return 0;
}