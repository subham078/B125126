//q7. Game Player Status

#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    Player(string name, int h, int s, int l) {
        playerName = name;
        health = h;
        score = s;
        level = l;
    }

    friend class GameManager;
};

class GameManager {
public:
    void displayPlayerDetails(Player p) {
        cout << "Player Name: " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }

    void checkAlive(Player p) {
        if (p.health > 0)
            cout << "Player Status: Alive" << endl;
        else
            cout << "Player Status: Dead" << endl;
    }

    void displayLevelScore(Player p) {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main() {
    Player p("Subham", 85, 2500, 5);

    GameManager gm;

    gm.displayPlayerDetails(p);

    cout << endl;
    gm.checkAlive(p);

    cout << endl;
    gm.displayLevelScore(p);

    return 0;
}