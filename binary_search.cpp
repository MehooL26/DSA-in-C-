#include<iostream>
#include<string>
using namespace std;

class BSearch {
    private:
    int numbers[5];
    int num;

    public:
    void input(){
        cout<<"Enter your numbers";
        for (int i=0;i<5;i++)
        cin>>numbers[i];
        cout<<"Enter number you want to search: ";
        cin>>num;
    }

    void binary_search(int low=0, int high = 4){
        int mid = (low + high)/2;
        if (num == numbers[mid])
            cout<<"The Number is present at "<<mid;
        else if (num < numbers[mid]){
            
            binary_search(low,mid-1);
        }
        else
        binary_search(mid+1,high);
    }
};

int main(){
    BSearch BSearchObj;

    BSearchObj.input();
    BSearchObj.binary_search(0,4);
}