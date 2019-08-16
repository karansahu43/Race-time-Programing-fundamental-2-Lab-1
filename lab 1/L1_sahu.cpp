// Author:  Karan Sahu
// Assignment Number: Lab 1
// File Name: L1_sahu.cpp 
// Course/Section: COSC 1337 Section 003
// Due Date:  1/28/2018
// Instructor: Bernard Ku
//
// 
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	// declare variables
	double Time1, Time2, Time3;
	string Runner1, Runner2, Runner3;
	
	// Intro
	cout << "Enter the names of three runners and their finishing times. Then I will tell you who came in first, second, and third." << endl;
	
	//runner #1
	cout << "Name of Runner 1: ";
    getline(cin, Runner1);
    cout << "Runner 1's finishing time: ";
    cin >> Time1;
    while (Time1 < 0)
    {
    	cout << "Please enter a positive time: ";
    	cin >> Time1;
	}
    cin.ignore();
    cout << "\n";
    
    //runner #2
    cout << "Name of Runner 2: ";
    getline(cin, Runner2);
    cout << "Runner 2's finishing time: ";
    cin >> Time2;
    while (Time2 < 0)
    {
    	cout << "Please enter a positive time: ";
    	cin >> Time2;
	}
    cin.ignore();
    cout << "\n";
    
    //runner #3
    cout << "Name of Runner 3: ";
    getline(cin, Runner3);
    cout << "Runner 3's finishing time: ";
    cin >> Time3;
    while (Time3 < 0)
    {
    	cout << "Please enter a positive time: ";
    	cin >> Time3;
	}
    
    cin.ignore();
    cout << "\n";
    
    //cout << Runner1 << Runner2 << Runner3 << Time1 << Time2 << Time3;
    
    cout << "Race results" << endl << "-------------------" << endl << endl ;
    
    if (Time1 < Time2 && Time2 < Time3)
    {
    	cout << "First Place:   " << left << setw(10) << Runner1 << "     " << Time1 << endl;
    	cout << "Second Place:  " << left << setw(10) << Runner2 << "     " << Time2 << endl;
    	cout << "Third Place:   " << left << setw(10) << Runner3 << "     " << Time3 << endl;
	}
	else if (Time1 < Time3 && Time3 < Time2)
    {
    	cout << "First Place:   " << left << setw(10) << Runner1 << "     " << Time1 << endl;
    	cout << "Second Place:  " << left << setw(10) << Runner3 << "     " << Time3 << endl;
    	cout << "Third Place:   " << left << setw(10) << Runner2 << "     " << Time2 << endl;
	}
	else if (Time2 < Time1 && Time1 < Time3)
    {
    	cout << "First Place:   " << left << setw(10) << Runner2 << "     " << Time2 << endl;
    	cout << "Second Place:  " << left << setw(10) << Runner1 << "     " << Time1 << endl;
    	cout << "Third Place:   " << left << setw(10) << Runner3 << "     " << Time3 << endl;
	}
	else if (Time2 < Time3 && Time3 < Time1)
    {
    	cout << "First Place:   " << left << setw(10) << Runner2 << "     " << Time2 << endl;
    	cout << "Second Place:  " << left << setw(10) << Runner3 << "     " << Time3 << endl;
    	cout << "Third Place:   " << left << setw(10) << Runner1 << "     " << Time1 << endl;
	}
	else if (Time3 < Time1 && Time1 < Time2)
    {
    	cout << "First Place:   " << left << setw(10) << Runner3 << "     " << Time3 << endl;
    	cout << "Second Place:  " << left << setw(10) << Runner1 << "     " << Time1 << endl;
    	cout << "Third Place:   " << left << setw(10) << Runner2 << "     " << Time2 << endl;
	}
	else if (Time3 < Time2 && Time2 < Time1)
    {
    	cout << "First Place:   " << left << setw(10) << Runner3 << "     " << Time3 << endl;
    	cout << "Second Place:  " << left << setw(10) << Runner2 << "     " << Time2 << endl;
    	cout << "Third Place:   " << left << setw(10) << Runner1 << "     " << Time1 << endl;
	}
	else if (Time1 == Time2 && Time3 < Time1)
    {
    	cout << "First Place:   " << Runner1 << "     " << Time1 << endl;
    	cout << "First Place:   " << Runner1 << "     " << Time1 << endl;
    	cout << "Third Place:   " << Runner2 << "     " << Time2 << endl;
	}


	return 0;
}

/* SAMPLE OUTPUT


*/
