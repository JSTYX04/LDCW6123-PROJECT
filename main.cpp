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

//function to explain What Is AI
void explainWhatIsAI() 
{
    cout << "\n\033[1mWhat is Artificial Intelligence?\033[0m\n";
    cout << "Artificial Intelligence (AI) is a branch of computer science that focuses on creating systems capable of performing tasks that typically require human intelligence.\n";
    cout << "These tasks include problem-solving, understanding natural language, recognizing patterns, learning from experience and making decisions.\n";
    cout << "AI encompasses a range of subfields such as machine learning, computer vision, natural language processing and robotics.\n";
    cout << "It aims to build machines that can simulate human cognitive abilities to enhance automation, efficiency and decision-making across various domains.\n";
}

//function to explain how AI works
void explainHowAIWorks()
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
    
    do
    {
        //displays the menu first
        showMenu();

        // Prompt the user for their choice
        cout << "Enter your choice (1-7): ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice)
        {
            case 1:
                explainWhatIsAI();
                break;
            case 2:
                explainHowAIWorks();
                break;
            case 3:
                explainApplicationsOfAI();
                break;
            case 4:
                explainChallengesOfAI();
                break;
            case 5:
                explainFutureOfAI();
                break;
            case 6:
                explainEthicalConsiderations();
                break;
            case 7:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
                break;
        }

    } while (choice ! = 7);

    return 0;
}