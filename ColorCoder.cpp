
#include "ColorCoder.hpp"
#include "ColorCoder_Defines.hpp"

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };

    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    ColorPair::ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor)
    {
    }

    MajorColor ColorPair::getMajor()
    {
        return majorColor;
    }

    MinorColor ColorPair::getMinor()
    {
        return minorColor;
    }

    std::string ColorPair::ToString()
    {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += "\t";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }

    ColorPair GetColorFromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }

    void PrintColorCodeTable()
    {
        std::cout<<"Major\t"<<"Minor\t"<<"Pair No\n";

        for (unsigned char major = 0; major < numberOfMajorColors; major++)
        {
            for (unsigned char minor = 0; minor < numberOfMinorColors; minor++)
            {
                int pairNo = GetPairNumberFromColor((MajorColor)major, (MinorColor)minor);
                std::cout<<GetColorFromPairNumber(pairNo).ToString()<<'\t'<<pairNo<<std::endl;
            }
        }
        
    }

}