#include "mylib.h"
#include <iostream>


bool assertTrue(bool assertion){
	if(assertion) return true;
	else return false;
}

bool assertEqualsInt(int num1, int num2){
	if(num1 == num2) return true;
	else return false;
}

bool assertEqualsList(int list1[], int list2[], int size){
	for(int i = 0; i < size; i++){
		if(list1[i] == list2[i]) return true;
			else return false;
	}
	return false;
}

void printTestResult(bool res){
	if(res) std::cout << "SUCCESS" << std::endl;
	else std::cout << "FAIL" << std::endl;
}

int main() {
	int size = 5, number = 3;
	int list[size] = { 1,6,33,11,5 };
	int testlist[size] = {11,5};
	int listout[size];

	std::cout << "Testing function: isPrime(int number)...: ";
	printTestResult(assertTrue(isPrime(number)));

	std::cout << "Testing function: getPrime(int number)...: ";
	printTestResult(assertEqualsInt(2,getPrime(list, size, listout)));

	std::cout << "Testing function: getPrime(int number) (listout)...: ";
	printTestResult(assertEqualsList(testlist, listout, size));

	std::cout << "Testing function: printList(int list[], int size)...: " << std::endl;
	printList(list, size);
	std::cout << "1 6 33 11 5" << std::endl;

	return 0;
}
