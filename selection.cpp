#include<iostream>

using namespace std;

void selectionSort(int a[],int n){

for(int i=0;i<n-1;i++){

int tergetIndex= i;

for(int j = i+1;j<n;j++){

if(a[j]<a[targetIndex]){

targetIndex = j;

}

}

swap(a[i],a[targetIndex]);

}

}
int main(){

int n;

cout<<"Enter the number of elements"<<endl;

cin>>n;

int a[n];

cout<<"Enter "<<n<<" elements"<<endl;

for(int i=0;i<n;i++){

cin>>a[i];

}

selectionSort(a,n);

for(int i=0;i<n;i++){

cout<<a[i]<<" ";

}

return 0;

}