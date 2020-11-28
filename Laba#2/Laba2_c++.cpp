
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c; //a, b, c - sides of triangle
    float maxS, minS, secondS; // maxS- наибольшая из сторон, minS- наименшая, secondS-средняя сторона
    cout << "Введите сторону а: "; cin >> a;
    cout << "Введите сторону b: "; cin >> b;
    cout << "Введите сторону c: "; cin >> c;
    maxS = max(a, max(b, c));//вычисляем стороны
    minS = min(a, max(b, c));//вычисляем стороны
    secondS = (a + b + c) - maxS - minS;//вычисляем стороны
    if (maxS<minS + secondS && maxS>abs(minS - secondS)) {//Если треугольник существует
        if (a == b && b == c) {
            cout << "Равносторонний гостроугольний";
        }
        else if (a == b || b == c) {//равнобедренный
            if (maxS * maxS < minS * minS + secondS * secondS) {
                cout << "Равнобедренный остроугольный";
            }
            else if (maxS * maxS == minS * minS + secondS * secondS) {
                cout << "Равнобедренный прямоугольный";
            }
            else {
                cout << "Равнобедренный тупоугольный";
            }
        }
        else {
            if (maxS * maxS < minS * minS + secondS * secondS) {
                cout << "Разносторонний остроугольный";
            }
            else if (maxS * maxS == minS * minS + secondS * secondS) {
                cout << "Разносторонний прямоугольный";
            }
            else {
                cout << "Разносторонний тупоугольный";
            }
        }
    }
    else {
        cout << "Треугольника с такими сторонами не существует!";
    }
    return 0;
}