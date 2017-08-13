#include <iostream>
using namespace std;
int n,i,j,temp=0,tat=0;
int arrTime[10],execTime[10],pro[10];
double tp,awt;
int main() {
	cout<<"Enter number of process: ";
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++) {
		cout<<"Enter arrival time of process P"<<i<<": ";
		cin>>arrTime[i];
		cout<<endl;
		cout<<"Enter execution time of process P"<<i<<": ";
		cin>>execTime[i];
		cout<<endl<<endl;
	}
	for(i=0;i<n;i++) {
		pro[i]=i;
	}
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(arrTime[j]>arrTime[j+1]) {
				temp=arrTime[j+1];
				arrTime[j+1]=arrTime[j];
				arrTime[j]=temp;
				
				temp=pro[j+1];
				pro[j+1]=pro[j];
				pro[j]=temp;	
			}
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<execTime[pro[i]];j++) {
			cout<<"    P"<<pro[i]<<"  ";
		}
	}
	cout<<endl;
	for(i=0;i<n;i++) {
		tat = tat+execTime[i];
	}
	for(i=0;i<tat+1;i++) {
	cout<<i<<"\t";
	}
	return 0;	
}
