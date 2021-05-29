#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;
int main()
{
	int h,m,sec,i;
	system("CLS");
	cin>>h>>m>>sec;
	while(h<24)
	{
		while(m<60)
		{
			while(sec<60)
			{ //YO
			    Sleep(1000);
			    system("CLS");
			    for(i=0;i<10;i++)
			    cout<<endl;
				for(i=0;i<6;i++)
				cout<<"\t";
				cout<<"HH : MM : SEC"<<endl;
				sec++;
				for(i=0;i<6;i++)
				cout<<"\t";
				cout<<h<<" : "<<m<<" : "<<sec<<endl;
			}
			sec=0;
			m++;
		}
		m=0;
		h++;
	}
}
