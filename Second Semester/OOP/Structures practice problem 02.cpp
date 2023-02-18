#include <iostream>
using namespace std;

struct movieData{
	
	string title;
	string director;
	int yearReleased;
	
};

movieData createMovieData(movieData m); //Declaration
void displayMovieData(movieData m); //Declaration

int main(){
	
	// creating objects of the struct variable.
	movieData movieOne, movieTwo;
	
	// calling a function that takes input and returns the input data as a structure.
	movieOne = createMovieData(movieOne);
	
	// printing the details on the screen
	displayMovieData(movieOne);
	
	// calling a function that takes input data and returns that data back
//	movieTwo = createMovieData(movieTwo);
	
	// prints the data
//	displayMovieData(movieTwo);
	
	return 0;
}

// a function that takes input of struct movieData and returns it to main
movieData createMovieData(movieData m){
	
	cout << "______________________" << endl << endl;
	
	cout << "Enter movie name: ";
	cin >> m.title;
	
	cout << "Enter director's name: ";
	cin >> m.director;
	
	cout << "Enter year released: ";
	cin >> m.yearReleased;
	
	cout << endl << "______________________" << endl << endl;
	
	return m;
	
}

// A function that takes struct parameter and displays the struct members.
void displayMovieData(movieData m){
	
	cout << "Title: " << m.title << endl;
	cout << "Directed by " << m.director << endl;
	cout << "Released in " << m.yearReleased;
	
}



