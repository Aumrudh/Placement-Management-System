#include"header.h"
using namespace std;
//Driver Program
main()
{
 cout<<"*************************************************************************************************\n";
   cout<<"                      MEPCO PLACEMENT SYSTEM FOR HR                                              \n";
   cout<<"*************************************************************************************************\n";
   cout<<"Enter User Type "<<endl;
   cout<<"Option 1. ADMIN"<<endl;
   cout<<"Option 2. HR" <<endl;
   cout<<"Option : ";
   int in_type;
   string batch_year,company_name;
   float average,new_mark;
   Student S;
   cin>>in_type;
   switch(in_type)
   {
       case 1:
               cout<<"You have Choosen ADMIN" <<endl ;
               cout<<"Enter File Name as batch_name - e.g.2019 : ";
               cin>>batch_year;
               S.admin_createMarkList(batch_year);
               break;
       case 2:
               cout<<"Welcome" << endl;
               cout<<"Please Enter Your Company Name :" << endl;
               cin>>company_name;
               cout<<"Please Enter Recruitment Batch Number : " << endl;
               cin>>batch_year;
               cout<<"Enter Average marks For the Student : ";
               cin>>average;
               S.get_Candidates(batch_year,average);
               break;

       default :
               cout<<"Undefined Option" << endl ;
               exit (1);
               break;
   }
   cout<<"\nThank you for Using Mepco Placement System" << endl;
}

