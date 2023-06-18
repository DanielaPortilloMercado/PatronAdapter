#include <iostream>
#include "RoundHole.cpp"
#include "RoundPeg.cpp"
#include "SquarePeg.cpp"
#include "SquarePegAdapter.cpp"

int main() {
    RoundHole hole(5);
    RoundPeg rpeg(5);
    std::cout << "Fits round peg: " << hole.fits(rpeg) << std::endl;

    SquarePeg small_sqpeg(5);
    SquarePeg large_sqpeg(10);

    SquarePegAdapter small_sqpeg_adapter(small_sqpeg);
    SquarePegAdapter large_sqpeg_adapter(large_sqpeg);

    std::cout << "Fits small square peg: " << hole.fits(small_sqpeg_adapter) << std::endl;
    std::cout << "Fits large square peg: " << hole.fits(large_sqpeg_adapter) << std::endl;

    return 0;
}
