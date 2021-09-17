#include <stack>
#include <iostream>
using namespace std;

int main(){
    stack <int> st;
    st.push(5);//добавить
    st.pop();//удаление
    st.top();//обращение к первому элементу
    st.size();//возвращает размер
    st.empty();// если пустой возвращает 0, если не пустой - 1
    return 0;
}