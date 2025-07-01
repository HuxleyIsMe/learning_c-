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
        // third bug was that i had isPlaying->game not isPlaying->game[0]
        printf("%c is playing %c \n", *name, isPlaying->game[0]);
    }
};

int main()
{

    Player carlos;
    Game chess;

    carlos.name[0] = 'V';
    chess.game[0] = 'C';
    // bug one i called setIsPlaying before having srt carlos name causing randomness
    // that isn't neatly flagged. Ah wow this lack of hositing is painful.
    carlos.setIsPlaying(&chess); // same as get pointer address
    carlos.is_playing();

    printf("this is %c ", carlos);
}