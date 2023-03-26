#include "cone.h"
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    TruncatedCone tc1(2, 4, 1);
    TruncatedCone tc2(3, 5, 2);
    cout << "“á¥ç¥­­ë© ª®­ãá 1: " << tc1 << endl;
    cout << "«®é ¤ì ¯®¢¥àå­®áâ¨: " << tc1.surfaceArea() << ",Ž¡ê¥¬: " << tc1.volume() << endl;
    cout << "“á¥ç¥­­ë© ª®­ãá 2: " << tc2 << endl;
    cout << "«®é ¤ì ¯®¢¥àå­®áâ¨: " << tc2.surfaceArea() << ",Ž¡ê¥¬: " << tc2.volume() << endl;
    return 0;
}
