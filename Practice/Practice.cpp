#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int main()
{
    Tiles t1("West", 300, 300, 250);
    Tiles t2("East", 150, 150, 125);
    Tiles t3("North", 150, 300, 190);
    t1.getData();
    t2.getData();
    t3.getData();
}
