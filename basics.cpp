#include <iostream>
#include <string>

using namespace std;
class student {
    private:
    string name[5];
    int marks[5];
    int roll_num[5];
    
    public:
    void inputMarks(){
        for (int i=0;i<5;i++){
        cout<<"Enter your name: ";
        getline(cin,name[i]);  //getline reads the full line including the spaces
        cout<<"Enter your roll number: ";
        cin>>roll_num[i];
        cout<<"Enter your subject marks: ";
        cin>>marks[i];
        cin.ignore();   //clear the input buffer to prevent issues if called multiple times
        }
    }
    
    void printMarks(){
        for (int i=0;i<5;i++){
        cout<<"\nStudent name: "<<name[i]<<endl;
        cout<<"Roll Number: "<<roll_num[i]<<endl;
        cout<<"marks are: "<<marks[i]<<endl;
        }
    }
};
int main()
{
    student studentobj;
    
    studentobj.inputMarks();
    studentobj.printMarks();

    return 0;
}