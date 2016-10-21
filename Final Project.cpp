#include<iostream>
#include <string>
using namespace std;


int main (){
	
	int num = 50; // max input
	float score[num],total = 0,average,remedyScore[num],retestScore[num];
	string name[num];
	int students,tests ;
	const int minScore=75 ;
	
	
	cout << "Enter number of students = ";
	cin >> students ;
	
	cout << "Enter number of tests given = ";
	cin >> tests ;
	cout <<endl;
	
	
for (int i=0 ; i<students ; i++) // to know students's names
{
	cout << "Enter student "<<i+1<<"'s name = " ;
	cin >> name[i] ;
}
	
	cout<<endl ;
	
//===============================================================//

for (int i=0 ; i<tests ; i++)
{	
	cout << "TEST "<< i+1 <<endl <<"--------"<<endl ;


	for (int i=0 ; i<students ; i++) // to know student's tests scores
	{
		cout << "input "<<name[i]<<"'s test score "  << " = ";
		cin>>score[i];
		
		total = total + score[i] ;
	}

//=================================================================================//
	
	cout<<endl<<"---------------------------------------------------"<<endl;
	
	average = total / students;

//================================================================================//
	
	if(average < minScore) 
	{
		cout<<"The average score is bellow the minimum score (75)"<<endl<<"please input students's retest scores"<<endl<<endl;
		
			for (int i=0 ; i<students ; i++) 
			{
				cout << "input "<<name[i]<<"'s retest's score = ";
				cin>>retestScore[i];
				
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
				
				if (remedyScore[i]>minScore)
				remedyScore[i] = minScore ;
				
				else if(remedyScore[i]<score[i])
				remedyScore[i]=score[i];
				
				else if(remedyScore[i]>score[i])
				score[i]=remedyScore[i];
				
				remedyScore[i]=score[i];
			}
		
		}
		cout<<endl<<endl;
	}
	
	
	cout << "Final score for test "<< i+1 <<" are : "<<endl;
	
	for (int i=0 ; i<students ; i++) 
		{
			cout << name [i] << " : "<<score[i]<<endl;
		
		}
		
	cout<<endl;
}
	
	
	return 0;
}
