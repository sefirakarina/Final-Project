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
	
	void calcScores(int,string name[],float score[],float total,float average,float retestScore[],float remedyScore[]);
	void calcScores2(int,string name[],float score2[],float total2,float average2,float retestScore2[],float remedyScore2[]);
	void countAv(float score[],float score2[],float mean[],string name[]);
	void midTerm(int,string name[],float score3[],float total3,float average3,float retestScore3[],float midScore[]);
	void reportScore(int,float finalMidScore[],float mean[],float midScore[],string name[]);
};

Data::Data()
{
	students=students ;
		
}

///////////////////////////////////////////////////////////////////////////////////

void  Data::setStudents(int humans)
{
	students=humans ;
}

/////////////////////////////////////////////////////////////////////////////////

void Data::setName(string)
{
	string namee[20];
		
	for (int i=0 ; i<students ; i++)
	{
		name[i]=namee[i];
	}
}

/////////////////////////////////////////////////////////////////////////////////

int Data::getStudents()
{
	return students ;
}

//////////////////////////////////////////////////////////////////////////////////

string Data::getName()
{
	return name[20];
}

////////////////////////////////////////////////////////////////////////////////////

void Data::calcScores(int,string name[],float score[],float total,float average,float retestScore[],float remedyScore[])
{
	const int minScore=75;
	
		for (int i=0 ; i<students ; i++) // to know student's tests scores
	{
		cout << "input "<<name[i]<<"'s test score "  << " = ";
		cin>>score[i];
		
		while(score[i]>100 || score[i]<0)
		{
			cout << "input "<<name[i]<<"'s test score (0-100) "  << " = ";
			cin>>score[i];
		}
		
		total = total + score[i] ;
	}
	
	average = total / students;
	cout<<"average score = "<< average<<endl<<endl;
	
	if(average < minScore) 
	{
		cout<<"The average score is bellow the minimum score (75)"<<endl<<"please input students's retest scores"<<endl<<endl;
		
			for (int i=0 ; i<students ; i++) 
			{
				cout << "input "<<name[i]<<"'s retest's score = ";
				cin>>retestScore[i];
				
				while(retestScore[i]>100 || retestScore[i]<0)
				{
					cout << "input "<<name[i]<<"'s retest's score (0-100) = ";
					cin>>retestScore[i];
				}
				
				if(retestScore[i]<score[i])
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
				cout << "Please input " << name[i] << "'s remedy score =";
				cin >>remedyScore[i];
				
				while(remedyScore[i]>100 || remedyScore[i]<0)
				{
					cout << "Please input " << name[i] << "'s remedy score (0-100) =";
					cin >>remedyScore[i];
				}

				if(remedyScore[i]<score[i])
				remedyScore[i]=score[i];
				
				else if(remedyScore[i]>score[i])
				{
					if(remedyScore[i]<minScore)
					score[i]=remedyScore[i];
					
					else if (remedyScore[i]>minScore)
					remedyScore[i] = minScore ;	
					score[i]=remedyScore[i];
				}
				
				remedyScore[i]=score[i];
				
			}
		
		}
		cout<<endl;
	}
	
	cout<<"final score for this test : "<<endl;
	
	for (int i=0 ; i<students ; i++) 
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
	cout<<"average score = "<< average2<<endl<<endl;
	
	if(average2 < minScore) 
	{
		cout<<"The average score is bellow the minimum score (75)"<<endl<<"please input students's retest scores"<<endl<<endl;
		
			for (int i=0 ; i<students ; i++) 
			{
				cout << "input "<<name[i]<<"'s retest's score = ";
				cin>>retestScore2[i];
				
				while(retestScore2[i]>100 || retestScore2[i]<0)
				{
					cout << "input "<<name[i]<<"'s retest's score (0-100) = ";
					cin>>retestScore2[i];
				}
				
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
				cout << "Please input " << name[i] << "'s remedy score =";
				cin >>remedyScore2[i];
				
				while(remedyScore2[i]>100 || remedyScore2[i]<0)
				{
					cout << "Please input " << name[i] << "'s remedy score (0-100) =";
					cin >>remedyScore2[i];
				}

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
		
			cout<<name[i] <<"'s average test score = " << mean[i]<<endl;
		}
		cout<<endl<<endl;

	}

//==================================================================================================================//
	
void Data::midTerm(int,string name[],float score3[],float total3,float average3,float retestScore3[],float midScore[])
{
	const int minScore=75;
	
	for (int i=0 ; i<students ; i++) // to know student's tests scores
	{
		cout << "input "<<name[i]<<"'s mid test score "  << " = ";
		cin>>midScore[i];
		
		while(midScore[i]>100 || midScore[i]<0)
		{
			cout << "input "<<name[i]<<"'s test score (0-100) "  << " = ";
			cin>>midScore[i];
		}
		
		total3 = total3 + midScore[i] ;
	}
	
	average3 = total3 / students;
	cout<<"average score = "<< average3<<endl<<endl;
	
	if(average3 < minScore) 
	{
		cout<<"The average score is bellow the minimum score (75)"<<endl<<"please input students's retest scores"<<endl<<endl;
		
			for (int i=0 ; i<students ; i++) 
			{
				cout << "input "<<name[i]<<"'s retest's score = ";
				cin>>retestScore3[i];
				
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
{
	for (int i=0 ; i<students ; i++) 
	{
		finalMidScore [i]= 0.3*mean[i]+0.7*midScore[i] ; 
	
		cout<<"name\t"<<"Average Score\t"<<"Mid Score\t"<<"Score For Now"<<endl<<endl;
		cout<<name[i]<<"\t"<<mean[i]<<"\t"<<midScore[i]<<finalMidScore[i]<<endl;
	}
}

#endif /*finalproject_hpp*/
