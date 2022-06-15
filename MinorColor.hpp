namespace TelCoColorCoder
{
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    
    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}