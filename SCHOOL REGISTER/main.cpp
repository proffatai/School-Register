#include<iostream>
#include<cstdlib>
using namespace std;
struct unilag{  string lastname,firstname,dept;
int age, mat;
};
int k,i;
void REGISTER(unilag* &students, int *p)
{int decision1;
cout<<"HOW MANY STUDENTS DO U WANT TO REGISTER ? PLEASE SPECIFY........"; cin>>*p;
  {students=new unilag[*p];
       cout<<"PLEASE ENTER THE FOLLOWING INFORMATION TO REGISTER "<<endl;
      for(int i=0; i<*p;i++)
    {k=i+1;
    cout<<"enter  #"<<i+1<< " student's lastname"<<endl;
    cin>>students[i].lastname;
    cout<<"enter  #"<<i+1<< " student's firstname"<<endl;
    cin>>students[i].firstname;
    cout<<"enter  #"<<i+1<< " student's age"<<endl;
    cin>>students[i].age;
    cout<<"enter  #"<<i+1<< " student's number"<<endl;
    cin>>students[i].mat;
    cout<<"enter  #"<<i+1<< " student's department"<<endl;
    cin>>students[i].dept;
    system("CLS");
    if (i<(*p-1))
    {cout<<" do u want register another student? \t 1) YES       2)NO"<<endl;
    cin>>decision1;
    if (decision1==2)
        break;}}}}


void SEARCH (unilag *STUDENTS){ int decision2,decision3=1; string name1,name2;
       cout<<"do u want to search for any student?\t 1) YES       2)NO"<<endl;
        cin>>decision2;
        if (decision2==1)
       { while(decision3==1)
         {

         cout<<"enter the name lastname of the student"<<endl;
           cin>>name1;
           cout<<"enter the name firstname of the student"<<endl;
           cin>>name2;
           for (int i=0; i<k; i++)
      {
          if((STUDENTS[i].lastname==name1)&&(STUDENTS[i].firstname==name2))
    {cout<<endl<<"STUDENTS FULL INFORMATION "<<endl<<endl;
    cout<<"FULLNAME->"<<STUDENTS[i].lastname<<" "<<STUDENTS[i].firstname<<" |||AGE->"<<STUDENTS[i].age<<"|||MATRIC NUMBER->"<<STUDENTS[i].mat<<"||| DEPARTMENT "<<STUDENTS[i].dept<<endl;
     break;}
     if(i<(k-1))
        continue;
     else {cout<<name1<<" "<<name2<<" does not exist in this school"<<endl; break;}
     }


  cout<<"do u want to search for any other student?\t 1) YES       2)NO"<<endl;
    cin>>decision3;
    if(decision3==1)
        system("CLS");
    }
}
}

int main ()
{unilag *istudents;
    int decision,decision0,z;
    cout<<"YOU ARE WELCOME TO PIFA'S ACADEMY"<<endl<<endl<<"HOW MAY WE HELP YOU "<<endl<<"1) REGISTER YOUR CHILD \t 2)SEARCH FOR YOUR CHILD"<<endl;
    cin>>decision;
    if (decision==1)
{
REGISTER(istudents,&z);

SEARCH(istudents);
  delete [] istudents;     }

else { do {
cout<<"NO RECORD FOUND ON PIFA'S DATABASE, KINDLY REGISTER YOUR CHILDREN"<<endl<<"press 1 to REGISTER now or 2 to quit"<<endl;
cin>>decision0;
if (decision0==1)
{REGISTER(istudents,&z);
SEARCH(istudents);

  delete [] istudents;}
  else break;
}
while (decision0!=1);
}

cout<<endl<<"THANK YOU FOR YOUR TIME "<<endl;}
