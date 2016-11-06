//  main.cpp
// Final Project
//  Sefira Karina-2001586155-Batch 2020
//  Copyright © 2016 Sefira Karina. All rights reserved.

#include<iostream>
#include <string>
#include "finalproject.hpp"
using namespace std;

int main()
{
	int humans,choice ;
	int num=20;
	string namee[num] ;
	float score[num],average,remedyScore[num],retestScore[num],total;
	float score2[num],average2,remedyScore2[num],retestScore2[num],total2,mean[num];
	float score3[num],average3,retestScore3[num],total3,midScore[num],finalMidScore[num];
	
	cout<< "WELCOME TO THE MID REPORT CARD SIMULATOR\n"
		<<"-----------------------------------------"<<endl<<endl ;
	
do 
//the menu will reappeared after each choice (except 3)
{
	
	cout <<"What do you want to do?"<<endl<<endl;
	cout<<"1.View scoring rules\n"<<"2.Start scoring\n"<<"3.Exit"<<endl<<endl;
	cout<<"Input your choice (1-3) : " ; cin>>choice ; cout<<endl;

	Data input;
	
	if (choice==1)
	{
		input.rules();	
		//call fucntion to show the rules of scoring)
	}
	
	else if(choice==2)
	{
	
		cout << "Enter number of students (max 20) = ";
		//input the number of students 
		cin >> humans ;
	
		while(humans > num)
		/*input validation,if the student input is above 20,
		the program will ask for reinput*/
		{
			cout << "Enter number of students (max 20) = ";
			cin >> humans ;		
		}
	
		cout<<endl;
	
		input.setStudents(humans);
		//call mutator to set the amount of students
	
		for (int i=0 ; i<input.getStudents() ; i++) 
		// to know students's names
		{
			cout << "Enter student "<<i+1<<"'s name = " ;
			cin >> namee[i] ;
		
			input.setName(namee[i]);
		}
		cout<<endl ;
	
		cout <<"1st test"<<endl ;
		cout<<"------------"<<endl ;
		//call the function to input & calculate 1st test's scores
		input.calcScores(input.getStudents(),namee,score,total,average,retestScore,remedyScore);
		
		cout<<"==============================================================================="<<endl;
	
		cout <<"2nd test"<<endl ;
		cout<<"------------"<<endl ;
		//call function to input & calculate 2nd test's scores
		input.calcScores2(input.getStudents(),namee,score2,total2,average2,retestScore2,remedyScore2);
	
		cout<<"==============================================================================="<<endl;
		//call function to calculate the average test scores
		input.countAv(score,score2,mean,namee);
	
		cout<<"==============================================================================="<<endl;
		//call function to input & calculate mid test's scores
		input.midTerm(input.getStudents(),namee,score3,total3,average3,retestScore3,midScore);
		
		//call function to show the final scores for the mid repord card
		input.reportScore(input.getStudents(),finalMidScore,mean,midScore, namee);

	}
	
	else if(choice==3)
	//to exit the program,user must choose 3 in the menu
	{
		cout<<"OKAY,BYE!!" ;
		return 0; 
	}
	
	else
	cout<<"PLEASE CHOSE FROM 1-3 ONLY\n\n";
	
}

while(choice>0 || choice<4);
	
	return 0;
}

