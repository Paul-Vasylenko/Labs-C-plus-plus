#include <string>
#include <iostream>
using namespace std;


string* fillArr(string* arr, string s, int words) {
    int start = 0;
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i != s.size() - 1) {
            while (s[i] != ' ') {
                if (i != s.size() - 1) {
                    i++;
                    continue;
                }
                else {
                    break;
                }
            }
            int end;
            if (i == s.size() - 1) {
                end = i + 1;
            }
            else {
                end = i;
            }
            arr[j] = s.substr(start, (end - start));
            start = i + 1;
            j++;
        }
        else {
            arr[j] = s.substr(start, i - start);
        }
    }
    return arr;
}

void displayArr(int words, string *arr1) {
    for (int i = 0; i < words; i++) {
        cout << arr1[i] << " ";//display first string before
    }
}