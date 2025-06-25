#include <iostream>
#include <string>
using namespace std;

//this is to show the menu
void showMenu()
{
    int choice;

    //display the options
    cout << "\n==========================\n";
    cout << " Welcome to AI Wonderland\n";
    cout << "==========================\n";

    cout << "Please select your adventure:\n";
    cout << "1. What is Artificial Intelligence?\n";
    cout << "2. How does AI work?\n";
    cout << "3. What are the applications of AI?\n";
    cout << "4. What are the challenges of AI?\n";
    cout << "5. What is the future of AI?\n";
    cout << "6. What are ethical considerations in AI?\n";
    cout << "7. Exit\n";
    cout << "==========================\n";

}

//function to explain how AI works
void explainHowAIWorks(int choice)
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the console and move cursor to top-left
    cout << "\033[1m\nHow AI Works:\n\033[0m";
    cout << "Artificial Intelligence (AI) works by simulating human intelligence processes through algorithms and computational models.\n";
    cout << "It involves machine learning, where systems learn from data, and deep learning, which uses neural networks to analyze complex patterns.\n";
    cout << "AI systems can process vast amounts of information, recognize patterns, and make decisions based on learned experiences.\n";
}

int main ()
{
    int choice;
    
    //displays the menu first
    showMenu();

    // Prompt the user for their choice
    cout << "Enter your choice (1-7): ";
    cin >> choice;
    cin.ignore(); // Clear the newline character from the input buffer

    switch (choice)
    {
    case 1:
        explainHowAIWorks(choice);
        break;
    case 7:
        cout << "Exiting the program. Goodbye!\n";
        break;
    default:
        cout << "Invalid choice. Please select a valid option.\n";
        break;
    }

    return 0;
}