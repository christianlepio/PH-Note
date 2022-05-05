/*Exercise 8
Write a program to input amount from user and
determine the minimum number of notes in 
philippine peso (1, 5, 10, 20, 50, 100, 200, 500, 1000)*/

#include<iostream>
using namespace std;

int main(){
	//variable declaration
	int amount, n1, n5, n10, n20, n50, n100, n200, n500, n1000;
	n1 = 0 , n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, n200 = 0, n500 = 0, n1000 = 0;
	//input of data
	cout << "Enter amount: ";
	cin >> amount;
	//checking if amount will have 1000 peso bill
	if(amount >= 1000){
		n1000 = amount / 1000;				//counting for how many 1000 peso bill needed
		amount = amount - n1000 * 1000;		//deducting the amount of n*1000 peso bill to the amount
	}//checking if amount will have 500 peso bill
	if(amount >= 500){
		n500 = amount / 500;				//counting for how many 500 peso bill needed
		amount -= n500 * 500;				//deducting the amount of n*500 peso bill to the amount
	}//checking if amount will have 200 peso bill
	if(amount >= 200){
		n200 = amount / 200;				//counting for how many 200 peso bill needed
		amount -= n200 * 200;				//deducting the amount of n*200 peso bill to the amount
	}//checking if amount will have 100 peso bill
	if(amount >= 100){
		n100 = amount / 100;				//counting for how many 100 peso bill needed
		amount -= n100 * 100;				//deducting the amount of n*100 peso bill to the amount
	}//checking if amount will have 50 peso bill
	if(amount >= 50){
		n50 = amount / 50;					//counting for how many 50 peso bill needed
		amount -= n50 * 50;					//deducting the amount of n*50 peso bill to the amount
	}//checking if amount will have 20 peso bill
	if(amount >= 20){
		n20 = amount / 20;					//counting for how many 20 peso bill needed
		amount -= n20 * 20;					//deducting the amount of n*20 peso bill to the amount
	}//checking if amount will have 10 peso coin
	if(amount >= 10){
		n10 = amount / 10;					//counting for how many 10 peso bill needed
		amount -= n10 * 10;					//deducting the amount of n*10 peso bill to the amount
	}//checking if amount will have 5 peso coin
	if(amount >= 5){
		n5 = amount / 5;					//counting for how many 5 peso bill needed
		amount -= n5 * 5;					//deducting the amount of n*5 peso bill to the amount
	}//checking if amount will have 1 peso coin
	if(amount >= 1){
		n1 = amount / 1;					//counting for how many 1 peso bill needed
		amount -= n1 * 1;					//deducting the amount of n*1 peso bill to the amount
	}
	//output of all collected notes needed. -----> note * note_amount to present the total
	cout << "Total number of notes:\n";
	cout << "1 peso coin:\t" << n1 << "\tTotal: " << n1 * 1 << endl;
	cout << "5 peso coin:\t" << n5 << "\tTotal: " << n5 * 5 << "\n";
	cout << "10 peso bill:\t" << n10 << "\tTotal: " << n10 * 10 << endl;
	cout << "20 peso bill:\t" << n20 << "\tTotal: " << n20 * 20 << "\n";
	cout << "50 peso bill:\t" << n50 << "\tTotal: " << n50 * 50 << endl;
	cout << "100 peso bill:\t" << n100 << "\tTotal: " << n100 * 100 << "\n";
	cout << "200 peso bill:\t" << n200 << "\tTotal: " << n200 * 200 << endl;
	cout << "500 peso bill:\t" << n500 << "\tTotal: " << n500 * 500 << "\n";
	cout << "1000 peso bill:\t" << n1000 << "\tTotal: " << n1000 * 1000 << endl;
	
	return 0;
}

