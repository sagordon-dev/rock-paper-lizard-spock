/*
    This program emulates the version of rock, paper, scissors popularized 
    by the tv series "Big Bang Theory". This variety utilizes the typical 
    rock, paper and scissors paradigm while adding lizard and spock to the
    equation. (scissors > paper > rock > lizard > spock > scissors > lizard >
    paper > spock > rock > scissors)
*/
#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int user = -1;

    std::cout << "=================================\n";
    std::cout << "Rock, Paper, Scissors Lizard Spock!\n";
    std::cout << "=================================\n";

    while (user != 0)

    {
        std::cout << "1)👊 2)✋ 3)✌️ 4)🦎 5)🖖 0)🛑\n";
        std::cout << "\n";
        std::cout << "Shoot!\n";
        std::cin >> user;
        std::cout << "\n";
        int computer = rand() % 3 + 1;

        if (user == computer)
        {
            std::cout << "It's a tie, try again please.\n";
            std::cout << "\n";
        }
        else if ((user == 1) && (computer == 2))
        {
            std::cout << "You: 👊 Computer: ✋\n";
            std::cout << "Computer wins, Paper covers Rock.\n";
            std::cout << "\n";
        }
        else if ((user == 1) && (computer == 3))
        {
            std::cout << "You: 👊 Computer: ✌️\n";
            std::cout << "You win, Rock crushes Scissors.\n";
            std::cout << "\n";
        }
        else if ((user == 1) && (computer == 4))
        {
            std::cout << "You: 👊 Computer: 🦎\n";
            std::cout << "You win, Rock crushes Lizard.\n";
            std::cout << "\n";
        }
        else if ((user == 1) && (computer == 5))
        {
            std::cout << "You: 👊 Computer: ️🖖\n";
            std::cout << "Computer wins, Spock vaporizes Rock.\n";
            std::cout << "\n";
        }
        else if ((user == 2) && (computer == 1))
        {
            std::cout << "You: ✋ Computer: ️👊\n";
            std::cout << "You win, Paper covers Rock.\n";
            std::cout << "\n";
        }
        else if ((user == 2) && (computer == 3))
        {
            std::cout << "You: ✋ Computer: ️✌️\n";
            std::cout << "Computer wins, Scissors cuts Paper.\n";
            std::cout << "\n";
        }
        else if ((user == 2) && (computer == 4))
        {
            std::cout << "You: ✋ Computer: ️🦎\n";
            std::cout << "You lose, Lizard eats Paper.\n";
            std::cout << "\n";
        }
        else if ((user == 2) && (computer == 5))
        {
            std::cout << "You: ✋ Computer: ️🖖\n";
            std::cout << "You win, Paper disproves Spock.\n";
            std::cout << "\n";
        }
        else if ((user == 3) && (computer == 1))
        {
            std::cout << "You: ✌️ Computer: ️👊\n";
            std::cout << "Computer wins, Rock crushes Scissors.\n";
            std::cout << "\n";
        }
        else if ((user == 3) && (computer == 2))
        {
            std::cout << "You: ✌️ Computer: ️✋\n";
            std::cout << "You win, Scissors cuts Paper.\n";
            std::cout << "\n";
        }
        else if ((user == 3) && (computer == 4))
        {
            std::cout << "You: ✌️ Computer: ️🦎\n";
            std::cout << "You win, Scissors decapitate Lizard.\n";
            std::cout << "\n";
        }
        else if ((user == 3) && (computer == 5))
        {
            std::cout << "You: ✌️ Computer: ️🖖\n";
            std::cout << "You lose, Spock smashes Scissors.\n";
            std::cout << "\n";
        }
        else if ((user == 4) && (computer == 1))
        {
            std::cout << "You: 🦎 Computer: ️👊\n";
            std::cout << "You lose, Rock crushes Lizard.\n";
            std::cout << "\n";
        }
        else if ((user == 4) && (computer == 2))
        {
            std::cout << "You: 🦎 Computer: ️✋\n";
            std::cout << "You win, Lizard eats paper.\n";
            std::cout << "\n";
        }
        else if ((user == 4) && (computer == 3))
        {
            std::cout << "You: 🦎 Computer: ️✌️\n";
            std::cout << "You lose, Scissors decapitate Lizard.\n";
            std::cout << "\n";
        }
        else if ((user == 4) && (computer == 5))
        {
            std::cout << "You: 🦎 Computer: ️🖖\n";
            std::cout << "You win, Lizard poisons Spock.\n";
            std::cout << "\n";
        }
        else if ((user == 5) && (computer == 1))
        {
            std::cout << "You: 🖖 Computer: ️👊\n";
            std::cout << "You win, Spock vaporizes Rock.\n";
            std::cout << "\n";
        }
        else if ((user == 5) && (computer == 2))
        {
            std::cout << "You: 🖖 Computer: ️✋\n";
            std::cout << "Computer wins, Paper disproves Spock.\n";
            std::cout << "\n";
        }
        else if ((user == 5) && (computer == 3))
        {
            std::cout << "You: 🖖 Computer: ️✌️\n";
            std::cout << "You win, Spock smashes scissors.\n";
            std::cout << "\n";
        }
        else if ((user == 5) && (computer == 4))
        {
            std::cout << "You: 🖖 Computer: ️🦎\n";
            std::cout << "You lose, Lizard poisons Spock.\n";
            std::cout << "\n";
        }
        else
        {
            std::cout << "Please enter a valid number.\n";
            std::cout << "\n";
        }
    }

    return 0;
}
