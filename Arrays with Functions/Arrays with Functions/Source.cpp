#include <iostream>

using namespace std;

void Function(int array[], int leght);

int main() {

	cout << "Arrays with functions\n" << endl;

	int array[] = { 1,3,5,7,9 };

	Function(array, 5);

	for (int i = 0; i < 5; i++) {
		cout << "Array[" << i << "];" << array[i] << endl;
	}
	return 0;
}
void Function(int array[], int leght)
{
	for (int i = 0; i < leght; i++) {
		array[i]++;
	}
}