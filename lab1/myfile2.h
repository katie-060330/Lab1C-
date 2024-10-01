#include <iostream>
#include <iomanip>
using namespace std;
int counterSurface = 0;
int counterVolume = 0;
const double Pi = 3.14159;
char menu(void);
int volume(double const& ray, double const& height);
int surface(double const& ray);