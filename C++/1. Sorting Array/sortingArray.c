#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int Test;
  scanf("%d", &Test);
  int arr[Test];

  for(int i = 0; i < Test; i++) {
    scanf("%d", &arr[i]);
  }
  
//Method - 1

//   sort(arr, arr+Test);

//--------------- OR ------------------

//Method - 2 

for (int i = 0; i < Test - 1; i++) {
        for (int j = 0; j < Test - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

  for(int i = 0; i < Test; i++) {
    printf("%d\n", arr[i]);
  }

return 0;
}
