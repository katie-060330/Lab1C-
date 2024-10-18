/*myFile1b.h, Ex1 a4 CSI2372A*/


#include <iostream>
using namespace std;

class Student {
	int numID;
	int nbCourses;
	int maxCourses;
	int* List_grades;
	Course** List_courses;
public:
	Student(int, int); 	//constructor
	~Student(); 		//destructor
	double average();
	int totalHours();
	bool addCourse(Course*, int);
};

Student::Student(int a, int b){
	numID = a; 
	maxCourses = b; 
	nbCourses = 0; 
	List_grades = new int[maxCourses];
    List_courses = new Course*[maxCourses];
}

Student::~Student(){
	delete[] List_grades;
    delete[] List_courses;
	cout<<"this is the destructor"<<endl; 
}

double Student::average(){
	if(nbCourses == 0){
		return 0; 
	}

	double toReturn; 
	for(int i = 0; i < nbCourses; i++){
		toReturn += List_grades[i] ; 
	}
	toReturn = toReturn/nbCourses; 
	return toReturn; 
}

int Student::totalHours(){
	
	int toReturn = 0; 
	for(int i = 0; i < nbCourses; i++){
		Course* c = List_courses[i]; 
		toReturn = toReturn + c->getHours(); 
		
	} 
	return toReturn; 
}
bool Student::addCourse(Course* c, int a){
	if(nbCourses == maxCourses){
		return false; 
	}
	
	List_courses[nbCourses] = c; 
	List_grades[nbCourses] = a; 
	nbCourses++;

	
	return true; 
}

