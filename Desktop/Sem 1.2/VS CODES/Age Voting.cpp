#include<iostream>
#include<string>
using namespace std

int main (){
  string name;
  int age;
    cout << "Enter your name: "endl;
    cin >>"%s", &name;

    cout << "Enter your age: "endl;
    cin >>"%d", &age;

  if(age>= 18){
     cout << "You are eligible to vote."};
    else{
        cout <<"You are not eligible to vote."};
return 0;
}