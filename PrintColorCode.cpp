#include "PrintColorCode.hpp"
#include "ColorCoder.hpp"
#include "ColorCoder_Defines.hpp"

namespace TelCoColorCoder
{
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