#include <iostream>
#include "type5_6.h"
#include <windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double valB, valC;
    double ValA, ValB, ValC;

    std::cout << "‚¢¥¤¨â¥ ª®íää¨æ¨¥­âë B ¨ ‘ ¤«ï ãà ¢­¥­¨ï 5-£® â¨¯  ç¥à¥§ ¯à®¡¥« á®®â¢¥âáâ¢¥­­®: ";
    std::cin >> valB >> valC;
    std::cout << "‚¢¥¤¨â¥ ª®íää¨æ¨¥­âë A, B ¨ C ¤«ï ãà ¢­¥­¨ï 6-£® â¨¯  ç¥à¥§ ¯à®¡¥« á®®â¢¥âá¢¥­­®: ";
    std::cin >> ValA >> ValB >> ValC;
    Type5 first(valB, valC);
    Type6 second(ValA, ValB, ValC);

    first.show();
    first.get_answer();

    second.show();
    second.get_answer();
}
