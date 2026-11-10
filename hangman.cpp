#include<iostream>
#include<string>
#include<cmath>

int main()
{
    char correct1 = 'C';
    char correct2 = 'O';
    char correct3 = 'D';
    char correct4 = 'I';
    char correct5 = 'N';
    char correct6 = 'G';

    int lives = 6;
    int points = 0;
    std::string trackedletters;
    char guess;
    std::string wrongletter = " was not a letter";
    std::string correctletter = " was a letter";

    std::cout << "Guess a letter...";
    std::cin >> guess;

        while(lives > 0 && points < 6)
        {

            guess = std::toupper(guess);

          if (guess == correct1 || guess == correct2 || guess == correct3 || guess == correct4 || guess == correct5 || guess == correct6)
        {
            
            
            std::cout << "Correct! " << guess << correctletter << '\n';
             points++;
             std::cout << "You currently have "<< points << " points." << '\n';
             trackedletters += guess;
             trackedletters += ' ';
             std::cout << "Letters Used: " << trackedletters << '\n';
            
        }
        else
        {
            
            std::cout << guess << " " << wrongletter << '\n';
            lives --;
            std::cout << "You currently have "<< lives << " lives." << '\n';
            trackedletters += guess;
             trackedletters += ' ';
             std::cout << "Letters Used: " << trackedletters << '\n';
            
        }  
        if (lives > 0 && points < 6)
        {
            std::cout << "Guess another letter" << '\n';
            std::cin >> guess; 
        }
        }
        if (lives <= 0)
        {
            std::cout << "Game Over";
        }
        else if (points >= 6)
        {
            std::cout << "You Win! The word was CODING!!!";
        }
        
        
        
    
        /*else if(guess == 'C', 'O', 'D', 'I', 'N', 'G')
        {
            std::cout << "Correct! " << guess << correctletter;
            trackedletters += guess;
             trackedletters + ' ';
             std::cout << "Guess another letter...";*/
    
    return 0;
}