#include <iostream>
using namespace std;
void arrSort(int arr[],int length){
    //最后一个不用再和后面的比，所以-1
    for(int i = 0;i < length-1 ; i++){
        for(int j = i;j< length ;j++){
            int  temp;
            if(arr[i]>arr[j])
            {
                 temp = arr[i];
                 //arr[i]数组中第i个元素
                 //arr[j]数组中第i+1个元素
                 arr[i] = arr[j];
                 arr[j] = temp;
            }
        }
    }

}
int main() {
    int arr[10]{9,8,7,6,5,4,3,2,1,0};
    //交换前
    for(int i = 0;i <10;i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
    //注意使用时 arr不带[]
    arrSort(arr,10);
    for(int i = 0;i <10;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}