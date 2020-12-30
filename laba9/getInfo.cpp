#include <string>
#include <iostream>
using namespace std;

string getStr() {
    string s;
    cout << "Enter string: "; getline(cin, s);
    return s;
}