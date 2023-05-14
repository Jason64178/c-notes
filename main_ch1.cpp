#include <iostream>
#include <string>
#include "D:\New folder\C++ projects\c++Notes\c-notes\log_ch1.cpp"

using namespace std;

/*
    Function declear
    link will find the definition of function Log
*/
// void Log (const string* message);

int main() {
    string m = "Hello world";
    Log(&m);
    system("pause");
    // std::cin.get();
}