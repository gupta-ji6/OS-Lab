#include <iostream>
using namespace std;

int main() {
	int n,i,j,tat=0,wt=0;
	int time[10];
	double tp,awt=0;
	cout<<"Enter number of process: ";
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++) {
		cout<<"Enter execution time of process P"<<i<<": ";
		cin>>time[i];
		cout<<endl;
	}
	for(j=0;j<n;j++) {
		for(i=0;i<time[j];i++) {
			cout<<"    P"<<j<<"  ";
		}
	}
	cout<<endl;
	for(i=0;i<n;i++) {
		tat = tat+time[i];
	}
	for(i=0;i<tat+1;i++) {
		cout<<i<<"\t";
	}
	cout<<endl<<endl;
	tp=(double)tat/n;
	for(i=1;i<n;i++) {
		wt=wt+time[i-1];
	}
	awt=(double)wt/n;
	cout<<"Total turn-around time = "<<tat<<" seconds"<<endl;
	cout<<"Throughput Time = "<<tp<<" seconds"<<endl;
	cout<<"Average waiting time = "<<awt<<" seconds"<<endl;
	
	return 0;
}
