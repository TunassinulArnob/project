#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <stdlib.h>
#include <algorithm>
#include <ctime>
using namespace std;

class game
{
private:
public:
    void dare();
    void wish();
    void rules();
    void loadingScreen();
    void display(string a);
};

void game::rules()
{
    system("cls");
    system("color f5"); // f->white background, 5->purple text
    cout << endl;
    string line[] = {
        "Welcome to our dare game!",
        "Enough Celebration... Now it's time to do the dare!",
    };
    for (int i = 0; i < sizeof(line) / sizeof(line[0]); i++)
    {
        cout << "\t\t";
        display(line[i]);
        Sleep(100);
    }
    Sleep(200);
    cout << endl
         << endl;

    string r_Line[] = {
        "How to play this game?",
        "Here are the rules of the game: \n",
        "1. The program starts by showing some random food item.\n\t\t   One of them is Hard-To-Eat.\n",
        "2. The player can choose the number of attempts (minimum 5) they want to make.\n",
        "3. The player must press n distinct alphabets to start the program each time.\n",
        "4. After the player starts the program, for each attempt,\n\t\t   the program selects a random food item from the list.\n",
        "5. There are 5 Random Alphabets used as Trap Key.\n\t\t   If the player presses a trap key , they must eat the  hardest-to-eat food item.\n",
        "6. After the specified number of attempts,\n\t\t   the program determines which food item was chosen the most number of times.\n",
        "7. The player must eat the food item that was chosen the most times.\n"};
    for (int i = 0; i < sizeof(r_Line) / sizeof(r_Line[0]); i++)
    {
        cout << "\t\t";
        display(r_Line[i]);
        Sleep(100);
    }
    Sleep(300);
    string start_game_message = "Press 1 to start game, 0 to go main menu: ";
    cout << "\t\t";
    for (int i = 0; i < start_game_message.length(); i++)
    {
        cout << start_game_message.at(i);
        Sleep(40);
    }
    int x;
    cin >> x;
    if (x == 1)
        dare();
    else
        return;
}

void game::dare()
{
    system("cls");
    system("color f5"); // f->white background, 5->purple text
    string item[] = {"Jhal Muri", "Mentos", "Dry cake", "Tomato sauce", "7 Up", "Green chilli"};
    int total_item = sizeof(item) / sizeof(item[0]);
    int count[total_item] = {0};
    int s = 1;
    cout << "\n\t\tHere is the item list:\n" << endl;
    for (int i = 0; i < total_item; i++)
    {
        cout <<"\t\t"<< i + 1 << ". ";
        display(item[i]);
    }
    cout << endl;
    cout << "\t\tEnter How Many Times you wanna try: ";
    int t;
    cin >> t;
    int trap = t;
    int tr = t;
    cout<<endl;
    while (t--)
    {
        system("color f1");
        char ch;
        cout <<"\t\t"<< s++ << "/" << tr << " Press any alphabet to check your luck: ";
        cin >> noskipws >> ch;                               // Enable reading whitespace characters
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore any additional characters entered by the user
        srand(time(0));
        int i = rand() % total_item;
        cout<<"\t\t";
        loadingScreen();
        // int trap = rand() % 5 + 1;
        if ((ch - 'a') % 5 == 0)
        {
            system("color 4f");
            i = trap;
            cout << "\t\tYou pressed a trapped key.\n";
            cout << "\t\tNow you Have to drink : " << i + 1 << ". " << item[i] << endl;
            count[i]++;
            cout << endl;
            cout << "\t\tPress 'n' and enter  to go next : ";
            cin >> ch;
        }
        else
        {
            cout << "\t\tYou Have got : " << i + 1 << ". " << item[i] << endl;
            count[i]++;
            cout << endl;
        }
    }
    cout << endl;
    auto maxElementIterator = max_element(count, count + total_item);
    int maxIndex = distance(count, maxElementIterator);

    cout << "\t\tYou have to drink " << item[maxIndex] << endl;
}

void game::wish()
{
    int i;
    char h = 3;
    string name = "Mustakim Musully Pias, Hasnat Hossain";
    string nick1 = "P I A S";
    string nick2 = " S A J I D ";
    string date = "19/07";
    system("cls");
    system("color f5"); // f->white background, 5->purple text
    cout << "\n\n\t\t\tFrom: Sajjad and Arnob - Team WrongCoders\n";
    Sleep(1000);
    cout << "\t\t\tHappy Birthday To  : ";
    game::display(name);
    cout << "\n\n";
    Sleep(1000);
    cout << "\t\t";
    for (i = 0; i < 42; i++)
        cout << "_";
    cout << "\n\n";
    system("color f9"); // f->white background, 9->light blue text
    Sleep(1000);
    cout << "\t\t\t\ti i i i i\n";
    Sleep(1000);
    cout << "\t\t\t\ti i i i i\n";
    Sleep(1000);
    cout << "\t\t\t      __i_i_i_i_i__\n";
    Sleep(1000);
    cout << "\t\t\t     |" << h << "           " << h << "|\n";
    Sleep(1000);
    cout << "\t\t\t   __| " << h << "  " << date << "  " << h << " |__\n";
    Sleep(1000);
    cout << "\t\t\t  | " << h << "   " << h << "       " << h << "   " << h << " |\n";
    Sleep(1000);
    cout << "\t\t\t__|" << h << "   HAPPY     " << h << "   " << h << "|__\n";
    Sleep(1000);
    cout << "\t\t       | " << h << "   " << h << "     BIRTHDAY    " << h << " |\n";
    Sleep(1000);
    cout << "\t\t       |" << h << "  " << h << "     " << h << "    " << h << "     " << h << "   " << h << "|\n";
    Sleep(1000);
    cout << "\t\t       | " << h << " " << h << " " << h << " " << h << " " << nick1 << " " << h << " " << h << " " << h << " " << h << " |\n";
    Sleep(1000);
    cout << "\t\t       | " << h << " " << h << " " << h << " " << nick2 << " " << h << " " << h << " " << h << " |\n";
    Sleep(1000);
    cout << "\t\t       |_________________________|\n";
    cout << "\n\n\n\n\n";
    Sleep(5000);
    cout<<"\t\t";
    string x= "We have made a dare game for you.\n\t\tPress 1 to play the game or Press 0 to go main menu: ";
    display(x);
    int c;
    cin>>c;
    if(c)rules();
    else return ;
}

void game::loadingScreen()
{
    cout << "Loading: [          ]";
    cout.flush(); // Flush the output buffer to ensure it's displayed immediately

    const int delayMs = 300; // Delay in milliseconds
    const int numDots = 10;  // Number of dots in the loading animation

    for (int i = 0; i <= numDots; ++i)
    {
        Sleep(delayMs);

        // Clear the previous dot
        cout << "\b";

        // Update the loading animation
        for (int j = 0; j < i; ++j)
        {
            cout << ".";
        }
        cout.flush(); // Flush the output buffer

        // Move the cursor back to the beginning of the animation
        for (int j = 0; j <= i; ++j)
        {
            cout << "\b";
        }
    }
    cout << endl;
}

void game::display(string a)
{
    // cout<<"\t\t";
    for (int i = 0; i < a.length(); i++)
    {
        cout << a.at(i);
        Sleep(40);
    }
    cout << endl;
    Sleep(40);
}

int main()
{
    while (1)
    {
        system("cls");
        system("color 0f");
        cout<<"\n\n";
        game A;
        cout << "\t\tMain Menu: \n" << endl;
        cout << "\t\t1. Make Wish. " << endl;
        cout << "\t\t2. How to play? " << endl;
        cout << "\t\t3. Start a game directly. " << endl;
        cout << "\t\t0. Exit " << endl;
        cout << "\n\t\tMake choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            A.wish();
            continue;
            break;
        case 2:
            A.rules();
            break;
        case 3:
            A.dare();
            break;
        case 0:
            cout << "\t\tExiting Program...\n";
            cout<<"\t\t";
            A.loadingScreen();
            return 0;
            break;

        default:
            cout << "\t\tInvalid Choice!\n";
            system("color 4f");
            break;
        }
        int x;
        cout << "\t\tEnter 0 to go main menu: ";
        cin >> x;
    }
}