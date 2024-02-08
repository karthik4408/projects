#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct BookStore
{
char Subject[100];
char Book_Name[100];
char author[100];
int pages;
float price;
};

int main()
{

struct BookStore l[] = {
  {"Maths","Thomas Caliculus","Joel R.Hass",400,500.00},
  {"Physics","Basic Physics","Karl F. Kuhn",120,220.00},
  {"Computers","C, the complete reference","Herbert Schildt",240,410.00},
  {"Chemistry","Organic Chemistry","Subrata Sengupta",350,590},
  {"Maths","Indtroduction to Real Analysis","Robert G Bartle",450,350.00},
  {"Physics","Classic ElectroDynamics","John David Jackson",240,450.50},
  {"Computers","Let Us C Solutions","Yashavant Kanetkar",300,280.00},
  {"Chemistry","Basic Concepts of Chemistry","Pegasus",100,120},
  {"Maths","Trignometry","Hipparchus",300,100.50},
  {"Physics","Quantum Mechanics","J P Singh",360,280.00},
  {"Computers","Programming In Ansi C","E. Balagurusamy",400,515.00},
  {"Chemistry","Concepts of Organic Chemistry","Bharti Gupta",420,357.00},
  {"Maths","Analytic Geometry","George B. Thomas",250,250.00},
  {"Physics","Concepts of Physics","H. C. Verma",480,210.00},
  {"Computers","Head First C","David Griffiths and Dawn Griffiths",360,350.50},
  {"Chemistry","Essentials of Chemistry","Gerald Cole",320,340.00},
  {"Maths","VedicMaths","Aryabhatta",300,450.55},
  {"Physics","Thermo Dynamics","DR. N. SUBRAMANIAM",200,150.00},
  {"Computers","C in a Nutshell","Peter Prinz and Tony Crawford",350,450.00},
  {"Chemistry","Green Chemistry","Bela Torok",220,320.00}
 };

char Subj[50];
int i,j,k, count;
char temp;
i=j=k=0;
count=20;
char AuthorName[50],BookName[50];
char User[50];
char Password[50];

char Usr[50];
char PasWd[50];

while(k!=3)
{
printf("\n1.Please chose this option if you are Admin\n");
printf("2. Please choose this option if you are User\n");
printf("3. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&k);

switch (k)
{
case 1:
printf("\nEnter the Password:    ");
scanf ("%s",Password);
if(strcmp(Password,"Admin")==0)
{
 printf("\nAdmin login Success \n");
goto Process;
}
else
{
printf("\nAdmin login Failed \n");
printf("\n Exiting Program");
exit(0);
}
break;
case 2:
printf("\nEnter the Password:    ");
scanf ("%s",Password);
if(strcmp(Password,"User")==0)
{
 printf("\nUser login Success \n");
goto Process;
}
else
{
printf("\nUser login Failed \n Exiting Program");
exit(0);
}
break;
case 3:
exit(0);
}
}
Process:
while(j!=5)
{
printf("\n1. List all books by providing Subject\n");
printf("2. List All books in the BookStore\n");
printf("3. List the count of books in the BookStore\n");
printf("4. Choose the book you want to buy (Enter book title for details of book)\n");
printf("5. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
/* Add book */
case 1:
printf ("Enter Subject information to display all books : ");
scanf ("%s",Subj);

for (i=0; i<count; i++)
{
if (strcmp(Subj, l[i].Subject) == 0)
printf ("\n Subject=%s \n Book_Nmae=%s \n Author=%s \n Pages=%d \n Price=%f\n",l[i].Subject,l[i].Book_Name,l[i].author,l[i].pages,l[i].price);
}
break;
case 2:
for (i=0; i<count; i++)
{
printf ("\n Subject=%s \n Book_Nmae=%s \n Author=%s \n Pages=%d \n Price=%f\n",l[i].Subject,l[i].Book_Name,l[i].author,l[i].pages,l[i].price);
}
break;
break;

case 3:
printf("\n No of books in BookStore: %d\n", count);
break;

case 4:
printf ("Enter book Title/Name: ");
scanf("%c",&temp);
scanf ("%[^\n]",BookName);

for (i=0; i<count; i++)
{
if (strcmp(BookName, l[i].Book_Name) == 0)
printf ("\n Subject=%s \n Book_Name=%s \n Author=%s \n Pages=%d \n Price=%f\n",l[i].Subject,l[i].Book_Name,l[i].author,l[i].pages,l[i].price);
}
case 5:
exit(0);

}
}
}
