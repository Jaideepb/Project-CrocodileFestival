
// 
// Desc: Find the majority element in a given array .
// Majority element is defined as an element which is repeated in the 
// array more than N/2 times; where N is the size of the array
//
// The Algorithm below is known as Moore's Law. It takes O(N) time and O(1) space
//

#include<iostream>
#define N 10

using namespace std;

class Majority {

	public:
		static int PrintMajority(const int arr[],int size);
};


int Majority::PrintMajority(const int arr[],int size){

	int maj_idx=0;
	int count=1;
	for(int i=1;i<size;i++) 
	{
		if(arr[maj_idx] == arr[i])
			count++;
		else
			count--;

		if(count==0) 
		{
			count=1;
			maj_idx = i;
		}
	}
	return maj_idx;
}



int main() {
	int arr[N];
	int result=0;
	int count=0;
	for(int i=0;i<N;i++)
		cin>>arr[i];

	result=Majority::PrintMajority(arr,N);

	for(int i=0;i<N;i++)
		if(arr[result]==arr[i])
			count++;
	if(count>N/2)
		cout<<arr[result]<<endl;
	else
		cout<<"No Majority"<<endl;

	return 0;
}

