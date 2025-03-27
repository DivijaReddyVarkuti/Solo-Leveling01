#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct Player
{
    string name = "";
    int wins = 0;
    int losses = 0;
    int ties= 0;
};

void displayPlayerStats(const Player& player)
{
    cout << "Player Name: " << player.name << endl;
    cout << "Wins: " << player.wins << endl;
    cout << "Losses: " << player.losses << endl;
    cout << "Ties: " << player.ties << endl;
}

int main() 
{
    cout << "Game Stats Program.." << endl << endl;
    cout << "Mary" << endl
        << "Joel" << endl
        << "Mike" << endl;

    vector<Player> players;
    
    Player Mary{ "Mary", 41, 3, 22 };
    Player Joel{ "Joel", 32, 14, 17 };
    Player Mike{ "Mike", 8, 19, 11 };

    players.push_back(Mary);
    players.push_back(Joel);
    players.push_back(Mike);

    char choice;

    do
    {
        string name_of_player;
        cout << "Enter Player Name: ";
        getline(cin, name_of_player);

        bool condition = false;
        
        for (Player player : players) 
        {
            if (player.name == name_of_player)
            {
                displayPlayerStats(player);
                condition = true;
                break;
            }
           
        }

        if (!condition)
        {
            cout << "Entered player " << name_of_player << " not found" << endl;
        }

        cout << "Choice (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (tolower(choice) == 'y');
   
}