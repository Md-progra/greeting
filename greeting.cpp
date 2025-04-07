#include <iostream>
using namespace std;
int main() {
    string name;
    int age;

    cout << "Hello! What's your name?" endl;
    cin >> name;

    cout << "How old are you " <<name<<" ?";
    cin >> age;

    cout<< "Nice to meet you, " <<name <<"! You are " <<age<< " years old" << endl;
    if (age < 18) {
        cout << "You can't travel alone. Travel with parents" << endl;
    } else {
        cout << "You can travel alone. Be safe" <<endl;
    }
    return 0;
}