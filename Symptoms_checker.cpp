#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <vector>
using namespace std;
/* 
Description: Symptoms Checker
 at the top gobal vars
 class create makes random illnesses
 class checker prints the random illnesses
 class table show the the differnt types
*/
char sym[3]={'*','+','-'};
char covid[7]={'*','*','*','+','+','-','+'};
char cold[7]={'+','+','-','*','+','*','+'};
char flu[7]={'*','*','-','+','*','-','*'};
//int other;
//char* cov = &covid[];
//char* col = &cold[7];
//char* flu2= &flu[7];
char plus1[1] = {'+'};
int other;
int cov;
int col;
int flu2;
char result[7];
char value[1];
char n_value[7];
 int person = 0;
 int i=0;
 int app = 0;
 int p;
 int w=0;
class create{
 int t = 0;
 int index;
 public:
 char get_value(){
 
 do{
srand((unsigned int)time(NULL));
 index = rand()% 3+1; // pick a random index
 //n_value = 
 sym[index]; // a random value taken from that list
 
 // return n_value;
 return sym[index];
 }while(p>0);
 
 }
};
class table{
 public:
 int table1(){
 cout << "Guide: * Common + Sometimes/Rarely - NO\n";
 cout << "=========================================================================\n";
 cout << "Symptoms \t\t| COVID-19\t|\t Cold \t|\t Flu \t|\n";
 cout << "=========================================================================\n";
 cout << "Fever \t\t\t| \t* \t|\t + \t|\t * \t|\n";
 cout << "Cough \t\t\t| \t* \t|\t + \t|\t * \t|\n";
 cout << "Shortness of Breath \t| \t*\t|\t - \t| \t- \t|\n";
 cout << "Runny Nose \t\t| \t+ \t| \t* \t| \t+ \t|\n";
 cout << "Headaches \t\t| \t+ \t| \t+ \t| \t* \t|\n";
 cout << "Sneezing \t\t| \t- \t| \t* \t| \t- \t|\n";
 cout << "Fatigue \t\t| \t+ \t| \t+ \t| \t* \t|\n";
 }
};
class checker{
 public:
 int looks(){
 int sum;
 
 do{
 sum = other+cov+col+flu2;
 if(sum==p){
 break;
 }
 
 other=rand()% p+1;
 cov= rand()% p+1;
 col= rand()% p+1;
 flu2= rand()% p+1;
 
 }while(sum != p);
 char covid1[7]={'*','*','*','+','+','-','+'};
 char cold1[7]={'+','+','-','*','+','*','+'};
 char flu1[7]={'*','*','-','+','*','-','*'};
 if(sum == p){
 cout<< "================================================================\n";
 cout<< cov<<" patients have symptoms of COVID-19\n";
 cout<< col<<" patients have symptoms of COld\n";
 cout<< flu2<<" patients have symptoms of flu\n";
 cout<< other<<" patients have symptoms of other illness\n";
 cout<< "================================================================\n";
 
 cout<<"Covid-19: ["<<cov<<"%]";
 
 for (int j = 0; j <= cov; ++j) 
 {
 cout <<"+";
 }
 
 
 cout <<" \n";
 cout<<"Cold: ["<<col<<"%]";
 
 for (int j = 0; j <= col; ++j) 
 {
 cout << "+";
 }
 
 
 cout <<" \n";
 
 cout<<"flu: ["<<flu2<<"%]";
 
 for (int j = 0; j <= flu2; ++j) 
 {
 cout <<"+";
 }
 
 
 cout <<" \n";
 cout<<"Other: ["<<other<<"%]";
 
 for (int j = 0; j <= other; ++j) 
 {
 cout << "+";
 }
 
 
 cout <<" \n";
 
 }
 }
 
};
class check{
 public:
 int list(){
 do{
 vector<int> input[w];
 create account;
 
 // cout<<"account"<<p;
 while(p==0){
 cout<<"ending"<<p;
 break;
 }
 while(person <= 7){
 person++;
 account.get_value();
 // cout<<"account "<<p<<" "<<account.get_value()<<"\n";
 input[w].push_back(account.get_value());
 w++;
 account.get_value();
 if(person == 7){
 cout<<"changing";
 p--;
 w++;
 break;
 }
 //i++;
 } 
 }while(p!=0);
 checker pat;
 pat.looks();
 }
 
 };
int main(){
 table one;
 check all;
 one.table1();
 create account;
 cout<<"\nEnter Number of patients: ";
 cin>>p;
// all.list();
 checker pat;
 pat.looks(); 
 }
