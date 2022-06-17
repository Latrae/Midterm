// Midterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //for (int i = 0; i )
    
    srand(time(0));

    int random = 1 + (rand() % 105);

    std::cout << "Random number: " << random << std::endl;
    std::string answer = "";

    if (random <= 15 && random >= 0)
    {
        std::cout << "Question 1: What is the solution to -> 2(3) + 2 / 5?" << std::endl;
        std::cout << "A: 6.4" << std::endl;
        std::cout << "B: 5.2" << std::endl;
        std::cout << "C: 15" << std::endl;

        std::cout << "Please write just the letter of the answer." << std::endl;

        std::cin >> answer;

        

        if (answer == "A" || answer == "a")
            std::cout << "Correct" << std::endl;
        else
            std::cout << "Wrong" << std::endl;
    }
    else if (random <= 30 && random > 15)
    {
        std::cout << "Question 1: How many letters are in the name Pulmonoscorpius kirktonensis?" << std::endl;
        std::cout << "A: 15" << std::endl;
        std::cout << "B: 27" << std::endl;
        std::cout << "C: 10" << std::endl;

        std::cout << "Please write just the letter of the answer." << std::endl;
        std::cin >> answer;

        if (answer == "B" || answer == "b")
            std::cout << "Correct" << std::endl;
        else
            std::cout << "Wrong" << std::endl;
    }
    else if (random <= 45 && random > 30)
    {
        std::cout << "Question 1: Solve the equation -> 3^3 + 50 * 9" << std::endl;
        std::cout << "A: 500" << std::endl;
        std::cout << "B: 357" << std::endl;
        std::cout << "C: 477" << std::endl;

        std::cout << "Please write just the letter of the answer." << std::endl;
        std::cin >> answer;

        if (answer == "C" || answer == "c")
            std::cout << "Correct" << std::endl;
        else
            std::cout << "Wrong" << std::endl;
    }
    else if (random <= 60 && random > 45)
    {
        std::cout << "Question 1: If there are 5 people in a room and each person must ask 1 question \nhow many questions after the first individual would need to be asked?" << std::endl;
        std::cout << "A: I don't have enough information" << std::endl;
        std::cout << "B: 4" << std::endl;
        std::cout << "C: 5" << std::endl;

        std::cout << "Please write just the letter of the answer." << std::endl;
        std::cin >> answer;

        if (answer == "B" || answer == "b")
            std::cout << "Correct" << std::endl;
        else
            std::cout << "Wrong" << std::endl;
    }
    else if (random <= 75 && random > 60)
    {
        std::cout << "Question 1: How many possible answers to this question are there?" << std::endl;
        std::cout << "A: 3" << std::endl;
        std::cout << "B: 35" << std::endl;
        std::cout << "C: 3927" << std::endl;

        std::cout << "Please write just the letter of the answer." << std::endl;
        std::cin >> answer;

        if (answer == "A" || answer == "a")
            std::cout << "Correct" << std::endl;
        else
            std::cout << "Wrong" << std::endl;
    }
    else if (random <= 90 && random > 75)
    {
        std::cout << "Question 1: In a room of 10 insects how many legs are there in the room?" << std::endl;
        std::cout << "A: 150" << std::endl;
        std::cout << "B: 30" << std::endl;
        std::cout << "C: 60" << std::endl;

        std::cout << "Please write just the letter of the answer." << std::endl;
        std::cin >> answer;

        if (answer == "C" || answer == "c")
            std::cout << "Correct" << std::endl;
        else
            std::cout << "Wrong" << std::endl;
    }
    else if (random <= 105 && random > 90)
    {
        std::cout << "Question 1: Who would win in a fight a Polar Bear or a Gorilla?" << std::endl;
        std::cout << "A: Polar Bear" << std::endl;
        std::cout << "B: Gorilla" << std::endl;
        std::cout << "C: Me" << std::endl;

        std::cout << "Please write just the letter of the answer." << std::endl;
        std::cin >> answer;

        if (answer == "A" || answer == "a")
            std::cout << "Correct" << std::endl;
        else
            std::cout << "Wrong" << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
