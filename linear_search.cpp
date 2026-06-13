#include<iostream>
#include<string>
using namespace std;

class LSearch {
    private:
    int numbers[5];

    public:
    void input(){
        cout<<"Enter the numbers";
        for (int i=0;i<5;i++)
        cin>>numbers[i];
    }

    void largest_num(){
        int c = numbers[0];
        for (int i=0;i<5;i++){
            if (c<numbers[i])
            c = numbers[i];
        }
        cout<<"Largest number is: "<<c<<endl;
    }

    void smallest_num(){
        int c = numbers[0];
        for (int i=0;i<5;i++){
            if (c>numbers[i])
            c = numbers[i];
        }
        cout<<"Smallest number is: "<<c<<endl;
    }

    void num_search(){
        int num;
        cout<<"Enter the number you want to search: ";
        cin>>num;
        for (int i=0;i<5;i++){
            if (num==numbers[i])
            cout<<"The number is present at: "<<i<<endl;
        }
    }
};

int main(){
    LSearch LSearchObj;

    LSearchObj.input();
    LSearchObj.smallest_num();
    LSearchObj.largest_num();
    LSearchObj.num_search();
}