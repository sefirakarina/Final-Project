#include<iostream>
#include <string>
using namespace std;

// P.S :I've made some additon in the Final Project Plan.docx file

int main (){
	
	int num = 50; // max input
	float score[num];
	string name[num];
	int students ;
/*	const int minScore = 75;
	int noPassScore[num];
	int noPassName[num];
	int remedyScore;
	int scoreNow;
*/
	
	cout << "Enter number of students = ";
	cin >> students ;
	cout <<endl;
	
	
	for (int i=0 ; i<students ; i++) // to know students's names
	{
		cout << "Enter student "<<i+1<<"'s name = " ;
		cin >> name[i] ;
	}
	
///////////////////////////////////////////////////////////////////////////////////
	cout <<endl;
//////////////////////////////////////////////////////////////////////////////////	

	for (int i=0 ; i<students ; i++) // to know student's 1st test's scores
	{
		cout << "input "<<name[i]<<"'s 1st test's score = ";
		cin>>score[i];
	
	}
	
/*		for (int i=0 ; i<students ; i++) 
	{
		
			if (score[i]<minScore)
			{
				name[i]=noPassName[i];
				score[i]=noPassScore[i];
			}
		cout <<noPassName[i]<<endl;
	}
*/	
	
	
	
	return 0;
}
