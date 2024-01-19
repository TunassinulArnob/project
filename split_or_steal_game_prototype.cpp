#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>

using namespace std;

class Player {
public:
    int r;
    int point;
    string choice[11];

    void printChoice(int i, Player& p2) {
        cout << "Round\tPlayer 1 chose\tPlayer 2 chose\n";
        for (int j = 0; j <= i; j++) {
            cout << j + 1 << "\t\t" << choice[j] << "\t\t" << p2.choice[j] << endl;
        }
    }
};

int main() {
    Player p1, p2;

    p1.point = 0;
    p2.point = 0;
    system("cls");
    cout << "Enter Player 1 Rounds to play: ";
    cin >> p1.r;
    system("cls");
    cout << "Enter Player 2 Rounds to play: ";
    cin >> p2.r;
    system("cls");
    int round = (p1.r + p2.r) / 2;
    int i = 0;
    while (round--) {
        int c1, c2;
        cout << "\nChoice for player 1 (1 for split, 2 for steal): ";
        cin >> c1;
        system("cls");
        p1.printChoice(i, p2);
        cout << "\nChoice for player 2 (1 for split, 2 for steal): ";
        cin >> c2;
        system("cls");

        p1.choice[i] = (c1 == 1) ? "Split" : "Steal";
        p2.choice[i] = (c2 == 1) ? "Split" : "Steal";

        if (c1 == 1 && c2 == 1) {
            p1.point += 3;
            p2.point += 3;
        } else if (c1 == 1 && c2 == 2) {
            p2.point += 5;
            p1.point+=0;
        } else if (c1 == 2 && c2 == 1) {
            p1.point += 5;
            p2.point+=0;
        } else if (c1 == 2 && c2 == 2) {
            p1.point += 1;
            p2.point += 1;
        }

        p1.printChoice(i, p2);
       
        i++;
    }
    cout<<endl;
    cout<<"Player 1 Got "<<p1.r<<" Point and Player 2 Got "<<p2.r<<" point";

    return 0;
}
