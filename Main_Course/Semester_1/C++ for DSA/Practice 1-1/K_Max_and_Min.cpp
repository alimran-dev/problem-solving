#include <iostream>
#include <algorithm>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::min({a, b, c}) << " " << std::max({a, b, c});
    return 0;
}