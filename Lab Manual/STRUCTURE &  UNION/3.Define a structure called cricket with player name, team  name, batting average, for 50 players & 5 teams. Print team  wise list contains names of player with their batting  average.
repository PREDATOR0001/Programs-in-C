#include <stdio.h>
#include <string.h>

// Define the structure for a cricket player
struct Cricket {
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

// Function to print team-wise list of players with their batting averages
void printTeamWiseList(struct Cricket players[], int n) {
    // Sort players by team name
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(players[j].teamName, players[j + 1].teamName) > 0) {
                struct Cricket temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    // Print team-wise list
    printf("Team-wise list of players with their batting averages:\n");
    for (int i = 0; i < n; i++) {
        printf("Team: %s, Player: %s, Batting Average: %.2f\n",
               players[i].teamName, players[i].playerName, players[i].battingAverage);
    }
}

int main() {
    struct Cricket players[50] = {
        {"Player1", "TeamA", 45.5},
        {"Player2", "TeamB", 50.2},
        {"Player3", "TeamA", 30.8},
        {"Player4", "TeamC", 55.1},
        {"Player5", "TeamB", 40.3},
        // Add more players as needed
    };
    int n = 5; // Number of players initialized

    printTeamWiseList(players, n);

    return 0;
}

