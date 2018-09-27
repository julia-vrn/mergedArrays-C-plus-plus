#include <QCoreApplication>
#include <iostream>

using namespace std;

//l1 and l2 - the sizes of the original arrays to be merged
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
    int l1 = sizeof(A)/sizeof(A[0]);//number of bytes allocated for the array divided by the size of one element of the array
    int l2 = sizeof (B)/sizeof (B[0]);
    int C[l1+l2];
    arrayMerged(A, B, l1, l2, C);

    cout<<"Merged array C:"<<endl;
    for(int m = 0; m<l1+l2; m++){
        cout<<C[m]<<" ";
    }
    cout<<endl;

    int D10X5[5] = {1,2,3,4,5};
    int D20X10[10] = {2,3,5,5,8,12,13,17,18,20};
    int D10AndD20[20];

    int ln1 = sizeof(D10X5)/sizeof(D10X5[0]);
    int ln2 = sizeof(D20X10)/sizeof(D20X10[0]);


    arrayMerged(D10X5, D20X10, ln1, ln2, D10AndD20);
    cout<<"Merged array D10AndD20:"<<endl;
    for(int f = 0; f<ln1+ln2; f++){
        cout<<D10AndD20[f]<<" ";
    }




    return an.exec();
}
