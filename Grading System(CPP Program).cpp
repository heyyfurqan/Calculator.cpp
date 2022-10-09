`````````````	#include<iostream>
using namespace std;
int main()
{
	string id;
	string password;
	string idverificed="Administrators";
	string passwordverified="PF2020";
	cout<<"*********************************************************************"<<endl;
	cout<<"                    University Grading System"<<endl;
	cout<<"*********************************************************************"<<endl;
	cout<<"            Please Enter The Administration Credential!"<<endl;
	cout<<"*********************************************************************"<<endl;
	cout<<"Username    :";
	cin>>id;
	cout<<"Password    :";
	cin>>password;
	if(id=="Administrators"&&password=="PF2020")
	{
	
int input;
string student1;
string student2;
string student3;
string student4="Ahsan";
string student5="NV";
int marks1=86,marks2=82,marks3=90,marks4=78,marks5=-1;
int var;
int counter=0;
string studentname;
int studentmarks;
do
{
	cout<<""<<endl;
	cout<<""<<endl;
    cout<<"choose the option from the menu:"<<endl;
	cout<<"Enter 1 to add a student"<<endl;
	cout<<"Enter 2 to search a student"<<endl;
	cout<<"Enter 3 to delete a student"<<endl;
	cout<<"Enter 4 to update data of a student"<<endl;
	cout<<"Enter 5 to display number of students in the system"<<endl;
	cout<<"Enter 6 to display list of all students witout grade"<<endl;
	cout<<"Enter 7 to display list of student with grade"<<endl;
	cout<<"Enter 0 to close program"<<endl;
	cout<<"Enter number :";
	cin>>input;
	/*if(input==1)
	{
		cout<<"Add a student"<<endl;
	}
	else if(input==2)
	{
		cout<<"Search a student"<<endl;
	}
	else if(input==3)
	{
		cout<<"Delete a student"<<endl;
	}
	else if(input==4)
	{
		cout<<"Update data of a student"<<endl;
	}
	else if(input==5)
	{
		cout<<"Number of student"<<endl;
	}
	else if(input==6)
	{
		cout<<"List of student witout grade"<<endl;
	}
	else if(input==7)
	{
		cout<<"List of student with grade"<<endl;
	}
	else if(input==0)
	{
		cout<<"Close programe"<<endl;
	}
	else
	{
		cout<<"Invalid Number"<<endl;
	}*/
	switch(input)
{
    case 1:
   	cout<<"                       Add a student"<<endl;
   	cout<<"Enter Student Name  :";
	cin>>studentname;
	cout<<"Enter student Marks :";
	cin>>studentmarks;
    if(student1=="NV")
	{
	student1=studentname;
	marks1=studentmarks;
	cout<<"Student Added Successfully!"<<endl;	
	}
	else if(student2=="NV")
	{
	student2=studentname;
	marks2=studentmarks;
	cout<<"Student Added Successfully!"<<endl;	
	}
	else if(student3=="NV")
	{
	student3=studentname;
	marks3=studentmarks;
	cout<<"Student Added Successfully!"<<endl;	
	}
	else if(student4=="NV")
	{
	student4=studentname;
	marks4=studentmarks;
	cout<<"Student Added Successfully!"<<endl;	
	}
	else if(student5=="NV")
	{
	student5=studentname;
	marks5=studentmarks;
	cout<<"Student Added Successfully!"<<endl;	
	}	
	break;
	case 2:
	cout<<"                    Search Student"<<endl;
	cout<<"Enter Student Name    :";
	cin>>studentname;
	cout<<""<<endl;
	if(studentname==student1)
	{
	cout<<"Student Name          :"<<student1<<endl;
	cout<<"Marks                 :"<<marks1<<endl;
	cout<<"Grade                 :"<<"A"<<endl;
	}
	else if(studentname==student2)
	{
	cout<<"Student Name          :"<<student2<<endl;
	cout<<"Marks                 :"<<marks2<<endl;
	cout<<"Grade                 :"<<"A"<<endl;
    }
   	else if(studentname==student3)
	{
	cout<<"Student Name          :"<<student3<<endl;
	cout<<"Marks                 :"<<marks3<<endl;
	cout<<"Grade                 :"<<"A"<<endl;
    }
   	else if(studentname==student4)
	{
	cout<<"Student Name          :"<<student4<<endl;
	cout<<"Marks                 :"<<marks4<<endl;
	cout<<"Grade                 :"<<"B"<<endl;
    }
   	else if(studentname==student5)
	{
	cout<<"Student Name          :"<<student5<<endl;
	cout<<"Marks                 :"<<marks5<<endl;
	cout<<"Grade                 :"<<"Nil"<<endl;
    }
    else
    {
    	cout<<"Student Cannot be Found"<<endl;
	}
	break;
	case 3:
	cout<<"                              Delete Student Record"<<endl;
	cout<<"Enter Student Name  :";
	cin>>studentname;
	if(studentname==student1)
	{
	student1="NV";
	marks1=-1;
	cout<<"Student Record Deleted Successfully!"<<endl;
	}
	else if(studentname==student2)
	{
	student2="NV";
	marks2=-1;
	cout<<"Student Record Deleted Successfully!"<<endl;	
	}
	else if(studentname==student3)
	{
	student3="NV";
	marks3=-1;	
	cout<<"Student Record Deleted Successfully!"<<endl;
	}
	else if(studentname==student4)
	{
	student4="NV";
	marks4=-1;	
	cout<<"Student Record Deleted Successfully!"<<endl;
	}
	else if(studentname==student5)
	{
	student5="NV";
	marks5=-1;	
	cout<<"Student Record Deleted Successfully!"<<endl;
	}
	else
	{
		cout<<"Student Record Not Found!"<<endl;
	}
	break;
	case 4:
	cout<<"                  Update Student Record"<<endl;	
	cout<<"Enter Student Name   :";
	cin>>studentname;
	if(studentname==student1)
	{
	cout<<"Student Name         :"<<student1<<endl;
	cout<<"Students Marks       :"<<marks1<<endl;
	cout<<"Enter Student Marks  :";
	cin>>studentmarks;
	studentmarks=marks1;
	cout<<"Student Record Updated SUCCESSFULLY!"<<endl;	
	}
	else if(studentname==student2)
	{
	cout<<"Student Name         :"<<student2<<endl;
	cout<<"Students Marks       :"<<marks2<<endl;
	cout<<"Enter Student Marks  :";
	cin>>studentmarks;
	studentmarks=marks2;
	cout<<"Student Record Updated SUCCESSFULLY!"<<endl;	
	}
	else if(studentname==student3)
	{
	cout<<"Student Name         :"<<student3<<endl;
	cout<<"Students Marks       :"<<marks3<<endl;
	cout<<"Enter Student Marks  :";
	cin>>studentmarks;
	studentmarks=marks3;
	cout<<"Student Record Updated SUCCESSFULLY!"<<endl;	
	}
	else if(studentname==student4)
	{
	cout<<"Student Name         :"<<student4<<endl;
	cout<<"Students Marks       :"<<marks4<<endl;
	cout<<"Enter Student Marks  :";
	cin>>studentmarks;
	studentmarks=marks4;
	cout<<"Student Record Updated SUCCESSFULLY!"<<endl;	
	}
	else if(studentname==student3)
	{
	cout<<"Student Name         :"<<student5<<endl;
	cout<<"Students Marks       :"<<marks5<<endl;
	cout<<"Enter Student Marks  :";
	cin>>studentmarks;
	studentmarks=marks5;
	cout<<"Student Record Updated SUCCESSFULLY!"<<endl;	
	}
	else
	{
	cout<<"Student Not Found"<<endl;
	}
	break;
	case 5:
		if(student1!="NV")
		{
		counter=counter+1;	
		}
		if(student2!="NV")
		{
		counter=counter+1;	
		}
		if(student3!="NV")
		{
		counter=counter+1;	
		}
		if(student4!="NV")
		{
		counter=counter+1;	
		}
		if(student5!="NV")
		{
		counter=counter+1;	
		}	
	cout<<"Number of student     :"<<counter<<endl;
	break;
	case 6:
	cout<<"                    Display student Record witout grade"<<endl;	
	cout<<"*********************************************************************"<<endl;
	cout<<"Student Nmae                     Marks"<<endl;
	cout<<"*********************************************************************"<<endl;
	if(student1!="NV")
	{
	cout<<student1<<"                      "<<marks1<<endl;
	}
	if(student2!="NV")
	{
	cout<<student2<<"                            "<<marks2<<endl;
	}
	if(student3!="NV")
	{
	cout<<student3<<"                              "<<marks3<<endl;
	}
	if(student4!="NV")
	{ 
	cout<<student4<<"                             "<<marks4<<endl;
	}
	if(student5!="NV")
	{
	cout<<student5<<"                         "<<marks5<<endl;
	}
	cout<<"*********************************************************************"<<endl;
	break;
	case 7:
	cout<<"                    Student Record With Grade"<<endl;
	cout<<"*********************************************************************"<<endl;
	cout<<"Student Nmae                     Marks               Grade"<<endl;
	cout<<"*********************************************************************"<<endl;
		if(student1!="NV")
	{
	if(marks1>=85&&marks1<=100)
	{
	cout<<student1<<"                      "<<marks1<<"                  A"<<endl;
	}
	else if(marks1>=70&&marks1<85)
	{
    cout<<student1<<"                      "<<marks1<<"                  B"<<endl;
	}
	else if(marks1>=55&&marks1<70)
	{
	cout<<student1<<"                      "<<marks1<<"                  C"<<endl;
	}
	else if (marks1>=40&&marks1<55)
	{
	cout<<student1<<"                      "<<marks1<<"                  D"<<endl;
	}
	}
	if(student2!="NV")
	{
	if(marks2>=85&&marks2<=100)
	{
	cout<<student2<<"                            "<<marks2<<"                  A"<<endl;
	}
	else if(marks2>=70&&marks2<85)
	{
	cout<<student2<<"                            "<<marks2<<"                  B"<<endl;
	}
	else if(marks2>=55&&marks2<70)
	{
	cout<<student2<<"                            "<<marks2<<"                  C"<<endl;
	}
	else if(marks2>=40&&marks2<55)
	{
	cout<<student2<<"                            "<<marks2<<"                  D"<<endl;
	}
	}
	if(student3!="NV")
	{
	if(marks3>=85&&marks3<=100)
	{
	cout<<student3<<"                              "<<marks3<<"                  A"<<endl;
	}
	else if(marks3>=70&&marks3<85)
	{
	cout<<student3<<"                              "<<marks3<<"                  B"<<endl;
	}
	else if(marks3>=55&&marks3<70)
	{
	cout<<student3<<"                              "<<marks3<<"                  C"<<endl;
	}
	else if(marks3>=40&&marks3<55)
	{
	cout<<student3<<"                              "<<marks3<<"                  D"<<endl;
	}
	}
	if(student4!="NV")
	{ 
	if(marks4>=85&&marks4<=100)
	{
	cout<<student4<<"                             "<<marks4<<"                 A"<<endl;
	}
	else if(marks4>=70&&marks4<85)
	{
    cout<<student4<<"                             "<<marks4<<"                  B"<<endl;
	}
	else if(marks4>=55&&marks4<70)
	{
	cout<<student4<<"                             "<<marks4<<"                  C"<<endl;
	}
	else if(marks4>=40&&marks4<55)
	{
	cout<<student4<<"                             "<<marks4<<"                  D"<<endl;
	}
	}
	if(student5!="NV")
	{
	if(marks5>=85&&marks5<=100)
	{
	cout<<student5<<"                         "<<marks5<<"               A"<<endl;
	}
	else if(marks5>=70&&marks5<85)
	{
	cout<<student5<<"                         "<<marks5<<"               B"<<endl;
	}
	else if(marks5>=55&&marks5<70)
	{
	cout<<student5<<"                         "<<marks5<<"               C"<<endl;
	}
	else if(marks5>=40&&marks5<55)
	{
	cout<<student5<<"                         "<<marks5<<"               D"<<endl;
	}
	}
	cout<<"*********************************************************************"<<endl;
	break;
	case 0:
	cout<<""<<endl;
	cout<<"         Thank You"<<endl;
	cout<<"  Program Close successfully!"<<endl;
	break;
	default:
	cout<<"Invalid Number"<<endl; 
}
}
while(input!=0);}
else
{
	cout<<"                          Credentials Are Invalid!!!"<<endl;
}
return 0;
}

