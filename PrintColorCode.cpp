#include "PrintColorCode.hpp"
#include "ColorCoder.hpp"

namespace TelCoColorCoder
{
    void PrintColorCodeTable()
    {
        std::cout<<"Major\t"<<"Minor\t"<<"Pair No\n";
        std::cout<<"-----\t"<<"-----\t"<<"-------\n";

        for (unsigned char major = 0; major <= VIOLET; major++)
        {
            for (unsigned char minor = 0; minor <= SLATE; minor++)
            {
                int pairNo = GetPairNumberFromColor(static_cast<MajorColor>(major), static_cast<MinorColor>(minor));
                std::cout<<GetColorFromPairNumber(pairNo).ToString()<<'\t'<<pairNo<<std::endl;
            }
        }
        
    }
}