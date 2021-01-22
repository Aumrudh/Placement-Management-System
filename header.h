#include<iostream>
#include<string>
#include<fstream>
#include<exception>
#include<iomanip>
#include<vector>
using namespace std;
class Student
{
  private:
            float m1,m2,m3,m4,m5,m6;
  public:
          Student();
          void get_Candidates(string,float);
          void admin_createMarkList(string);
          void admin_updateList(string,string,int,float);
          void create_file(string);
          friend class HR;
};
class HR
{
        private:
                   float avg;
                   int backlog;
};
