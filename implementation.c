#include"header.h"
using namespace std;
Student::Student()
{
  float m1,m2,m3,m4,m5,m6=0.0;
}
void Student::get_Candidates(string batch,float input_avg)
{
        fstream fin;
        float avg;
        string file=batch;
        fin.open(file,ios::in);
        if(!fin)
        {
           cout<<"File Not Present,Contact Admin" <<endl ;
           exit(1);
        }
        else
        {
          cout<<"Checking .... ";
        }
        int count=0;
        vector<string> row;
        vector<string> name;
        string line, word, temp;
        while (!fin.eof())
        {
          row.clear();
          getline(fin, line);
          stringstream s(line);
          while (getline(s, word, ','))
          {
              row.push_back(word);
          }
          float 
avg=(stof(row[1])+stof(row[2])+stof(row[3])+stof(row[4])+stof(row[5])+stof(row
[6]))/6;
          if(avg>input_avg)
          {
            count=count+1;
            name.push_back(row[0]);
          }
        }
       if(count>0)
           {
       cout<<"Eligible Candidates " << endl ;
       for(int i=0;i<count-1;i++)
       {
         cout<<name[i]  << "\n" ;
       }
        }
        else
        {
         cout<<"No elligible candidate\n";
        }
};

bool fexists(const std::string& filename) {
  std::ifstream ifile(filename.c_str());
  return (bool)ifile;
}
void Student::create_file(string filename)
{
   fstream newfile;
   newfile.open(filename, ios::out | ios::app);
   cout<<"Enter the Number Of Students :";
   int number_of_students;
   float sem1,sem2,sem3,sem4,sem5,sem6;
   int backlog;
   string student_name;
   cin>>number_of_students;
   for (int loops=1;loops<=number_of_students;loops++)
   {
      cout<<"Enter Student Name" << "[" << loops << "] : " ;
      cin>>student_name;
      cout<<"Enter Semester Mark 1 "<< "[" << loops << "] : " ;
      cin>>sem1;
      cout<<"Enter Semester Mark 2 "<< "[" << loops << "] : " ;
      cin>>sem2;
      cout<<"Enter Semester Mark 3 "<< "[" << loops << "] : " ;
      cin>>sem3;
      cout<<"Enter Semester Mark 4 "<< "[" << loops << "] : " ;
      cin>>sem4;
      cout<<"Enter Semester Mark 5 "<< "[" << loops << "] : " ;
      cin>>sem5;
      cout<<"Enter Semester Mark 6 "<< "[" << loops << "] : " ;
      cin>>sem6;
       cout<<"Enter Holding Arreas  "<< "[" << loops << "] : " ;
      cin>>backlog;
      newfile << student_name << ","
              << sem1 << ","
              << sem2 << ","
              << sem3 << ","
              << sem4 << ","
              << sem5 << ","
              << sem6 << ","
              << backlog<< "\n" ;
   }
   cout<<"New File Created - ," << filename ;
}
void Student::admin_createMarkList(string batch)
{
   bool file_check=fexists(batch);
   if(file_check)
   {
     cout<<"File Already Exist" <<endl ;
     exit(1);
   }
   else
     create_file(batch);
}
