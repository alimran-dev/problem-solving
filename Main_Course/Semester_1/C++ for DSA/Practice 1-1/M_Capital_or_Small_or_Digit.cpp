#include <iostream>
int main()
{
    char a;
    std::cin >> a;
    if (a >= '0' && a <= '9')
    {
        std::cout << "IS DIGIT";
    }
    else if (a >= 'A' && a <= 'Z')
    {
        std::cout << "ALPHA" << std::endl
                  << "IS CAPITAL";
    }
    else if (a >= 'a' && a <= 'z')
    {
        std::cout << "ALPHA" << std::endl
                  << "IS SMALL";
    }
    return 0;
}