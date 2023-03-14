#include<iostream>
#include<stdlib.h>
using namespace std;
class student{
	string name;
	int rollno;
 public:
	 student(string name,int rollno){
	 	this->name=name;
	 	this->rollno=rollno;
	 }
	 void display(){
	    cout<<"name:"<<name<<endl;
	 	cout<<"rollno:"<<rollno<<endl;
     }
	 void * operator new(size_t size){`
	 	cout<<"overloading new operator"<<size<<endl;
	 	void * p = malloc(size);
	 	return p;
	 }
	 void operator delete(void * p){
	 	cout<<"overloading delete operator"<<endl;
	 	free(p);
	 }
};
int main(){
	student * p = new student("navya",57);
	p->display();
	delete p;
}
