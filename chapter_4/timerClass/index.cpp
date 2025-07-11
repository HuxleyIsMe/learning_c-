#include <ctime>
#include <cstdio>

/**
 * Ok so this our basic intro to constructors and destructors
 * lets make it a bit better'https://medium.com/@namantam1/ways-to-copy-struct-in-c-c-79df1e093e4
 *
 * Ah i found a super useful resource: https://www.youtube.com/watch?v=UYYoq784pQY
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

    TimerClass(TimerClass *original)
    {
        timestamp = original->timestamp;
    }
};

int main()
{
    TimerClass today = TimerClass{};
    TimerClass perhapsToday = today;
    // printf("todays time is %ti", today);
    // printf("tomorrows time is %ti", perhapsToday);
};

/* Ok so what is move semantics... like i dont get itttt

r value references
*/