#include <iostream>
#include "mylib.h"

/*
##########################################################
##	Name: Andrew Huang				##			       
##	Studentnumber: s1913999				##
##	Date: 16-02-17					##
##########################################################
*/

//Returns true when a number is a prime number.
bool isPrime(int number){
	int i = 0;
	if(number==1){
	  return false;
	 }

	for(i = 2; i < number; i++){
	  if(number % i == 0){
		  return false;
	  	  }
	  }

	 if(number == i) {
		 return true;
	 }
	return false;
}

//Returns the number of primenumbers and puts all primenumbers in
// a list.
int getPrime(int listin[], int size, int listout[]){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(isPrime(listin[i])){
			listout[count] = listin[i];
			count++;
		}
	}
	return count;
}

//Prints a list to the console.
void printList(int list[], int size){
	for(int i = 0; i < size; i++){
		std::cout << list[i] << " ";
	}
	std::cout << "\n";
}
