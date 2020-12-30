#include <string>
#include <iostream>
#include "getInfo.h"
#include "countWords.h"
#include "fillArray.h"
#include "checker.h"
using namespace std;




int main()
{
    string s1 = getStr();//get 1 string
    string s2 = getStr();//get 2 string

    int words1 = wordsStr(s1);//words in 1 str
    int words2 = wordsStr(s2);//words in 2 str
    
    string *arr1 = new string[words1];//array 1
    string* arr2 = new string[words2];// array 2
    
    arr1=fillArr(arr1,s1,words1);//array that consists of all the words from the first string
    arr2=fillArr(arr2, s2, words2);//array that consists of all words from the second string
    displayArr(words1, arr1);
   arr1=checker(arr1, words1, arr2, words2);//check and delete
    

    cout << endl;
    displayArr(words1, arr1);
    delete[]arr1;
    delete[]arr2;
}





