#include <iostream>
#include <string>

using namespace std;

void Log (const string* message) {
    cout << *message << endl;
}

int main() {
    string m = "Hello world";
    Log(&m);
    system("pause");
    // std::cin.get();
}