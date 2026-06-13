// BUBBLE_SORT - it compares the adjacent elements and swaps them if the value at a higher index is smaller then the value at the lesser index
// Sorting begins from the last index and also called sinking sort
#include<iostream>

using namespace std;

class bubbleSort{
    private:
    int numbers[5];

    public:
    void input(){
        cout<<"Enter your numbers: ";
        for(int i=0;i<5;i++)
        cin>>numbers[i];
    }

    void bubble_sort(){
        for (int i=0;i<5;i++){
            for (int j=0;j<5-i-1;j++){
                if (numbers[j]>numbers[j+1]){
                    int c = numbers[j];
                    numbers[j] = numbers[j+1];
                    numbers[j+1] = c;
                }
            }
        }
    }

    void print(){
        cout<<"The final array after sorting is: ";
        for (int i=0;i<5;i++){
            cout<<numbers[i];
        }
    }
};

int main(){
    bubbleSort bubbleSortObj;

    bubbleSortObj.input();
    bubbleSortObj.bubble_sort();
    bubbleSortObj.print();

}
