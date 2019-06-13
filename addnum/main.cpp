//this prolmen is described on https://www.vijos.org/p/1911
#include <iostream>
using namespace std;



void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int key = arr[left];  //比较点，这是第一个坑，将left位置的value存入key中，坑就出来了
        int i = left, j = right;
        while (i < j)
        {
            while (arr[j] > key && j > i)	//arr[j] > key可以换为arr[j] >= key，但j > i不可以换为j >= i，边界问题
                j--;
            if (i < j)
                arr[i++] = arr[j];
            while (arr[i] < key && i < j)	//同理
                i++;
            if (i < j)
                arr[j--] = arr[i];
        }
        arr[i] = key;	  //此时不用纠结是arr[i] = key还是arr[j] = key，因为i = j
        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
    }
}




int main() {
    int len = 0;
    int a[200];
    cin >> len;
    int sum = 0,flag=0;
    for (int i = 0; i < len; i++) {
        cin >> a[i];
    }
    quickSort(a, 0, len-1);
    for (int g = len - 1; g > 0; g--) {
        flag=0;
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (a[g] == a[i] + a[j]) {
                    sum += 1;
                    flag=1;
                }
                if (flag==1)
                {
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}