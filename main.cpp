#include <QCoreApplication>
#include <iostream>

using namespace std;


void arrayMerged(int array1[], int array2[], int l1, int l2, int array3[]){
    int i =0, j = 0, k=0;
    while(i<l1 && j<l2){
        if(array1[i]<array2[j]){
            array3[k]=array1[i];
            i++;
            k++;

        }else{
            array3[k]=array2[j];
            j++;
            k++;
        }
    }

    while(i<l1){
        array3[k]=array1[i];
        i++;
        k++;
    }

    while(j<l2){
        array3[k]=array2[j];
        j++;
        k++;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication an(argc, argv);
    int A[] = {3, 8, 10, 15};
    int B[] = {4, 9, 10};
    int l1 = sizeof(A)/sizeof(A[0]);
    int l2 = sizeof (B)/sizeof (B[0]);
    int C[l1+l2];
    arrayMerged(A, B, l1, l2, C);

    cout<<"Merged array "<<endl;
    for(int m = 0; m<l1+l2; m++){
        cout<<C[m]<<", ";
    }

    return an.exec();
}
