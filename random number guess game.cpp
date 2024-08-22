#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

	srand(static_cast<unsigned int>(time(0)));
	
	int secretNumber = rand() % 100 + 1;

	int guess;
	std::cout << "Guess the number (between 1 and 100): ";

	std::cin >> guess;

	if (guess > secretNumber) {
		std::cout << "Too high! Try again. \n";
	} else if (guess < secretNumber) {
		std::cout << "Too low! Try again. \n";
	} else {
		std::cout << "Congratulations! You guessed the number. \n";
	}

	while (guess != secretNumber) {
		std::cin >> guess;
		// Include your if-else statements here to provide feedback
	}

	return 0;
}