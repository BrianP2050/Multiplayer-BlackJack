/*
    Name: Brian Pedroza
    Description: A two player game of blackjack. Makes use of if else statements to calculate points and post results.
    Input: User inputs number of cards and points for each player.
    Output: Game header, prompt player for desired number of cards, sums of total scores and declaration of winner.
*/
#include <iostream>
using namespace std;

int main()
{
    int selection {100};
    int playerOneCards {0};
    int playerOneCardA {0};
    int playerOneCardB {0};
    int playerOneCardC {0};
    int playerOneScore {0};

    int playerTwoCards {0};
    int playerTwoCardA {0};
    int playerTwoCardB {0};
    int playerTwoCardC {0};
    int playerTwoScore {0};

    string additionalCard = "pending";

        // Header and player scores
        cout << "*******************************************\n"
             << "**        Welcome to Blackjack! **\n"
             << "*******************************************\n\n" 
             << "Player 1 Score: " << playerOneScore << '\n'
             << "Player 2 Score: " << playerTwoScore << '\n' << endl;

    // Player 1
    cout << "Dealer: Player 1, how many cards would you like to choose?" << endl;
    cin >> playerOneCards;
    cout << "Please, choose a random card for Player 1: " << endl;
    cin >> selection;
    
    // First card selection for player one
    if ((selection > 10) && (selection < 14))
    {
        playerOneCardA = 10;
    }
    else if (selection >= 14)
    {
        playerOneCardA = 11;
    }
    else
    {
        playerOneCardA = selection;
    }

    // Player one required card number check
    if (playerOneCards < 2)
    {
        cout << "Player 1, you need to choose another card." << endl;
        cin >> playerOneCards;
        playerOneCards += 2;
    }

    // Second card selection for player one
        cout << "Please, choose a random card for Player 1: " << endl;
        cin >> selection;

    if ((selection > 10) && (selection < 14))
    {
        playerOneCardB = 10;
    }
    else if (selection >= 14)
    {
        playerOneCardB = 11;
    }
    else
    {
        playerOneCardB = selection;
    }
    
    // Player one third card prompt
    cout << "Dealer: player 1, would you like to choose another card?" << endl;
    cin >> additionalCard;

    if ((additionalCard == "Yes") || (additionalCard == "yes"))
    {
            cout << "Please, choose a random card for Player 1: " << endl;
            cin >> selection;

        if ((selection > 10) && (selection < 14))
        {
            playerOneCardC = 10;
        }
        else if (selection >= 14)
        {
            playerOneCardC = 11;
        }
        else
        {
            playerOneCardC = selection;
        }
    }
    

    // Player 2
    cout << "Dealer: Player 2, how many cards would you like to choose?" << endl;
    cin >> playerTwoCards;
    cout << "Please, choose a random card for Player 2: " << endl;
    cin >> selection;
    
    // First card selection for player two
    if ((selection > 10) && (selection < 14))
    {
        playerTwoCardA = 10;
    }
    else if (selection >= 14)
    {
        playerTwoCardA = 11;
    }
    else
    {
        playerTwoCardA = selection;
    }

    // Player two required card number check
    if (playerTwoCards < 2)
    {
        cout << "Player 2, you need to choose another card." << endl;
        cin >> playerTwoCards;
        playerTwoCards += 2;
    }

    // Second card selection for player two
        cout << "Please, choose a random card for Player 2: " << endl;
        cin >> selection;

    if ((selection > 10) && (selection < 14))
    {
        playerTwoCardB = 10;
    }
    else if (selection >= 14)
    {
        playerTwoCardB = 11;
    }
    else
    {
        playerTwoCardB = selection;
    }
    
    // Player two third card prompt
    cout << "Dealer: Player 2, would you like to choose another card?" << endl;
    cin >> additionalCard;

    if ((additionalCard == "Yes") || (additionalCard == "yes"))
    {
            cout << "Please, choose a random card for Player 2: " << endl;
            cin >> selection;

        if ((selection > 10) && (selection < 14))
        {
            playerTwoCardC = 10;
        }
        else if (selection >= 14)
        {
            playerTwoCardC = 11;
        }
        else
        {
            playerTwoCardC = selection;
        }
    }

    // Player 1 and 2 score calculations
    playerOneScore = playerOneCardA + playerOneCardB + playerOneCardC;
    playerTwoScore = playerTwoCardA + playerTwoCardB + playerTwoCardC;

    // Game Results
    cout << '\n'
            << "Player 1 Score: " << playerOneScore << '\n'
            << "Player 2 Score: " << playerTwoScore << '\n' << endl;

    // When both scores fall at or below 21
    if ((playerOneScore <= 21) && (playerTwoScore <= 21))
    {
        if (playerOneScore > playerTwoScore)
        {
            cout << "Player 1 wins with a higher score than player 2.";
        }
        else if (playerOneScore < playerTwoScore)
        {
            cout << "Player 2 wins with a higher score than player 1.";
        }
        else
        {
            cout << "Both player 1 and player 2 tie.";
        }
        
    }
    // When player two exceeds score of 21
    else if ((playerOneScore <= 21) > (playerTwoScore <= 21))
    {
        cout << "Player 1 wins because player 2 busted.";
    }
    // When player one exceeds score of 21
    else if ((playerOneScore <= 21) < (playerTwoScore <= 21))
    {
        cout << "Player 2 wins becuase player 1 busted.";
    }
    // When both players exceed score of 21
    else
    {
        cout << "Sorry, no one wins, both players busted.";
    }

    cout << "\n** Program Terminated **\n";


    return 0;
}