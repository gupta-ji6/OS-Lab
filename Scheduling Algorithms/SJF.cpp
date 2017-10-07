#include <iostream>
using namespace std;
int n,i,j,temp=0,tat=0;
int burstTime[10],pro[10];
//double tp,awt;
int main() {
	cout<<"Enter number of process: ";
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++) {
		cout<<"Enter burst time of process P"<<i<<": ";
		cin>>burstTime[i];
		cout<<endl;
	}
	for(i=0;i<n;i++) {
		pro[i]=i;
	}
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(burstTime[j]>burstTime[j+1]) {
				temp=burstTime[j+1];
				burstTime[j+1]=burstTime[j];
				burstTime[j]=temp;
				
				temp=pro[j+1];
				pro[j+1]=pro[j];
				pro[j]=temp;	
			}
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<burstTime[i];j++) {
			cout<<"    P"<<pro[i]<<"  ";
		}
	}
	cout<<endl;
	for(i=0;i<n;i++) {
		tat = tat+burstTime[i];
	}
	for(i=0;i<tat+1;i++) {
	cout<<i<<"\t";
	}
	return 0;	
}
