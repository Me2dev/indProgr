#include <iostream>
#include "cone.h"
int main(){
    setlocale(LC_ALL, "Russian");
    cone c1(3, 7);
    cone c2(1, 2, 3, 5, 10);
    cout << "Š®­ãá 1: " << c1;
    cout << "«®é ¤ì ¯®¢¥àå­®áâ¨: " << c1.area() << "\n";
    cout << "Ž¡ê¥¬: " << c1.volume() << "\n";
    cout << "Š®­ãá 2: " << c2;
    cout << "«®é ¤ì ¯®¢¥àå­®áâ¨: " << c2.area() << "\n";
    cout << "Ž¡ê¥¬: " << c2.volume() << "\n";
    return 0;
}
