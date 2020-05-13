#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <ctime>
using namespace std;

 class Date{
private: int day;
int month;
int year;
public: Date(int dayy,int monthh,int yearr){
day=dayy;
month=monthh;
year=yearr;
}
public: Date(){
    day=1;
    month=3;
    year=2000;
    }
    friend bool operator<(const Date &d, const Date &d1);
bool operator<(const Date& d) {
   return this->year<d.year&&this->month<d.month&&this->day<d.day;
}
public:int getDay(){
return day;
}
int getMonth(){
return month;
}
int getYear(){
return year;
}
};

class Account{
private: string surname;
string name;
int accountnumber;
public: Date opening;
double amount;
int count;
Account(string suname,string nme,int number,Date open,double amoun){
surname=suname;
name=nme;
accountnumber=number;
opening=open;
amount=amoun;
count++;
}
Account& operator= (const Account& acc) {
surname=acc.surname;
name=acc.name;
accountnumber=acc.accountnumber;
amount=acc.amount;
count=acc.count;
return *this;
}
friend ostream& operator<<(ostream& os, const Account& acc) {
return os << "Surname=" << acc.surname<<'\t'<<"Name=" << acc.name<<'\t'<<"Accountnumber=" << acc.accountnumber<<'\t'<<"amount=" <<acc.amount<< '\t' << "count=" << acc.count;

}
friend istream& operator>>(istream& is, Account& acc) {
acc.count++;
return is >> acc.surname >> acc.name >> acc.accountnumber>>acc.amount;

}
Account(){
surname="Akuli4";
name="Kostyan";
accountnumber=322;
opening=Date(3,3,2001);
amount=50.00;
count--;
}
Account(Account& copy){
surname=copy.surname;
name=copy.name;
accountnumber=copy.accountnumber;
opening=copy.opening;
amount=copy.amount;
count++;
}
~Account(){
    count--;
}
string getsurname(){
return surname;
}
string getname(){
return name;
}
void setDate(Date open){
if(open.getDay()>31||open.getMonth()>12||open.getYear()>2020){
    cout<<"Wrong Date!Enter again date";
}
opening=open;
}
void setSurname(string surr){
surname=surr;
}
int getAccountnumber(){
return accountnumber;
}
};
class Bank{
private: Account* bankBase=new Account[100];
public: int top=0;
Bank(Account bank){
bankBase[top]=bank;
top++;
}
Bank(){
    Account account("Petrov","Petya",64,Date(5,3,2018),150.00);
bankBase[top]=account;
top++;
}
~Bank(){

}
void add_to_group(Account qwe){
    bankBase[top]=qwe;
    top++;
}
void Show_bankBase(){
for(int i=0;i<top;i++){
    cout<<bankBase[i].getsurname()<<'\t'<<bankBase[i].getname()<<'\t'<<bankBase[i].getAccountnumber()<<endl;
}}
void Search_by_Surname(string surr){
for(int i=0;i<top;i++){
    if(bankBase[i].getsurname()==surr) cout<<bankBase[i].getsurname()<<'\t'<<bankBase[i].getname()<<'\t'<<bankBase[i].getAccountnumber()<<endl;
}
}
void Search_by_cash(double cash){
for(int i=0;i<top;i++){
    if(bankBase[i].amount>cash) cout<<bankBase[i].getsurname()<<'\t'<<bankBase[i].getname()<<'\t'<<bankBase[i].amount<<endl;
}
}
void sort_by_surname(){
for(int i=0;i<top-1;i++){
        for(int j=0;j<top-i-1;j++){
    if(strcmp(bankBase[i].getsurname().c_str(),bankBase[i+1].getsurname().c_str())<0){
        Account tmp=bankBase[j];
        bankBase[j]=bankBase[j+1];
        bankBase[j+1]=tmp;
    }
    }
}
}
void search_by_date(){
    for(int i=0;i<top;i++){
if(2020-bankBase[i].opening.getYear()>=5) cout<<bankBase[i].getsurname()<<'\t'<<bankBase[i].getname()<<'\t'<<bankBase[i].opening.getYear()<<endl;
    }
}


};

int main()
{
setlocale(LC_ALL, "Russian");
Date date1;
Account acc;
Account A("Gurov","Pavel",56,Date(14,5,2017),60.00);
Account Q("Petrov","Bvan",32,Date(5,11,2019),67.00);
Account ac1;
cout<<acc<<endl;
cin>>ac1;
cout<<ac1<<endl;
acc=A;
cout<<acc<<endl;
cout<<"====="<<endl;
cout<<"date1\nYear:"<<date1.getYear()<<" month:"<<date1.getMonth()<<" day:"<<date1.getDay()<<'\n';
Date d1(3,3,2018);
cout<<"d1\nYear:"<<d1.getYear()<<" month:"<<d1.getMonth()<<" day:"<<d1.getDay()<<'\n';
bool t=date1<d1;
if(t==1) cout<<"date1 less than d1";
else cout<<"date1 not less than d1";
}
