#include <iostream>
#include<random>

using namespace std;

int ReturnRandomNum(int size_of_number);

int main() {
	srand(time(0));
	const int SIZE_OF_ARRAY = 10;
	const int SIZE_OF_DIGITS = 4;


	int array[SIZE_OF_ARRAY] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < SIZE_OF_ARRAY; i++) {
		array[i] = ReturnRandomNum(SIZE_OF_ARRAY);
	}

	cout << "The random numbers:";

	for (int i = 0; i < SIZE_OF_ARRAY; i++) {
		cout << " " << array[i];
	}

	cout << endl;
	cout << "Even indices:";

	for (int i = 0; i < SIZE_OF_ARRAY; i += 2) {
		cout << " " << array[i];
	}

	
}

int ReturnRandomNum(int size_of_number) {
	int random = (rand() % 9 + 1) * 1000 + (rand() % 10) * 100 + (rand() % 10) * 10 + rand() % 10;
	return random;
}