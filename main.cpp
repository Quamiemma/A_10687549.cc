#include <iostream>
#include <fstream>
#include <string>
using namespace std;

strict{
string idNum;
string name;
int age;
string gender;
double mark;
char grade;
};

char getGrade(double score){
	char Grade;


	if(score >=80 && score <100){
		Grade = 'A';
	}else if (score >=70 && score <80){
		Grade = 'B';
	}else if (score >=60 && score <70){
		Grade = 'C';
	}else if (score >=50 && score < 60){
		Grade = 'D';
	}else if (score >=40 && score < 50){
		Grade = 'E';
	}else {
		Grade = 'F';
	}

	return Grade;
}

int main(){

	Student student[3];

	for(int i=0; i<3; i++){
		cout << "Enter Student " << i+1 << "'s Name:";
		cin >> student[i].Name;
		cout << "Enter Student " << i+1 << "'s Id: ";
		cin >> student[i].idNumber;
		cout << "Enter Student " << i+1 << "'s Age: ";
		cin >> student[i].Age;
		cout << "Enter Student " << i+1 << "'s Gender: ";
		cin >> student[i].Gender;
		cout << "Enter Student " << i+1 << "'s Score: ";
		cin >> student[i].Score;
		student[i].Grade = getGrade(student[i].Score);
	}
	getF.open("message.txt");

	getF << "  IdNumber\tName\tAge\tGender\tScore\t\Grade" << endl;
	for(int i=0; i<3; i++){
		getF << i << " " << student[i].idNumber <<"\t\t"<<student[i].Name << "\t" << student[i].Age << "\t" << student[i].Gender<< "\t" << student[i].Score << "\t" << student[i].Grade << endl;
	}

return 0;

} 
