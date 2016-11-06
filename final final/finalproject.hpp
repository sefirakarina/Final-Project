//  finalproject.hpp
// Final Project
//  Sefira Karina-2001586155-Batch 2020
//  Copyright © 2016 Sefira Karina. All rights reserved.

#ifndef finalproject_hpp
#define finalproject_hpp
#include<iostream>
#include <string>
using namespace std;

class Data
{
	int students;
	string name[20];
	
	public :
	
	Data(); 
	void setStudents(int humans);
	void setName(string);
	int getStudents();
	string getName();
	
	void rules();
	void calcScores(int,string name[],float score[],float total,float average,float retestScore[],float remedyScore[]);
	void calcScores2(int,string name[],float score2[],float total2,float average2,float retestScore2[],float remedyScore2[]);
	void countAv(float score[],float score2[],float mean[],string name[]);
	void midTerm(int,string name[],float score3[],float total3,float average3,float retestScore3[],float midScore[]);
	void reportScore(int,float finalMidScore[],float mean[],float midScore[],string name[]);
};

Data::Data() //constructor
{
	students=students ;
		
}

///////////////////////////////////////////////////////////////////////////////////

void  Data::setStudents(int humans) 
//mutator to set the amount of students into the user input
{
	students=humans ;
}

/////////////////////////////////////////////////////////////////////////////////

void Data::rules() //the rules of scoring 
{
	cout <<"RULES OF SCORING FOR MID REPORT : \n"
		<<"-------------------------------------\n\n"
		<<"1.There will be 2 tests and 1 mid test\n\n"
		<<"2.The minimum score is 75\n\n"
		<<"3.If the average score of the test is bellow that,retest\n"
		<<"  will be needed,the max retest score is 100\n\n"
		<<"4.If a student get red score but no retest,the student\n"
		<<"  will undergo a remedy,with the max score of 75\n"
		<<"  if the remedy score is above 75,the score will\n"
		<<"  be count as 75,if the remedy score is bellow 75,\n"
		<<"  the highest score will be taken (ex:score=70 ,remedy\n" 
		<<"  score =60, then 70 will be taken)\n\n"
		<<"5.There will be no remedy for the mid test\n\n"
		<<"6.The final score for the mid report card is 30% of the\n"
		<<"  average test score + 70% of the mid score\n"
		<<"------------------------------------------------------------\n\n";
}

void Data::setName(string)
//mutator to set student's name 
{
	string namee[20];
		
	for (int i=0 ; i<students ; i++)
	{
		name[i]=namee[i];
	}
}

/////////////////////////////////////////////////////////////////////////////////

int Data::getStudents()
//accessor to return the value of student
{
	return students ;
}

//////////////////////////////////////////////////////////////////////////////////

string Data::getName()
//accessor to return the value of student's names
{
	return name[20];
}

////////////////////////////////////////////////////////////////////////////////////

void Data::calcScores(int,string name[],float score[],float total,float average,float retestScore[],float remedyScore[])
/*the function void calcScores2 and void midTerm 
have the exact same explanation as void calcScore , 
the only difference is void midTerm doesn't have remedy*/

{
	const int minScore=75;
	
		for (int i=0 ; i<students ; i++) 
		// to know student's tests scores
	{
		cout << "input "<<name[i]<<"'s test score "  << " = ";
		cin>>score[i];
		
		while(score[i]>100 || score[i]<0)
		/*input validation , if the score is bellow 0 or above 100, 
		the program will ask the user to reinput*/
		{
			cout << "input "<<name[i]<<"'s test score (0-100) "  << " = ";
			cin>>score[i];
		}
		
		total = total + score[i] ; 
		// count the total score of all students 
		//(used to count average score later)
	}
	
	average = total / students; 
	// count the average score for the test
	cout<<endl<<"average score = "<< average<<endl<<endl;
	
	if(average < minScore) 
	//if the average above is bellow 75,a retest will be held
	{
		cout<<"The average score is bellow the minimum score (75)"<<endl
			<<"please input students's retest scores"<<endl<<endl;
		
			for (int i=0 ; i<students ; i++) 
			{
				
				do 
				/*input validation , if the score is bellow 0 or above 100, 
				the program will ask the user to reinput*/
				{
					cout << "input "<<name[i]<<"'s retest's score (0-100) = ";
					cin>>retestScore[i];
				}
				
				while(retestScore[i]>100 || retestScore[i]<0);
				
				
				if(retestScore[i]<score[i]) 
				/*the highest score between the retest score
				 and the previous test score will be used*/
				retestScore[i]=score[i];
				
				else if(retestScore[i]>score[i])
				score[i]=retestScore[i];
				
				retestScore[i]=score[i];
			}
		cout<<endl<<endl;	
	}
	
	else if (average > minScore)
	{	
		for (int i=0 ; i<students ; i++) 
		{
			if (score[i]< minScore)
			{
				
				do /*input validation , if the score is bellow 0 or above 100, 
					the program will ask the user to reinput*/
				{
					cout << "input "<<name[i]<<"'s remedy's score (0-100) = ";
					cin>>remedyScore[i];
				}
				
				while(remedyScore[i]>100 || remedyScore[i]<0);

				if(remedyScore[i]<score[i])
				remedyScore[i]=score[i];
				/*if the remedy score is less than previous score,
				the highest score will be taken*/
				
				else if(remedyScore[i]>score[i])
				{
					if(remedyScore[i]<minScore)
					score[i]=remedyScore[i];
					/*if the remedy score is above 75, 
					the score will be count as 75*/
					
					else if (remedyScore[i]>minScore)
					remedyScore[i] = minScore ;	
					/*if the remedy score is above 75, 
					it will count as 75*/
					score[i]=remedyScore[i];
				}
				
				remedyScore[i]=score[i];
				
			}
		
		}
		cout<<endl;
	}
	
	cout<<"final score for this test : "<<endl;
	
	for (int i=0 ; i<students ; i++) 
	//to show all scores after remedy/retest
		{
			cout << name [i] << " : "<<score[i]<<endl;
		}
		
	cout<<endl;
}

//=================================================================================================================================//

void Data::calcScores2(int,string name[],float score2[],float total2,float average2,float retestScore2[],float remedyScore2[])
{
	const int minScore=75;
	
		for (int i=0 ; i<students ; i++) // to know student's tests scores
	{
		cout << "input "<<name[i]<<"'s test score "  << " = ";
		cin>>score2[i];
		
		while(score2[i]>100 || score2[i]<0)
		{
			cout << "input "<<name[i]<<"'s test score (0-100) "  << " = ";
			cin>>score2[i];
		}
		
		total2 = total2 + score2[i] ;
	}
	
	average2 = total2 / students;
	cout<<endl<<"average score = "<< average2<<endl<<endl;
	
	if(average2 < minScore) 
	{
		cout<<"The average score is bellow the minimum score (75)"<<endl
			<<"please input students's retest scores"<<endl<<endl;
		
			for (int i=0 ; i<students ; i++) 
			{
				
				do
				{
					cout << "input "<<name[i]<<"'s retest's score (0-100) = ";
					cin>>retestScore2[i];
				}
				
				while(retestScore2[i]>100 || retestScore2[i]<0);
				
				if(retestScore2[i]<score2[i])
				retestScore2[i]=score2[i];
				
				else if(retestScore2[i]>score2[i])
				score2[i]=retestScore2[i];
				
				retestScore2[i]=score2[i];
				
			}
		cout<<endl<<endl;	
	}
	
	else if (average2 > minScore)
	{	
		for (int i=0 ; i<students ; i++) 
		{
			if (score2[i]< minScore)
			{
				do
				{
					cout << "Please input " << name[i] << "'s remedy score =";
					cin >>remedyScore2[i];
				}
				
				while(remedyScore2[i]>100 || remedyScore2[i]<0);

				if(remedyScore2[i]<score2[i])
				remedyScore2[i]=score2[i];
				
				else if(remedyScore2[i]>score2[i])
				{
					if(remedyScore2[i]<minScore)
					score2[i]=remedyScore2[i];
					
					else if (remedyScore2[i]>minScore)
					remedyScore2[i] = minScore ;	
					score2[i]=remedyScore2[i];
				}
				
				remedyScore2[i]=score2[i];
			}
		
		}
		cout<<endl;
	}
	
	cout<<"final score for this test : "<<endl;
	
	for (int i=0 ; i<students ; i++) 
		{
			cout << name [i] << " : "<<score2[i]<<endl;
		
		}
		
	cout<<endl;
}
//======================================================================================================//

void Data::countAv(float score[],float score2[],float mean[],string name[])
	{
		for (int i=0 ; i<students ; i++) 
		{
			mean[i]=(score[i]+score2[i])/2; 
			//to calculate the average of the 1st and 2nd test
		
			cout<<name[i] <<"'s average test score = " << mean[i]<<endl;
		}

	}

//==================================================================================================================//
	
void Data::midTerm(int,string name[],float score3[],float total3,float average3,float retestScore3[],float midScore[])
{
	const int minScore=75;
	
	for (int i=0 ; i<students ; i++) // to know student's tests scores
	{
		cout << "input "<<name[i]<<"'s mid test score (0-100) "  << " = ";
		cin>>midScore[i];
		
		while(midScore[i]>100 || midScore[i]<0)
		{
			cout << "input "<<name[i]<<"'s mid test score (0-100) "  << " = ";
			cin>>midScore[i];
		}
		
		total3 = total3 + midScore[i] ;
	}
	
	cout<<endl;
	average3 = total3 / students;
	cout<<"average score = "<< average3<<endl<<endl;
	
	if(average3 < minScore) 
	{
		cout<<"The average score is bellow the minimum score (75)"<<endl
			<<"please input students's retest scores"<<endl<<endl;
		
			for (int i=0 ; i<students ; i++) 
			{
				do
				{
					cout << "input "<<name[i]<<"'s retest's score (0-100) = ";
					cin>>retestScore3[i];
				}
				
				while(midScore[i]>100 || midScore[i]<0);
				
				if(retestScore3[i]<midScore[i])
				retestScore3[i]=midScore[i];
				
				else if(retestScore3[i]>midScore[i])
				midScore[i]=retestScore3[i];
				
				retestScore3[i]=midScore[i];
		
			}
		cout<<endl<<endl;	
	}
}

//=============================================================================================//

void Data :: reportScore(int,float finalMidScore[],float mean[],float midScore[],string name[])
//to show all the scores that must be inserted to the report card
{
	cout<<endl;
	cout<<"name\t"<<"Average Score\t"<<"Mid Score\t"<<"Score For Now"<<endl<<endl;

	for (int i=0 ; i<students ; i++) 
	{
		finalMidScore [i]= 0.3*mean[i]+0.7*midScore[i] ; 
		//to calculate final score for the report
	
		
		cout<<name[i]<<"\t"<<mean[i]<<"\t\t"<<midScore[i]<<"\t\t"<<finalMidScore[i]<<endl<<endl;
	}
}

#endif /*finalproject_hpp*/
