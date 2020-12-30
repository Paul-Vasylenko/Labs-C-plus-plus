#include <string>
#include <iostream>
using namespace std;



string* checker(string* arr1, int words1, string* arr2, int words2) {
    int j, k;
    for (int i = 0; i < words2; i++) {
        j = 0;
        while (j < words1) {
            if (arr1[j] == arr2[i]) {
                for (k = j; k < words1 - 1; k++) {
                    arr1[k] = arr1[k + 1];
                }
                arr1[k] = '\0';
            }
            else {
                ++j;
            }
        }
    }
    return arr1;
}