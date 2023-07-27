#include <iostream> 
#include<string.h>

using namespace std;

    class University
    {
        protected:
        char name[40];
        char location[20];

        public:
        University(){}
        University(char * uname, char *ulocation)
        {
            strcpy(name,uname);
            strcpy(location,ulocation);
        }
        void displayUniversity();
    };
    class Affiliated: public virtual University
    {
        protected:
        char name[30];
        char address[30];
        int noofprograms;

        public:
        Affiliated(){}
        Affiliated(char * uname,char * ulocation ,
         char *aname ,char * aaddress, int anoofprogram):University(uname,ulocation) 
        {
            strcpy(name,aname);
            strcpy(address,aaddress);
            int noofprogram=anoofprogram;
        }
        void display_Affiliated();
    };
    class constituent: virtual public University
    {   
        protected:
        char school[20];
        char dean[30];
        char nameofprogram[30];

        public:
        constituent(char * uname,char * ulocation ,
         char *cschool ,char * cdean, int *  cnoofprogram);
    };
 

