#include <iostream>
#include <cmath>
#include <cerrno>
#include <cfenv>
#include <conio.h>

#pragma fenv_access (on)

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019
*/

const double pi = std::acos(-1);

int main(){
    // typical usage
    std::cout << "tan  (pi/4) = " << std::tan(pi / 4) << '\n' // 45 deg.
        << "tan(3*pi/4) = " << std::tan(3 * pi / 4) << '\n' // 135 deg
        << "tan(5*pi/4) = " << std::tan(5 * pi / 4) << '\n' // -135 deg
        << "tan(7*pi/4) = " << std::tan(7 * pi / 4) << '\n'; // -45 deg
// special values
    std::cout << "tan(+0) = " << std::tan(0.0) << '\n'
        << "tan(-0) = " << std::tan(-0.0) << '\n';
    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
    std::cout << "tan(INFINITY) = " << std::tan(INFINITY) << '\n';

    if (std::fetestexcept(FE_INVALID)) {
        std::cout << "\tFE_INVALID raised\n";
    }
     
    _getch();
    return 0;
}