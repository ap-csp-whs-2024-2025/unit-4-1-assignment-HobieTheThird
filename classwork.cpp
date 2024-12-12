#include <iostream>
#include <string>

int main()
{
int  x = 5;
int y = 10;
int add_xy = x + y;
int mod_xy = x % y;
std::cout << add_xy << std::endl;

//ex2
bool isSunny = true;
bool hasUmbrella = false;
std::cout << (isSunny && hasUmbrella) << std::endl;

bool sun_or_umb = isSunny || hasUmbrella;
std::cout << sun_or_umb << "\n";
  
  return 0;
}
