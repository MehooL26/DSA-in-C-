//SELECTION_SORT - we select the minimum element from the array in each iteration and put it at it's right place i.e. index 0,1...
// Sorting begins from the first index
#include<iostream>

using namespace std;
class SSort {
    private:
    int numbers[5];

    public:
    void input(){
        cout<<"Enter the numbers: ";
        for(int i=0;i<5;i++)
        cin>>numbers[i];
    }

    void selection_sort(){
        int min_index,c,i,j;
        for (i=0;i<5;i++){
            min_index = i;
            for(j=i+1;j<5;j++){
                if (numbers[j]<numbers[min_index]){
                    c = numbers[j];
                    numbers[j] = numbers[min_index];
                    numbers[min_index] = c;
                }
            }
        }
    }

    void print(){
        cout<<"Sorted array is: ";
        for(int i=0;i<5;i++)
        cout<<numbers[i]<<" ";
    }
};

int main(){
    SSort SSortObj;

    SSortObj.input();
    SSortObj.selection_sort();
    SSortObj.print();
}