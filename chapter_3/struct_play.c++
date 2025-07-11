#include <cstdio>

struct Game
{
    char game[1];
};

struct Player
{
    char name[1];

    Game *isPlaying = {};

    void setIsPlaying(Game *chess)
    {
        isPlaying = chess;
    }

    void is_playing()
    {
        // second bug was here, i hadn't dereferenced name
        // im still not sure why i have to dereference but there we are
        // update its because its an array an ergo comes with its own address
        // what is better is name[0]
        // third bug was that i had isPlaying->game not isPlaying->game[0]
        // hm i seem to have a trend here, im not used to specifying a part of an array
        // looks like i keep being like print my whole object for me! and c++
        // is like waah sure heres where your object is!!
        printf("%c is playing %c \n", name[0], isPlaying->game[0]);
    }
};

int main()
{

    Player carlos;
    Game chess;

    carlos.name[0] = 'V';
    chess.game[0] = 'C';
    // bug one i called setIsPlaying before having srt carlos name causing randomness
    // that isn't neatly flagged. Ah wow this lack of hosting is painful.
    carlos.setIsPlaying(&chess); // same as get pointer address
    carlos.is_playing();

    printf("this is %c ", carlos);
}