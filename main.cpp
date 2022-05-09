#include <iostream>
#include "Player.h"
#include "HumanPlayer.h"
#include "ElephantPlayer.h"
#include "DonkeyPlayer.h"
#include "MonkeyPlayer.h"
#include "GameManager.h"
#include <time.h>

int main()
{
    srand(time(NULL));

    HumanPlayer czlowiek1("Jan");
    HumanPlayer czlowiek2("Kamil");
    ElephantPlayer slon1("Slonik Dumbo");
    MonkeyPlayer malpka1("King Kong");
    DonkeyPlayer osiol1("Klapouchy");

    GameManager manager(czlowiek1,malpka1);
    manager.play();
    return 0;

}
