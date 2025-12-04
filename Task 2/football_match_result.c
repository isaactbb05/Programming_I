#include <stdio.h>

int main() {
    int home_team_goals , away_team_goals;

    // Asking the user for the result of the match
    printf("Enter the Goals from Home Team: ");
    scanf("%d",&home_team_goals);
    printf("Enter the Goals from Away Team: ");
    scanf("%d",&away_team_goals);

    //Logical Conditions
    if (home_team_goals>away_team_goals) {
        printf("The home team has won");
    }
    else if (home_team_goals<away_team_goals) {
        printf("The away team has lost");
    }
    else {
        printf("It is a draw");
    }

    return 0;
}