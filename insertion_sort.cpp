#include<iostream>

using namespace std;

class ISort{
    private:
    int numbers[5];

    public:
    void input(){
        int i;
        cout<<"Enter the numbers: ";
        for(i=0;i<5;i++)
        cin>>numbers[i];
    }

    void insertion_sort(){
        for (int i=1;i<5;i++){
            int key = numbers[i];
            int j = i-1;
            while (j>=0 && numbers[j]>key)
            {
                numbers[j+1] = numbers[j];
                j--;
            }
            numbers[j+1] = key;
            
        }
    }

    void print(){
        int i;
        cout<<"The sorted array is: ";
        for (i=0;i<5;i++)
        cout<<numbers[i]<<" ";
    }
};

int main(){
    ISort ISortObj;

    ISortObj.input();
    ISortObj.insertion_sort();
    ISortObj.print();
}