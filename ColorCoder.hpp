#ifndef COLORCODER_HPP
#define COLORCODER_HPP

#include "iostream"
#include "MajorColor.hpp"
#include "MinorColor.hpp"

namespace TelCoColorCoder
{
    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif