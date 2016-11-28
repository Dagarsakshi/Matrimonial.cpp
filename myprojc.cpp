//*****************************************************************//
//~~~~~~~~~~~~~~~~~~~~~~~~~HEADER FILES~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//=================================================================//

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<time.h>

using namespace std;

//****************************************************************//
//~~~~~~~~~~~~~~~~~~~~~~~~~CLASS PERSON~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//================================================================//

class person
{

private:
     char  Firstname[25];
     char  Lastname[25];
     char  Gender;
     int   Age;
     float Height;
     char  Complexion[15];
     char  Profession[25];
     char  Religion[20];
     char  Caste[20];


public:
    //********************************************//
    //~~~~~~~~~~~~~~Function Declarations~~~~~~~~~//
    //============================================//
    void create();
    void display();
    char* getfirstname();
    char* getlastname();
    char getgender();
    char* getcomplex();
    char* getprof();
    char* getreligion();
    char* getcaste();
    int getage();
    float getheight();

};


char* person::getfirstname()
{
 return Firstname;
}

char* person::getlastname()
{
 return Lastname;
}

char person::getgender()
{
 return Gender;
}

char* person::getcomplex()
{
 return Complexion;
}

char* person::getprof()
{
 return Profession;
}

char* person::getreligion()
{
 return Religion;
}

char* person::getcaste()
{
return Caste;
}

int person::getage()
{
return Age;
}

float person::getheight()
{
return Height;
}


//***********************************************************//
//~~~~~~~~~~~~~~Function for Time Delay~~~~~~~~~~~~~~~~~~~~~~//
//===========================================================//

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

//************************************************************//
//~~~~~~~~~~~~~~~~~Function for WELCOME PAGE~~~~~~~~~~~~~~~~~~//
//============================================================//

void welcome()
{
       cout<<endl<<"\n	   \302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302\302";
       cout<<endl;
       cout<<endl;
       cout<<"                  <";
       delay(200);
       cout<<"-";
       delay(200);
       cout<<"-";
       delay(200);
       cout<<"-";
       delay(200);
       cout<<" S";
       delay(200);
       cout<<"H";
       delay(200);
       cout<<"U";
       delay(200);
       cout<<"B";
       delay(200);
       cout<<"H ";
       delay(200);
       cout<<"V";
       delay(200);
       cout<<"I";
       delay(200);
       cout<<"V";
       delay(200);
       cout<<"A";
       delay(200);
       cout<<"A";
       delay(200);
       cout<<"H";
       delay(300);
       cout<<", ";
       delay(500);
       cout<<"we ";
       delay(200);
       cout<<"match ";
       delay(200);
       cout<<"better";
       delay(200);
       cout<<".";
       delay(200);
       cout<<".";
       delay(200);
       cout<<".";
       delay(200);
       cout<<"-";
       delay(200);
       cout<<"-";
       delay(200);
       cout<<"-";
       delay(200);
       cout<<">";
       delay(200);
       cout<<endl;
       cout<<endl;
       cout<<"           \301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301\301";
       cout<<endl<<endl<<endl;
       delay(800);
       cout<<"                  -\4\4 Love is looking for you, be found! \4\4- "<<endl;
       cout<<endl;
       cout<<endl;
       delay(400);
       cout<<setw(25)<<" "<<"Press anywhere to continue";
       getch();
}

//************************************************************//
//~~~~~~~~~~~~~~~~Function to Enter Details~~~~~~~~~~~~~~~~~~~//
//============================================================//

void person::create()
{
    cout<<"\n              Enter your details "<<endl<<endl;

    cout<<"\n  First Name     : ";
    cin>>Firstname;

    cout<<"\n  Last Name      : ";
    cin>>Lastname;

    cout<<"\n  Gender [M/F]   : ";
    cin>>Gender;

    cout<<"\n  Age            : ";
    cin>>Age;

    cout<<"\n  Height(in cms) : ";
    cin>>Height;

    cout<<"\n  Complexion     : ";
    cin>>Complexion;

    cout<<"\n  Profession     : ";
    cin>>Profession;

    cout<<"\n  Religion       : ";
    cin>>Religion;

    cout<<"\n  Caste          : ";
    cin>>Caste;

    getch();

}

//**************************************************//
//~~~~~~~~~~~~~Function to DISPLAY~~~~~~~~~~~~~~~~~~//
//==================================================//

void person::display()
{
    cout<<"\n\n                          BIODATA                           \n\n";

    cout<<"\n  Name        : "<<Firstname<<" "<<Lastname<<endl;

    cout<<"\n  Gender      : "<<Gender<<endl;

    cout<<"\n  Age         : "<<Age<<"years"<<endl;

    cout<<"\n  Height      : "<<Height<<"cms"<<endl;

    cout<<"\n  Complexion  : "<<Complexion<<endl;

    cout<<"\n  Profession  : "<<Profession<<endl;

    cout<<"\n  Religion    : "<<Religion<<endl;

    cout<<"\n  Caste       : "<<Caste<<endl;

    getch();
}

//***********************************************************//
//~~~~~~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//===========================================================//

int main()
{
    ifstream file ("matrimonial.dat",ios::in|ios::binary );

    int flag=0,cp,found=0,ch;
    person p,s;

    char name[10];
    file.seekg(0,ios::beg);
    system("cls");

    welcome();
    cout<<endl<<endl<<endl;
    cout<<"\n    Enter Name  : ";
    cin>>name;

    while(file.read((char*)&p, sizeof p))
    {
        cp=file.tellg();
        if(strcmpi(p.getfirstname(),name)==0)     // get functions for private members
           {
               flag=1;
               break;
           }

    }
    file.close();

    if(flag==0)
        cout<<"\n     You Are Not Registered. Register Yourself!"<<endl;

    while(1)
    {
       cout<<"\n     Enter the following Choices"<<endl;

       cout<<"      1. New User? Register now!  "<<endl;

       cout<<"      2. Show Details."<<endl;

       cout<<"      3. Edit Details."<<endl;

       cout<<"      4. Delete account."<<endl;

       cout<<"      5. Search for Bride/Groom. "<<endl;

       cout<<"      6. Read F.A.Q "<<endl;

       cout<<"      7. Contact Us "<<endl;

       cout<<"      8. Exit "<<endl;

       fflush(stdin);
       cin>>ch;
       switch(ch)
       {
            case 1:
                {
                    ofstream file ("matrimonial.dat",ios::app|ios::binary );
                    s.create();
                    file.seekp(0,ios::end);
                    file.write((char *)&s,sizeof s);

                    cout<<"\n     You have been registered successfully!"<<endl;

                    cout<<"\n     These are the details you have entered!"<<endl;

                    s.display();

                    cout<<"\n Login again with your registered name.\n"<<endl;

                    return 0;
                    file.close();
                    flag=2;
                    break;
                }
            case 2:
                {

                    ifstream file ("matrimonial.dat",ios::in|ios::binary );

                    if (flag==1)
                      {
                        p.display();
                      }

                    else if (flag == 2)
                    {
                        s.display();
                    }

                    else
                        cout<<"\n You are not registered. Please Register First\n";
                    file.close();
                    break;
                }

            case 3:
                {

                    ofstream file ("matrimonial.dat",ios::app|ios::binary );

                    if(flag==1)
                    {
                    file.seekp(cp,ios::beg);
                    cout<<"\n To edit Your Details \n";
                    p.create();
                    file.write((char *)&p,sizeof p);
                    }
                    else
                        cout<<"\n You are not registered. Please Register First\n";
                    file.close();
                    break;
                }

            case 4:
                {
                    //search and shift
                    ifstream file ("matrimonial.dat",ios::in|ios::binary );
                    ofstream newfile ("new.dat",ios::app|ios::binary );

                    while(file.read((char *)&s,sizeof s))
                    {
                      if(strcmpi(s.getfirstname(),p.getfirstname())!=0)
                            newfile.write((char *)&s, sizeof s);
                    }
                    //rename
                    file.close();
                    newfile.close();
                    remove("matrimonial.dat");
                    rename("new.dat","matrimonial.dat");
                    cout<<"\n Account deleted!\n";
                    cout<<"If you wish to continue, You will have to register again!"<<endl;
                    return 0;
                    break;

                }

            case 5:
                {

                        fstream file ("matrimonial.dat",ios::in|ios::app|ios::binary );
                        if (flag==1)
                        {
                            int   Age1;
                            char  Gender1;
                            float Height1;
                            char  Profession1[25];
                            char  Complexion1[15];
                            char  Religion1[20];
                            char  Caste1[20];

                            cout<<endl<<"             Search";
                            delay(200);
                            cout<<" for ";
                            delay(200);
                            cout<<"your ";
                            delay(200);
                            cout<<"Soul ";
                            delay(200);
                            cout<<"mate";
                            delay(200);
                            cout<<".";
                            delay(200);
                            cout<<".";
                            delay(200);
                            cout<<".";
                            cout<<endl;
                            delay(300);
                            cout<<endl<<"             Enter your Search Filters "<<endl;
                            cout<<"\n\n Age          : ";
                            cin>>Age1;

                            cout<<"\n\n Gender       : ";
                            cin>>Gender1;

                            cout<<"\n\n  Height      : ";
                            cin>>Height1;

                            cout<<"\n\n  Profession  : ";
                            cin>>Profession1;

                            cout<<"\n\n  Complexion  : ";
                            cin>>Complexion1;

                            cout<<"\n\n  Religion    : ";
                            cin>>Religion1;

                            cout<<"\n\n  Caste       : ";
                            cin>>Caste1;

                            file.write((char *)&p, sizeof p);
                            file.seekp(cp,ios::beg);
                            system("cls");

                            cout<<"\nRESULTS"<<endl;

                            while(file.read((char *)&s,sizeof s))
                            {
                                if( Gender1== s.getgender() && Age1== s.getage())
                             {

                                 if(Height1== s.getheight()|| strcmpi(Complexion1,s.getcomplex())==0 || strcmpi(Profession1,s.getprof())==0 || strcmpi(Religion1,s.getreligion())==0 )
                                   {

                                       found ++;
                                       cout<<"\nFOUND A MATCH\n";
                                       s.display();
                                    }
                             }
                            }
                                if(found==0)
                                    cout<<"\nNo "<<Gender1<<" of age "<<Age1<<" matching your expectation.\n";

                           }

                            else
                                cout<<"\n You are not registered. Please Register First\n";

                        file.close();
                        ch=8;
                        break;
                }
                break;

            case 6:

                {
                        cout<<endl<<endl<<"Q : Can someone register on behalf of his/her friend or relative?"<<endl;
                        cout<<endl<<"    A : Yes. One can register a profile for ‘Self’ as well as on behalf of Son, Daughter, Sibling or a Relative/Friend."<<endl;

                        cout<<endl<<endl<<"Q : What can I do if I do not want to share my phone number?"<<endl;
                        cout<<endl<<"    A : Providing a phone number and verifying the same is mandatory for all profiles. You may choose to hide the number by opting for privacy setting."<<endl;

                        cout<<endl<<endl<<"Q : How can I initiate contact with desired people?"<<endl;
                        cout<<endl<<"    A : You can send Interest to people you like. If they accept your interest, you would be able to view their contact details, however, you will need to UPGRADE to Paid membership."<<endl;

                        cout<<endl<<endl<<"Q : Can I use the same Phone number for more than one profiles?"<<endl;
                        cout<<endl<<"    A : Yes. You can choose to keep the same Phone number if you have registered profiles for more than one member in the family."<<endl;

                        cout<<endl<<endl<<"Q : How can I get a good response here?"<<endl;
                        cout<<endl<<"    A : Being an online portal, please understand that responses would depend on how active you are on the site. First, you should ensure setting My Desired Partner so that system can recommend you profiles as per your liking. All such system recommended profiles can be found under the ‘MATCHES’ tab on the homepage."<<endl;

                        cout<<endl<<endl<<"Q : What are match alerts?"<<endl;
                        cout<<endl<<"    A : Match alerts are system recommendations sent to you on the basis of your Desired Partner preference and also on the history of your interests & acceptances. You may check these profiles and see if they are of interest to you and hence can contact the members accordingly. "<<endl;
                        break;
                        getch();
                }

            case 7:

                {
                        cout<<endl<<endl<<endl<<endl;
                        cout<<"   ********************************************"<<endl;
                        cout<<setw(24)<<"       Got complaints/suggestions/feedbacks?"<<endl;
                        cout<<"   ********************************************"<<endl<<endl<<endl;

                        cout<<setw(32)<<"\6 Feel free to contact us at: "<<endl<<endl;

                        cout<<setw(30)<<"+91 9643456554 "<<endl;

                        cout<<setw(30)<<"+91 9873747166 "<<endl<<endl;

                        cout<<setw(20)<<"\6 Reach us at:    "<<endl<<endl;

                        cout<<setw(40)<<"  No.23, Pradhikaran Sector    "<<endl;

                        cout<<setw(40)<<"  Indira Gandhi, Udyan Nigdi,  "<<endl;

                        cout<<setw(40)<<"  Pune, Maharastra- 411044     "<<endl<<endl;

                        cout<<setw(20)<<"\6 Write to us at: "<<endl<<endl;

                        cout<<setw(40)<<"sakshi.dagar20@gmail.com    "<<endl;

                        cout<<setw(40)<<"srivastavaprakhar1@gmail.com"<<endl;

                        break;
                }

            case 8:
                    exit(0);
                    break;

            default:
                    cout<<"\nNot a valid entry"<<endl;
                    cout<<"\nChoose a valid option "<<endl;
            }
    }
    return 0;
}


