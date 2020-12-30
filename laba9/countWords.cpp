#include <string>
#include <iostream>
using namespace std;

int wordsStr(string s) {
    int count = 0;
    int i = 0;
    while (s[i] == ' ' && s[i] != '\0') {
        i++;
    }
    int word = 0;
    while (s[i] != '\0') {
        if (s[i] != ' ' && word == 0) {
            word = 1;
            count++;
        }
        else if (s[i] == ' ') {
            word = 0;
        }
        i++;
    }
    return count;
}