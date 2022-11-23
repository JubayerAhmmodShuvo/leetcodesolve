#include<bits/stdc++.h>
using namespace std;

// int main(){
//   int a[5]={1,2,3,4,5};
//   for(int i : a){
//     cout<<i<<" ";
//   }
// }
int main()
{
	int Arr[100];
  int n,i;
  double small,large;
	cout<<"Enter number of elements you want to insert ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>Arr[i];
	}
	small=Arr[0];
	large=Arr[0];
	for(i=1;i<n;i++)
	{
		if(Arr[i]<small)
			small=Arr[i];
		if(Arr[i]>large)
			large=Arr[i];
	}
	cout<<"\nLargest element is :"<<large;
	cout<<"\nSmallest element is :"<<small;

  double avg= ((large+small)/2);
  cout<<"\nAverage of largest and smallest element is :" <<setprecision(3)<<avg;
    
	return 0;
}
