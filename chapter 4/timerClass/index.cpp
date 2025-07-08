#include <ctime>
#include <cstdio>

/**
 * Ok so this our basic intro to constructors and destructors
 * lets make it a bit better
 */

struct TimerClass
{
    time_t timestamp;
    TimerClass()
    {
        timestamp = time(NULL);
    };

    ~TimerClass()
    {
        time_t now = time(NULL);
        time_t difference = now - timestamp;
        printf("checking im a live %ti", now);
        printf("Wow I lived for a whole %ti", difference);
    }
};

int main()
{
    auto today = TimerClass{};
};