#include<iostream>
#include<string>
using namespace std;
int main(){
	string sentence;
	string Question[10];
	Question[0]="What is your name?";
	Question[1]="How are you?";
	Question[2]="What is your favourite programming language?";
	Question[3]="How is the weather today?";
	Question[4]="Today is my Birthday";
	Question[5]="Tell me a joke";
	Question[6]="What do you want to do?";
	Question[7]="I am feeling tired";
	Question[8]="Can you help me?";
	Question[9]="I am hungry,buy me food";
	
	for(int i=0;i<10;i++){
		cout<<Question[i]<<endl;
	}
	
	string answer[10]={
	"My name is Alex,the talking bot.",
	"I am doing great.Thanks for asking.",
	"I love C++.",
	"It's a wonderful sunny day.",
	"Happy Birthday,have a blast. ",
	"Thanos is inevitable.",
	"I want to steal your heart.",
	"You sholud take some sleep",
	"Sure,it would be a pleasure for me.",
	"I am poorer than you.",
	};
	
	do{
		cout<<"Enter the sentence "<<endl;
		getline(cin,sentence);
		if(sentence.find("How")!=string::npos ||sentence.find("What")!=string::npos || sentence.find("Can")!=string::npos || sentence.find("Can")!=string::npos )
		{
			cout<<"Answer to your question is ===== "<<endl;
		}
		int len=sentence.size();
		if(len>25){
			cout<<"You are asking lengthy question. "<<endl;
		}
		if(sentence==Question[0]){
			cout<<"My name is Alex,the talking bot."<<endl;
		}
		else if(sentence==Question[1]){
			cout<<"I am doing great.Thanks for asking."<<endl;
		}
		else if(sentence==Question[2]){
			cout<<"I love C++."<<endl;
		}
		else if(sentence==Question[3]){
			cout<<"It's a wonderful sunny day."<<endl;
		}
		else if(sentence==Question[4]){
			cout<<"Happy Birthday,have a blast. "<<endl;
		}
		else if(sentence==Question[5]){
			cout<<"Thanos is inevitable."<<endl;
		}
		else if(sentence==Question[6]){
			cout<<"I want to steal your heart."<<endl;
		}
		else if(sentence==Question[7]){
			cout<<"You sholud take some sleep"<<endl;
		}
		else if(sentence==Question[8]){
			cout<<"Sure,it would be a pleasure for me."<<endl;
		}
		else if(sentence==Question[9]){
			cout<<"I am poorer than you."<<endl;
		}
		else{
			cout<<"invalid data"<<endl;
		}
		cout<<"*****************"<<endl;
		cout<<"Enter exit to close your program"<<endl;
		cout<<"*******************"<<endl;
		
		}
		while(sentence!="exit");
	return 0;
}
