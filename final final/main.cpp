#include<iostream>
#include <string>
#include "finalproject.hpp"
using namespace std;

int main()
{
	int humans ;
	int num=20;
	string namee[num] ;
	float score[num],average,remedyScore[num],retestScore[num],total;
	float score2[num],average2,remedyScore2[num],retestScore2[num],total2,mean[num];
	float score3[num],average3,retestScore3[num],total3,midScore[num],finalMidScore[num];
	
	Data input;
	
	cout << "Enter number of students (max 20) = ";
	cin >> humans ;
	
	while(humans > num)
	{
		cout << "Enter number of students (max 20) = ";
		cin >> humans ;		
	}
	
	cout<<endl;
	
	input.setStudents(humans);
	
	for (int i=0 ; i<input.getStudents() ; i++) // to know students's names
	{
		cout << "Enter student "<<i+1<<"'s name = " ;
		cin >> namee[i] ;
		
		input.setName(namee[i]);
	}
	cout<<endl ;
	
	cout <<"1st test"<<endl ;
	cout<<"------------"<<endl ;
	input.calcScores(input.getStudents(),namee,score,total,average,retestScore,remedyScore);
	
	cout<<"==============================================================================="<<endl;
	
	cout <<"2nd test"<<endl ;
	cout<<"------------"<<endl ;
	input.calcScores2(input.getStudents(),namee,score2,total2,average2,retestScore2,remedyScore2);
	
	cout<<"==============================================================================="<<endl;
	
	input.countAv(score,score2,mean,namee);
	
	cout<<"==============================================================================="<<endl;
	
	input.midTerm(input.getStudents(),namee,score3,total3,average3,retestScore3,midScore);
	
	input.reportScore(input.getStudents(),finalMidScore,mean,midScore, namee);

return 0 ;
}

