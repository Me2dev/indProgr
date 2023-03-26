#include "cone.h"
#include <cmath>
ostream& operator<<(ostream& os, const Cone& c) {
    os << "燿､ｨ聶: " << c.radius << ", ｢�ｮ笄: " << c.height;
    return os;
}
istream& operator>>(istream& is, Cone& c) {
    cout << "い･､ｨ筵 燿､ｨ聶: ";
    is >> c.radius;
    cout << "い･､ｨ筵 ｢�ｮ粤: ";
    is >> c.height;
    return is;
}
istream& operator>>(istream& is, TruncatedCone& tc) {
    cout << "昏ｦｭｨｩ 燿､ｨ聶: ";
    is >> tc.radius;
    cout << "ぇ瑯ｭｨｩ 燿､ｨ聶: ";
    is >> tc.topRadius;
    cout << "ろ皸笄: ";
    is >> tc.height;
    return is;
}
ostream& operator<<(ostream& os, const TruncatedCone& tc) {
    os << "昏ｦｭｨｩ 燿､ｨ聶: " << tc.radius << ", ぇ瑯ｭｨｩ 燿､ｨ聶: " << tc.topRadius << ", ろ皸笄: " << tc.height;
    return os;
}
