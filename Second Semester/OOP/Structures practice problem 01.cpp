#include <iostream>
using namespace std;

struct Student{	
	string name;
	int courseMarks[3];
};

void inputData(Student &s);
void displayData(Student s);
void averageMarks(Student s);
void changeMarks(Student &s);
int selectOption();

// --- Main function starts here
int main(){
	
	Student s1, s2;
	
	inputData(s1);
	inputData(s2);
	
	cout << endl << endl;
	
	while(1){
		int option = selectOption();
		int studentNo = 0;
		cout << "Enter student number (1/2): ";
		cin >> studentNo;
	
		switch(option){
			
			case 1: if(studentNo == 1)
						displayData(s1);
					else
						displayData(s2);
						break;
			
			case 2: if(studentNo == 1)
						averageMarks(s1);
					else
						averageMarks(s2);
						break;
						
			case 3: if(studentNo == 1)
						changeMarks(s1);
					else
						changeMarks(s2);
						break;
			
			case 4: return 0;
		}
	}
	
	
	return 0;
}
// --- Main function ends here

void displayData(Student s){
	
	cout << "Name: " << s.name << endl;
	
	for(int i = 0; i < 3; i++){		
		cout << "Marks for course " << i+1 << ": " << s.courseMarks[i] << endl;
		
	}	
}

void averageMarks(Student s){
	
	int sum = 0;
	
	for(int i=0; i<3; i++){
		sum += s.courseMarks[i];
	}
	
	float averageMarks = (sum/3);
	cout << "Average marks: " << averageMarks << endl << endl;
	
}

void changeMarks(Student &s){
	
	int newMarks;
	cout << "Enter the course number: ";
	int courseNumber;
	cin >> courseNumber;
	
	if(courseNumber > 3 || courseNumber < 1){
		cout<<"wrong input. please select course within range (1-3)" << endl;
	}
	else{
		
		cout << "Enter new marks: ";
		cin >> newMarks;
		
	}
	
	s.courseMarks[courseNumber-1] = newMarks;
	
}

// take inputs 
void inputData(Student &s){
	
	cout << "Enter First name: ";
	cin >> s.name;
	
	cout << "Enter marks: " << endl;
	for(int i=0; i<3; i++){
		cout << "Enter marks for course " << i+1 << ": ";
		cin >> s.courseMarks[i];
	}
	
	cout << endl << endl;
}

int selectOption(){
	
	int option;
	
	cout << endl << "Menu:" << endl << endl;
	cout << "1. Display Student Data." << endl;
	cout << "2. Calculate Average Marks." << endl;
	cout << "3. Change Marks." << endl;
	cout << "4. Exit" << endl;
	cout << "Please select an option: ";
	cin >> option;
	cout << endl << endl;
	return option;
}
