#ifndef MAJORCOLOR_HPP
#define MAJORCOLOR_HPP

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};

    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };

    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

}

#endif