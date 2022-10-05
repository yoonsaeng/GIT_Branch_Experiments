#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    if(str == "exit")
        return 0;
    cin >> str;
    
    cout << str << '\n';
}
