 #include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Enter your age: " << endl;
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;}
         else {
        cout << "You are not eligible to vote." << endl;}
    return 0;
}