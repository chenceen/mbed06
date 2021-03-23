#include "mbed.h"
using namespace std::chrono;

Ticker flipper;
DigitalOut led3(LED3);

void flip()
{
    led3 = !led3;
}

int main()
{
    led3 = 0;
    flipper.attach(&flip, 500ms);
}