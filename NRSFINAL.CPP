#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
class wholeseller
{
	int id;
	char name[40];
	char product[11];
	char phoneno[50];
	int qty;
	float price;
	public:
	void wputdata();
	int whgetid()
	{return id; }
	void wgetdata()
	{
	cout<<"\n\n*************************************************\n";
	cout<<"*****************************************************\n";
	cout<<"**********please enter the wholeseller id************\n\t \t \t ";
	cin>>id;
	cout<<"**********please enter the wholeseller name**********\n\t \t \t ";
	gets(name);
	cout<<"**********please enter the wholeseller phone no******\n\t \t \t ";
	gets(phoneno);
	cout<<"**********please enter the wholeseller product*******\n\t \t \t ";		gets(product);
	cout<<"**********please enter the wholeseller qantity*******\n\t \t \t ";
	cin>>qty;
	cout<<"**********please enter the employee price************\n\t \t \t ";
	cin>>price;
	cout<<"*****************************************************\n";
	cout<<"***************************************************\n";
	}
	}w1;

	void wholeseller::wputdata()
	{
	cout<<"\n\n*************************************************\n";
	cout<<"*****************************************************\n";
	cout<<"\n********** the wholeseller id************\t \t \t ";
	cout<<id;
	cout<<"\n********** the wholeseller name**********\t \t \t ";
	cout<<name;
	cout<<"\n********** the wholeseller phone no******\t \t \t ";
	cout<<phoneno;
	cout<<"\n********** the name of product***********\t \t \t ";
	cout<<product;
	cout<<"\n********** the product qantity***********\t \t \t ";
	cout<<qty;
	cout<<"\n**********the product price**************\t \t \t ";
	cout<<price;
	cout<<"\n*****************************************************\n";
	cout<<"***************************************************\n";
	}
class employee
{
	int empid;    //for employee id ;
	char emppost[40];
	char empphnno[11];  //phone number;
	char empaddress[50];
	char empname[20];
	float empsalary;
	public:
	employee()
	{
	empid=0;
	strcpy(emppost,"null");
	strcpy(empphnno,"null");
	strcpy(empaddress,"null");
	strcpy(empname,"null");
	empsalary=0;
	}
	void eputdata();
	void egetdata();
	int getempid()
	{
	 return empid;
	 }
	}e1;
void employee::egetdata()
	{
		cout<<"\n\n**********************************************\n";
		cout<<"**************************************************\n";
		cout<<"**********please enter the employee id************\n\t \t \t ";
		cin>>empid;
		cout<<"**********please enter the employee name**********\n\t \t \t ";
		gets(empname);
		cout<<"**********please enter the employee post**********\n\t \t \t ";
		gets(emppost);
		cout<<"**********please enter the employee address********\n\t \t \t ";
		gets(empaddress);
		cout<<"**********please enter the employee phone number***\n\t \t \t ";
		gets(empphnno);
		cout<<"**********please enter the employee salary*********\n\t \t \t ";
		cin>>empsalary;
		cout<<"***************************************************\n";
		cout<<"***************************************************\n";

	}
	void employee::eputdata()
	{
		cout<<"\n\n***************************\n";
		cout<<"*******************************\n";
		cout<<"the employee id\t \t\t \t ";
		cout<<empid;
		cout<<"\n the employee name\t \t \t ";
		cout<<empname;
		cout<<"\n the employee post\t \t \t ";
		cout<<emppost;
		cout<<"\n the employee address\t \t \t ";
		cout<<empaddress;
		cout<<"\n the employee phone number\t \t ";
		cout<<empphnno;
		cout<<"\n the employee salary\t \t \t ";
		cout<<empsalary;
		cout<<"\n*******************************\n";
		cout<<"*********************************\n";
	}
class customer
{       public:
	char custphnno[11];  //phone number;
	char custaddress[50];
	char custname[20];
	void custgetdata()
	{
		cout<<"\n\n**********************************************\t";
		cout<<"\n**************************************************\t";
		cout<<"\n**********please enter your good name***********\t ";
		gets(custname);
		cout<<"\n**********please enter your address*************\t ";
		gets(custaddress);
		cout<<"\n**********please enter the phone number**********\t ";
		gets(custphnno);
		cout<<"\n**************************************************\n";
		cout<<"\n**************************************************\n";
	}
	void custputdata()
	{
		cout<<"\n\t name\t\t\t ";
		cout<<custname;
		cout<<"\n\t address\t\t ";
		cout<<custaddress;
		cout<<"\n\t phone number\t\t";
		cout<<custphnno;

}}c1;
void customerdata()
{
textcolor(4);
ifstream fin;
fin.open("customer.dat",ios::in|ios::binary|ios::app);
	 while(!fin.eof())
	 {
	  fin.read((char *)&c1,sizeof(c1));
	  if(fin.eof())
	  break;
	  c1.custputdata();
	  for(int i=0;i<1000;i++){
	  for(int p=0;p<1000;p++){
	  for(int k=0;k<100;k++);
	   }
	   }
	  clrscr();
	  }}
void space(int a);
void welcome();
void wastetime();
void wastetime2();
void wastetime3();
void visit();
void security();
void customer();
void searching();
void smilee();
void getuser();
void loading();
void loading1();
void employeedata();
void customerdata();
void wholesellerdata();
void employee();
void nrs();
void main()
{
clrscr();
welcome();
wastetime2();
nrs();
wastetime2();wastetime2();
getuser();
clrscr();
loading();
wastetime2() ;
smilee();
wastetime2();
visit();
employeedata();
}
void welcome()
{
     textcolor(4);
     cout<<"\n\t\t **          **   *****   *      ****  ****  **   **  *****";
     cout<<"\n\t\t  **   **   **    *       *      *     *  *  * * * *  *    ";
     cout<<"\n\t\t   **  **  **     *****   *      *     *  *  *  *  *  *****  ";
     cout<<"\n\t\t    ** ** **      *       *      *     *  *  *     *  *    ";
     cout<<"\n\t\t      *  *        *****   *****  ****  ****  *     *  *****";
}

void wastetime()

{
	for(int i=0;i<1000;i++ )
	{
	for(int k=0;k<1000;k++)
	{
	for(int c=0;c<10;c++);
	 }
}
}
void wastetime2()
{
	 for(int i=0;i<1000;i++ )
	 {
	 for(int k=0;k<1000;k++)
	 {
	 for(int c=0;c<100;c++);
	 }
	 }
}
void loading()
{       textcolor(9);
	clrscr();
	for(int j=0;j<50;j++)
	{
	clrscr();
	cout<<"\n\n\n\n\n\n\t\tPlease wait while loading.......\n";
	for(int m=0;m<=j;m++)
	{
	cout<<"_";
	}
	cout<<"\n"<<2*(j+1)<<"%";

	for(int abc=0;abc<10000;abc++)
	{
	for(int cde=0;cde<1000;cde++);
	}
	}
}
void loading1()
{       textcolor(10);
	clrscr();
	for(int j=0;j<50;j++)
	{
	clrscr();
	cout<<"\n\n\n\n\n\n\t\tPlease wait.......\n";
	for(int m=0;m<=j;m++)
	{
	cout<<"*";
	}
	cout<<"\n"<<2*(j+1)<<"%";

	for(int abc=0;abc<10000;abc++)
	{
	for(int cde=0;cde<1000;cde++);
	}
	}
}
void wastetime3 ()
{
	for(int abc=0;abc<10000;abc++)
	{
	for(int cde=0;cde<10000;cde++)
	{
	for(int klm=0;klm<10;klm++);
	}
	}
}
void smilee()
	{
	textcolor(15);
	clrscr();
	cout<<"\n     *****************************";
	cout<<"\n           *****************";
	cout<<"\n        **                  ** ";
	cout<<"\n      **                      **";
	cout<<"\n     **     ***         ***    **";
	cout<<"\n    **    *****       *****     **";
	cout<<"\n   **       ***    *    ***     **";
	cout<<"\n   **            *****          **";
	cout<<"\n   **       *            *      **";
	cout<<"\n    **       * ******* *       **";
	cout<<"\n     **       * * * * *       **";
	cout<<"\n      **                     **";
	cout<<"\n        **                  **";
	cout<<"\n          ****************** ";
	cout<<"\n     ****************************";
	}
void nrs()
{       wastetime2();
	clrscr();
	textcolor(13);
	cout<<"* *             * ****** ****** \n";
	cout<<"*   *           *      * *      \n";
	cout<<"*     *         *      * *      \n";
	cout<<"*       *       * ****** ****** \n";
	cout<<"*         *     * *           * \n";
	cout<<"*           *   *   *         * \n";
	cout<<"*             * *     *  ****** \n";
	wastetime2();
	clrscr();
	}
void searching()
{
	 for(int x1=0;x1<17;x1++)
	 {
	 clrscr();
	 textcolor(5);
	 space(x1);
	 cout<<"***************************\n";
	 space(x1);
	 cout<<" ***************************\n";
	 space(x1);
	 cout<<" @@@@@@@ SEARCHING... @@@@@@\n";
	 space(x1);
	 cout<<"***************************\n";
	 space(x1);
	 cout<<" ***************************\n ";
	 wastetime();
	 }
}
void space(int a)
{
	for(int k1=0;k1<a;k1++)
	{
	cout<<" ";
	}
}
void getuser()
{       textcolor(6);
	int choice;
	char user[20];
	cout<<"\n \t \t++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\n \t \t$$$                    HELLO                   $$$";
	cout<<"\n \t \t$$$ i reuest you to please tell your good name $$$";
	cout<<"\n \t \t++++++++++++++++++++++++++++++++++++++++++++++++++\n\t \t";
	gets(user);
	clrscr();
	wastetime2();
	cout<<"\n\n\n\n\n\t\t\t WELCOME TO NRS STORE ";
	cout<<user;
	wastetime2();
	wastetime2();
}
void visit()
{       textcolor(5);

	int choice;
	clrscr();
	cout<<"\n \t \t++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\n \t \t++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\n \t\t for customer services\t\t\tpress1  \n \t\t for administrator server\t\t press2 \n" ;
	cout<<"\n \t \t++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\n \t \t++++++++++++++++++++++++++++++++++++++++++++++++++\n\t\t";
	cin>>choice;
	if(choice==1)
	{
	customer();
	}
	else
	if (choice==2)
	{
	security();
	}
	else
	{
	cout<<"wrong choice";
	wastetime();
	}
}
void customer()
{
int order[50],quan[50],c=0;
float amt,total=0;
struct product
{
char iname[20];
int pno;
float price;
}p[3];
strcpy(p[0].iname,"pens");
p[0].price=1000;
p[0].pno=1;
strcpy(p[1].iname,"bags");
p[1].price=3000;
p[1].pno=2;
strcpy(p[2].iname,"shoes");
p[2].price=2000;
p[2].pno=3;
clrscr();
welcome();
wastetime2();
nrs();
wastetime2();
loading();
smilee();
wastetime2();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\t\t\tsearching for available products";
wastetime2();
clrscr();
searching();
wastetime2();
clrscr();
cout<<"\n p.no \t item \t\t price \t";
for(int i=0;i<3;i++)
{cout<<"\n"<<p[i].pno<<" \t "<<p[i].iname<<"\t\t"<<p[i].price;}
cout<<"\n||================================================||";
cout<<"\n||                place your oder                 ||";
cout<<"\n||================================================||";
char ch='1';
while(ch=='1')
{
 cout<<"\n\t enter the product no.of the product\t";
cin>>order[c];
cout<<"\n please enter quantity in number";
cin>>quan[c];
c++;
cout<<"\ndo you want to oder another product \n press 1 for yes \n press 0 for no";
cin>>ch;  }
cout<<"\nthank you to visit nrs store";
clrscr();
cout<<" please enter your details";
fstream cust;
	cust.open("customer.dat",ios::out|ios::in|ios::binary|ios::app);
c1.custgetdata();
cust.write((char*)&c1,sizeof(c1));
clrscr();
loading();
wastetime();
clrscr();
cout<<"\n \t----------nrs------------";
c1.custputdata();
cout<<"\n p.no \t item \t price \tquantity\t total";
for(int x=0;x<=c;x++)
{
for(int j=0;j<3;j++)
{
if(p[j].pno==order[x])
{amt=p[j].price*quan[x];
cout<<"\n"<<p[j].pno<<" \t "<<p[j].iname<<"\t"<<p[j].price<<"\t"<<quan[j]<<"\t\t"<<amt;
total+=amt;
}}}
cout<<"\n \t\t total \t"<<total;
}
void security()
{
	char aid[5],apss[5];
	cout<<":::::::::::please enter your administrator id:::::::::::";
	gets(aid);
	cout<<":::::::::::::   please enter password     ::::::::::::::";
	gets(apss);
	if(strcmp(aid,"NRS")==0 &&strcmp(apss,"NRS")==0)
	{
	int choice3;
	cout<<"**********************WELCOME***********************";
	wastetime();
	clrscr();
	smilee();
	clrscr();
	cout<<"\n ############ WHAT DO YOU WANT TO CHECK #############";
	cout<<"\n @@@@@@@@@@@@ ENTER 1 FOR EMPLOYEE DATA @@@@@@@@@@@@@@";
	cout<<"\n @@@@@@@@@@@@ ENTER 2 FOR WHOLESALER DATA@@@@@@@@@@@@@";
	cout<<"\n @@@@@@@@@@@@ ENTER 3 FOR CUSTOMER DATA @@@@@@@@@@@@@@\n";
	cin>>choice3;
	loading1();
	switch(choice3)
	{
	 case 1: employeedata();
		 break;
	 case 2: wholesellerdata();
		 break;
	 case 3: customerdata();
		 break;
	}
	}
	else
	{
	cout<<"WRONG PASSWORD OR USERNAME";
	wastetime();
	visit();
	}
	}
	void employeedata()
	{
	clrscr();
	int t1=0,t2,t3,t4,t5,t6,t7,t8,t9,t10,pos,temp;
	char user[30];
	fstream emp("employee.dat",ios::in|ios::binary|ios::app|ios::out);
	while(t1!=6)
 {
 clrscr();
 cout<<"\n***************************";
 cout<<"\n    enter ur choice :      ";
 cout<<"\n***************************";
 cout<<"\n!!   1.enter data        !!";
 cout<<"\n+++++++++++++++++++++++++++";
 cout<<"\n!!   2.search data       !!";
 cout<<"\n+++++++++++++++++++++++++++";
 cout<<"\n!!   3.delete data       !!";
 cout<<"\n+++++++++++++++++++++++++++";
 cout<<"\n!!   4.view all records  !!";
 cout<<"\n+++++++++++++++++++++++++++";
 cout<<"\n!!   5.exit              !!";
 cout<<"\n***************************\n";
 cin>>t1;
 switch(t1)
 {
 case 1:   fstream empee("employee.dat",ios::in|ios::binary|ios::app|ios::out);
	  clrscr();
	    cout<<"\nenter how many records u want to enter:\n";
	    cin>>t2;
	    for(t3=0;t3<t2;t3++)
	    {
	    clrscr();
	    cout<<"\nenter entry of record "<<t3+1<<" \n";
	    e1.egetdata();
	    empee.write((char *)&e1,sizeof(e1));
	    }

	 break;//case 1 end
  case 2:   	fstream emp("employee.dat",ios::in|ios::binary|ios::app|ios::out);
	cout<<"\n************************************************";
	    cout<<"\n*  enter the sr no of record u want to search: *";
	    cout<<"\n************************************************\n";
	    cin>>t4;
	    t5=0;
	    clrscr();
	    searching();
	    loading1();
	    wastetime2();
	    clrscr();
	    emp.seekg(0);
	     while(!emp.eof())
	    {
	     emp.read((char *)&e1,sizeof(e1));
	      if(e1.getempid()==t4)
	       { e1.eputdata();
		 t5++;
		 break;
	       }
	    }
	    if(t5==0)
	    {
	    cout<<"\nno result found\n";
	    }
	    cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	    cout<<"\n$$      enter 2 to go to main menu:     $$\n";
	    cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	    cin>>t5;
	  //search case 2 end
	 break;
  case 3:
       {    fstream emp("employee.dat",ios::out|ios::in);
       //deleting
       emp.seekg(0);
       cout<<"\nenter the srno u want to delete\n";
       ofstream newf("temp.dat",ios::out|ios::binary);
       cin>>t4;
       t5=0;
       char confirm;
       emp.seekg(0);
	while(!emp.eof())
	 {
	 emp.read((char *)&e1,sizeof(e1));
	 if(e1.getempid()==t4)
	   {
	   e1.eputdata();
	    t5=1;
	    cout<<"\n are you sure you want to delete this record \n enter y to delete  else press n";
	    cin>>confirm;
	    if(confirm=='n')
	    newf.write((char *)&e1,sizeof(e1));
	   }
	 else
	 newf.write((char *)&e1,sizeof(e1));
	 }
       if(t5==0)
       cout<<"\n no result found\n";
       else
       cout<<"\n record deleted";
       newf.close();
       emp.close();
       remove("employee.dat");
       rename("temp.dat","employee.dat");
       emp.open("employee.dat",ios::in|ios::binary|ios::out|ios::app);
	} break;
  case 4:
	fstream empe("employee.dat",ios::in|ios::binary|ios::app|ios::out);
	 empe.seekg(0);
	 while(!empe.eof())
	 {
	  empe.read((char *)&e1,sizeof(e1));
	  e1.eputdata();
	  for(int i=0;i<1000;i++){
	  for(int p=0;p<1000;p++){
	  for(int k=0;k<100;k++);
	   }
	   }
	   wastetime2();
	   clrscr();
	  }
	   cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	    cout<<"\n$$      enter 2 to go to main menu:     $$\n";
	    cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	    cin>>t5;
	  break;
  case 5:
	 cout<<"\n thank u \n";
	 wastetime2();
	 smilee();
  emp.close();
	 wastetime2();
	 exit(0);
	 break;


	 }}    }
void wholesellerdata()
	{
	clrscr();
	int wh1=0,w4,w5,flag,pos;
	char user[30];
	fstream whole("wholeseller.dat",ios::in|ios::binary|ios::app|ios::out);
	while(wh1!=3)
	{
	clrscr();
	 cout<<"\n**************************";
	 cout<<"\n    enter ur choice :      ";
	 cout<<"\n***************************";
	 cout<<"\n!!   1.search data       !!";
	 cout<<"\n+++++++++++++++++++++++++++";
	 cout<<"\n!!   2.view all records  !!";
	 cout<<"\n+++++++++++++++++++++++++++";
	 cout<<"\n!!   3.exit              !!";
	 cout<<"\n+++++++++++++++++++++++++++";
	 cout<<"\n***************************\n";
	 cin>>wh1;
	 switch(wh1)
	 {

  case 1:
	 {  fstream whole("wholeseller.dat",ios::out|ios::in);
	   clrscr();
	    cout<<"\n************************************************";
	    cout<<"\n*  enter the wholeseller of record u want to search: *";
	    cout<<"\n************************************************\n";
	    cin>>w4;
	    cout<<"\n************************************************";
	    w5=0;
	    clrscr();
	    whole.seekg(0);
	    searching();
	    while(!whole.eof())
	    {
	     whole.read((char *)&w1,sizeof(w1));
	      if(w1.whgetid()==w4)
	       {
	       w1.wputdata();
		 w5++;
	       }
	    }
	    if(w5==0)
	    {
	    cout<<"\nno result found\n";
	    }
	    cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	    cout<<"\n$$      enter 2 to go to main menu:     $$\n";
	    cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	    cin>>w5;
	 } //search case 2 end
	 break;

  case 2 :    fstream whole("wholeseller.dat",ios::out|ios::in);
	 while(!whole.eof())
	 {
	  whole.read((char *)&w1,sizeof(w1));
	  if(whole.eof()){break;}
	  w1.wputdata();
	  for(int i=0;i<1000;i++){
	  for(int p=0;p<1000;p++){
	  for(int k=0;k<100;k++);
	   }
	   }
	   wastetime2();
	  clrscr();
	  }
	   cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	    cout<<"\n$$      enter 2 to go to main menu:     $$\n";
	    cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	    cin>>w5;
	  break;
  case 3:
	 cout<<"\n thank u \n";
	 wastetime2();
	 smilee();
	 wastetime2();
	 exit(0);
	 break;

}}}