#include<iostream>
#include <string>
using namespace std;

//PS : I've made some addition in the docx file

const int minScore=75 ;

void studentsName(int students,string name[])
{
	for (int i=0 ; i<students ; i++) // to know students's names
	{
		cout << "Enter student "<<i+1<<"'s name = " ;
		cin >> name[i] ;
	}
	
	cout<<endl ;
}

/////////////////////////////////////////////////////////////////////////////////

void calcScores(int students,string name[],float score[],float total,float average,float retestScore[],float remedyScore[])
{
		for (int i=0 ; i<students ; i++) // to know student's tests scores
	{
		cout << "input "<<name[i]<<"'s test score "  << " = ";
		cin>>score[i];
		
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
		cout<<endl<<endl;
	}
}
///////////////////////////////////////////////////////////////////////////////////
void testResults(int students,string name[],float score[])
{
	for (int i=0 ; i<students ; i++) 
		{
			cout << name [i] << " : "<<score[i]<<endl;
		
		}
		
	cout<<endl;
}



///////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	int num = 50; 
	float score[num],total = 0,average,remedyScore[num],retestScore[num];
	string name[num];
	int students,tests;
	const int minScore=75 ;
	
	cout << "Enter number of students = ";
	cin >> students ;
	
	cout << "Enter number of tests given = ";
	cin >> tests ;
	cout <<endl;
	
	studentsName(students,name);

	for (int i=0 ; i<tests ; i++)
	{
		cout << "TEST "<< i+1 <<endl <<"--------"<<endl ;
		
		calcScores(students,name,score,total,average,retestScore,remedyScore);
		
		cout << "Final score for test "<< i+1 <<" are : "<<endl;
		
		testResults(students,name,score);
		
	//	for (int i=0 ; i<students ; i++) 
	//	{
	//		cout << name [i] << " : "<< (score[i]+score[i])/tests) <<endl ; 
	//	}
	}
	
	
	return 0;
}
