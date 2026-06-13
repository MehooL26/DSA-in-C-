#include<iostream>

using namespace std;

class MergeSort{

    public:
    void merge(int numbers[6],int l,int m,int r){
        int i,j,k;
        int n1 = m-l+1;
        int n2 = r-m; 

        int L[n1],R[n2];

        for (i=0;i<n1;i++){
            L[i] = numbers[l+i];
        }
        for(j=0;j<n2;j++){
            R[j] = numbers[m+j+1];
        }
        i=0;
        j=0;
        k=l;

        while(i<n1 && j<n2){
            if (L[i]<=R[j]){
                numbers[k] = L[i];
                i++;
            }
            else{
                numbers[k] = R[j];
                j++;
            }
            k++;
        }

        while(i<n1){
            numbers[k] = L[i];
            i++;
            k++;
        }

        while(j<n2){
            numbers[k] = R[j];
            j++;
            k++;
        }
    }

    void merge_sort(int numbers[6],int l,int r){
        if (l<r){
            int m=l+(r-l)/2;

            merge_sort(numbers,l,m);
            merge_sort(numbers,m+1,r);
            merge(numbers,l,m,r);
        }
    }
};

int main(){
    MergeSort MergeSortobj;

    int i,numbers[6];
        cout<<"Enter the numbers: ";
        for(i=0;i<6;i++){
            cin>>numbers[i];
        }
    MergeSortobj.merge_sort(numbers,0,5);
    for (int i=0;i<6;i++)
    cout<< numbers[i]<<" ";
    cout<<endl;
}