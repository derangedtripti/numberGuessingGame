#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
bool endGame = false;
int guess;
int guesses = 0;
char restart;
int ans;

int main() {
	srand((unsigned)time(0));
	ans = (rand()%10)+1;
	cout << "Welcome to the Random Number Guessing Game!" << endl;
	cout << "Type a number from 1 to 10 and press Enter to begin" << endl;
	cin >> guess;
	guesses ++;
	while (endGame == false)
	{
	if (guess == ans && guesses == 1){
		cout << "Congratulations! You guessed the right number on your first try" << endl;
		endGame = true;
	} else if (guess == ans && guesses > 1) {
		cout << "Congratulations! You guessed the right number with " << guesses << " tries" << endl;
		endGame = true;
	} else if (guess < ans && guess >= 0) {
		cout << "You typed the number " << guess << endl;
		cout << "The number you entered is too small! Try again " << endl;
		guesses ++;
		cin >> guess;
	} else if (guess > ans && guess <= 10) {
		cout << "You typed the number " << guess << endl;
		cout << "The number you entered is too large! Try again " << endl;
		guesses ++;
		cin >> guess;
	} else if (guess > 10) {
		cout << "You typed the number " << guess << endl;
		cout << "The number you typed is above 10. Try again " << endl;
		cin >> guess;
	} else if (guess < 0) {
		cout << "You typed the number " << guess << endl;
		cout << "The number you typed is below 0. Try again " << endl;
		cin >> guess;
	}
	}
	return 0;
	}
