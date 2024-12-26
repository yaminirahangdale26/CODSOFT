#include<iostream>
#include<ctime>
#include<cstdlib>
int main()
{
 srand(time(0));
 int numberToGuess=rand()%100+1;
 int numberOfTries=0;
 std::cout<<"Welcome to the number guessing  game!"<<std::endl;
 std::cout<<"I am thinking of a number between 1 and 100."<<std::endl;
 while(true){
    int guess;
    std::cout<<"Take a guess:";
    std::cin>>guess;

    numberOfTries++;

    if(guess==numberToGuess){
        std::cout<<"Congratulations! You found the number in"<<numberOfTries<<"tries."<<std::endl;
        break;
    }
    else if (guess > numberToGuess){
        std::cout<<"too high! Try again."<<std::endl;
    }
    else{
        std::cout<<"Too low! Try again."<<std::endl;
    }

 }
 return 0;
}