#include<iostream>
#include<fstream>
#include<string.h>
#include<time.h>
#include <iomanip>

using namespace std;

string ev1="TATA nexon EV", ev2="TATA Tiago EV", ev3="Kia EV6";
string pd1="Hatchback", pd2="Sedan", pd3="SUV", pd4="Luxury";
string hb1="Maruti Baleno", hb2="Maruti Swift", hb3="Renault KWID";
string sd1="Honda Amaze", sd2="Honda City", sd3="Hyundai Verna";
string suv1="Hyundai Creta", suv2="Maruti Brezza", suv3="Toyota Fortuner";
string lx1="Audi A6", lx2="BMW X5", lx3="Mercedes-Benz GLA", lx4="Rolls-Royce Ghost";

int option, fuel_type, ev_car, pd_car, hb_car, car_con, see, count, t_amount, days, zip;

long long int mob, mob_no;

string name, temp, cont, temp_pd, c_name, str_add, ct, st, invo="#crh09786";

string u_name, p_word, un, ps;
string username, password;

class car{
    public:
    void welcome(){
        system("cls");
        cout<<"\t\t\t--------------------\n";
        cout<<"\t\t\t|  CAR RENTAL HUB  |\n";
        cout<<"\t\t\t--------------------\n";

        cout<<"\n\nHello Sir"<<"\n\tWelcome to CAR RENTAL HUB\n";

    }

    void car_selection();
};

void car :: car_selection()
{
    menu1:
    meen:
    emenu:
    pdmenu:
    cout<<"\n\n\t\t--------------\n";
    cout<<"\t\t|  CAR MENU  |\n";
    cout<<"\t\t--------------\n";

    cout<<"\nPlease select fuel type :-";
    cout<<"\n-----------------------\n\n";

    cout<<"1. Electric Vehicle (EV)\n";
    cout<<"2. Petrol or Diseale\n";
    cout<<"\nChoose your fuel type car : ";
    cin>>fuel_type;

    system("cls");
    if(fuel_type == 1){
        ev:
        cout<<"\n\n\t\t\t--------------\n";
        cout<<"\t\t\t|  CAR MENU  |\n";
        cout<<"\t\t\t--------------\n";

        cout<<"\nPlease select Electric Vehicle :-";
        cout<<"\n------------------------------\n\n";
        cout<<"1."<<ev1<<"\n";
        cout<<"2."<<ev2<<"\n";
        cout<<"3."<<ev3<<"\n";
        cout<<"4.Main menu"<<"\n";
        cout<<"\nPlease choose your car : ";
        cin>>ev_car;

        switch(ev_car){
            case 1 : temp = ev1; break;
            case 2 : temp = ev2; break;
            case 3 : temp = ev3; break;
            case 4 : system("cls");goto emenu; break;
            default : system("cls");cout<<"Invalid input:(";goto ev;break;
        }
    }
    else if(fuel_type == 2){
        pd:
        cout<<"\n\n\t\t\t--------------\n";
        cout<<"\t\t\t|  CAR MENU  |\n";
        cout<<"\t\t\t--------------\n";

        cout<<"\nPlease select Petrol or Diesel car :-";
        cout<<"\n----------------------------------\n\n";
        cout<<"1."<<pd1<<"\n";
        cout<<"2."<<pd2<<"\n";
        cout<<"3."<<pd3<<"\n";
        cout<<"4."<<pd4<<"\n";
        cout<<"5.Main menu"<<"\n";

        cout<<"\nPlease choose your car : ";
        cin>>pd_car;

        if(pd_car == 1){
            system("cls");
            hb:
            cout<<"\n\n\t\t\t--------------\n";
            cout<<"\t\t\t|  CAR MENU  |\n";
            cout<<"\t\t\t--------------\n";

            cout<<"\nPlease select Hatchback car :-";
            cout<<"\n---------------------------\n\n";
            cout<<"1."<<hb1<<"\n";
            cout<<"2."<<hb2<<"\n";
            cout<<"3."<<hb3<<"\n";
            cout<<"4.Main menu"<<"\n";
            cout<<"\nPlease choose your car : ";
            cin>>hb_car;

            switch(hb_car){
                case 1 : temp=hb1; break;
                case 2 : temp=hb2; break;
                case 3 : temp=hb3; break;
                case 4 : system("cls");goto emenu; break;
                default : system("cls");cout<<"Invalid input:(";goto hb;break;
            }
        }
        else if(pd_car == 2){
            system("cls");
            sd:
            cout<<"\n\n\t\t\t--------------\n";
            cout<<"\t\t\t|  CAR MENU  |\n";
            cout<<"\t\t\t--------------\n";

            cout<<"\nPlease select Sedan car :-";
            cout<<"\n-----------------------\n\n";
            cout<<"1."<<sd1<<"\n";
            cout<<"2."<<sd2<<"\n";
            cout<<"3."<<sd3<<"\n";
            cout<<"4.Main menu"<<"\n";
            cout<<"\nPlease choose your car : ";
            cin>>hb_car;

            switch(hb_car){
                case 1 : temp=sd1; break;
                case 2 : temp=sd2; break;
                case 3 : temp=sd3; break;
                case 4 : system("cls");goto emenu; break;
                default : system("cls");cout<<"Invalid input:(";goto sd;break;
            }
        }
        else if(pd_car == 3){
            system("cls");
            suv:
            cout<<"\n\n\t\t\t--------------\n";
            cout<<"\t\t\t|  CAR MENU  |\n";
            cout<<"\t\t\t--------------\n";

            cout<<"\nPlease select SUV car :-";
            cout<<"\n---------------------\n\n";
            cout<<"1."<<suv1<<"\n";
            cout<<"2."<<suv2<<"\n";
            cout<<"3."<<suv3<<"\n";
            cout<<"4.Main menu"<<"\n";
            cout<<"\nPlease choose your car : ";
            cin>>hb_car;

            switch(hb_car){
                case 1 : temp=suv1; break;
                case 2 : temp=suv2; break;
                case 3 : temp=suv3; break;
                case 4  : system("cls");goto emenu; break;
                default : system("cls");cout<<"Invalid input:(";goto suv;break;
            }
        }
        else if(pd_car == 4){
            system("cls");
            lx:
            cout<<"\n\n\t\t\t--------------\n";
            cout<<"\t\t\t|  CAR MENU  |\n";
            cout<<"\t\t\t--------------\n";

            cout<<"\nPlease select car :-";
            cout<<"\n-----------------\n\n";
            cout<<"1."<<lx1<<"\n";
            cout<<"2."<<lx2<<"\n";
            cout<<"3."<<lx3<<"\n";
            cout<<"4."<<lx4<<"\n";
            cout<<"5.Main menu"<<"\n";
            cout<<"\nPlease choose your car : ";
            cin>>hb_car;

            switch(hb_car){
                case 1 : temp=lx1; break;
                case 2 : temp=lx2; break;
                case 3 : temp=lx3; break;
                case 4 : temp=lx4; break;
                case 5 : system("cls");goto emenu; break;
                default : system("cls");cout<<"Invalid input:(";goto lx;break;
            }
        }
        else if(pd_car == 5){
            system("cls");
            goto pdmenu;
        }
        else {
            system("cls");
            cout<<"Invalid Input :(";
            goto pd;
        }

    }
    else{
        system("cls");
        cout<<"Invalid input :(";
        goto menu1;
    }

    system("cls");
    cout<<"\t\t\t------------------------\n";
    cout<<"\t\t\t|  CAR SPECIFICATIONS  |\n";
    cout<<"\t\t\t------------------------\n\n";

    ifstream spcar;
    spcar.open("path/all cars/"+temp+".txt");  // add your folder path in this file pointer
    while(getline(spcar, cont)){
        cout<<cont<<endl;
    }
    cout<<"\n-------------------------------------------------------------------";
    con:
    cout<<"\n\nCar Confirmation :-";
    cout<<"\n----------------\n\n";
    cout<<"1. Confirm\n";
    cout<<"2. Cancle\n";
    cout<<"\nChoose a option : ";
    cin>>car_con;

    if(car_con==1){
        count=1;
    }
    else if(car_con==2){
        // goto meen;
        system("cls");
        cout<<"\nCar Confirmation :-";
        cout<<"\n----------------\n\n";
        cout<<"Car cancelled successfully :)";
        cout<<"\n\nDo you wnat to see other cars :";
        cout<<"\n1. Yes";
        cout<<"\n2. No";
        cout<<"\nChoose a option : ";
        cin>>see;
        if(see == 1){
            system("cls");
            goto meen;
        }
        else{
            system("cls");
            cout<<"\t\t\t--------------------\n";
            cout<<"\t\t\t|  CAR RENTAL HUB  |\n";
            cout<<"\t\t\t--------------------\n";

            cout<<"\nThank you "<<name<<" for visiting :)";
            cout<<"\n\nSee you soon :)\n\n";
            cout<<"---------------------------------------------\n\n";
            exit(0);
        }

    }
    else{
        system("cls");
        cout<<"Invalid input :(";
        goto con;
    }
}

class amount : public car{
    public:
    void client_info();
    void caiculate_rent();
    void rent_bill();
    void car_amount(){

        if(count == 1){
            system("cls");
            cout<<"\n => Thank you for confirmation";
            cout<<"\n\nEnter number of days you want rent a car ";
            cout<<"\n\nNumber of days : ";
            cin>>days;

            client_info();
            caiculate_rent();
            rent_bill();

        }
    }
};

void amount :: caiculate_rent(){
    if(fuel_type == 1){  //Electric Vehicle
        switch(ev_car){
            case 1 : t_amount= days*2000; break;  //TATA nexon EV
            case 2 : t_amount= days*2000; break;  //TATA Tiago EV
            case 3 : t_amount= days*3000; break;  //Kia EV6
        }
    }
    else if(fuel_type == 2){  //Petrol or Diseale
        if(pd_car == 1){
            switch(hb_car){  //hatchback
                case 1 : t_amount= days*2000; break;  //Maruti Baleno
                case 2 : t_amount= days*2000; break;  //Maruti Swift
                case 3 : t_amount= days*1800; break;  //Renault KWID
            }
        }
        else if(pd_car == 2){  //Sedan
            switch(hb_car){
                case 1 : t_amount= days*2500; break;  //Honda Amaze
                case 2 : t_amount= days*2500; break;  //Honda City
                case 3 : t_amount= days*2500; break;  //Hyundai Verna
            }
        }
        else if(pd_car == 3){  //SUV
            switch(hb_car){
                case 1 : t_amount= days*3000; break;  //Hyundai Creta
                case 2 : t_amount= days*3000; break;  //Maruti Brezza
                case 3 : t_amount= days*4000; break;  //Toyota Fortuner
            }
        }
        else if(pd_car == 4){  //Luxury
            switch(hb_car){
                case 1 : t_amount= days*5000; break;  //Audi A6
                case 2 : t_amount= days*5500; break;  //BMW X5
                case 3 : t_amount= days*7000; break;  //Mercedes-Benz GLA
                case 4 : t_amount= days*10000; break;  //Rolls-Royce Ghost
            }
        }
    }
}

void amount :: client_info(){
    cout<<"\nClient/ Customer Info :-";
    cout<<"\n---------------------\n\n";

    cout<<"Name : ";
    cin.ignore();
    getline(cin, c_name);
    cout<<"\nStreet Address : ";
    getline(cin, str_add);
    cout<<"\nCity : ";
    getline(cin, ct);
    cout<<"\nState : ";
    getline(cin, st);

    pin:
    cout<<"\nZIP (6 digit) :";
    cin>>zip;
    int copi=0;
    while(zip!=0)
    {
        zip=zip/10;
        copi++;
    }
    if(copi!=6)
    {
        cout<<"\n Invalid pin code.";
        goto pin;
    }

    mobile:
    cout<<"\nMobile no. :";
    cin>>mob;
    mob_no=mob; 
    int comob=0;
    while(mob!=0)
    {
        mob=mob/10;
        comob++;
    }
    if(comob!=10)
    {
        cout<<"\n Invalid Mobile number.";
        goto mobile;
    }
}

void amount :: rent_bill(){
    system("cls");

    string add=str_add+", "+ct+", "+st;
    int dis=t_amount-(t_amount*5/100);
    
    cout<<"\nRiceipt : ";
    cout<<"\n--------\n\n";
    cout<<"||///////////////////////////////////////////////////////////////////////////////||\n";
    cout<<"||                               CAR RENTAL HUB                                  ||\n";
    cout<<"||///////////////////////////////////////////////////////////////////////////////||\n";
    cout<<"|| Invoice No.                      ||"<<setw(42)<<invo<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| DATE :                           ||"<<setw(42)<<__DATE__<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| Client Name                      ||"<<setw(42)<<c_name<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| Address                          ||"<<setw(42)<<add<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| Mobile No.                       ||"<<setw(42)<<mob_no<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| Car Model                        ||"<<setw(42)<<temp<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| Number Of Days                   ||"<<setw(42)<<days<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| Rental Amount                    ||"<<setw(42)<<t_amount<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| Discount                         ||"<<setw(42)<<"5%"<<" ||\n";
    cout<<"||----------------------------------||-------------------------------------------||\n";
    cout<<"|| Total Amount                     ||"<<setw(42)<<dis<<" ||\n";
    cout<<"||///////////////////////////////////////////////////////////////////////////////||\n";
    cout<<"|| Coustomer Support :                                                           ||\n";
    cout<<"|| Gmail : carrenthub@gmail.com                     Phone : 1800 123 7848        ||\n";
    cout<<"||///////////////////////////////////////////////////////////////////////////////||\n";
    // cout<<u_name;
    ofstream data;
    data.open("path/userdata/"+u_name+".txt", ios::app);   // add your folder path in this file pointer
    data<<endl<<"----------------------------------"<<endl<<c_name<<endl<<add<<endl<<mob_no<<endl<<temp<<endl<<days<<endl<<t_amount<<endl<<dis<<endl<<__DATE__<<endl;
    data.close();
}

void login(){

    system("cls");
    log:
    cout<<"\t Login \n";
    cout<<"\t---------\n";

    cout<<"\n Enter a username : ";
    cin>>u_name;
    cout<<"\n Enter a password : ";
    cin>>p_word;

    ifstream op;
    op.open("path/userdata/"+u_name+".txt");  // add your folder path in this file pointer
    op>>un>>ps;
    if(un==u_name && ps==p_word){
        cout<<"\nHello"<<u_name<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
    }
    else{
        system("cls");
        cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
        goto log;
    }
    op.close();
    
}

void regster(){

    system("cls");
    cout<<"\t Registration \n";
    cout<<"\t--------------\n";

    cout<<"\n Enter a username : ";
    cin>>username;
    cout<<"\n Enter a password : ";
    cin>>password;

    ofstream user;
    user.open("path/userdata/"+username+".txt"); // add your folder path in this file pointer
    user<<username<<endl<<password;
    user.close();

}

int main()
{
    system("cls");
    cout<<"\n\t\t\t|||         |||  |||||||||||  |||             |||||||||||  |||||||||||||  |||||||||||||||  |||||||||||\n";
    cout<<"\t\t\t|||         |||  |||          |||             |||          |||       |||  |||   |||   |||  |||        \n";
    cout<<"\t\t\t|||         |||  |||||||||||  |||             |||          |||       |||  |||   |||   |||  |||||||||||\n";
    cout<<"\t\t\t|||   |||   |||  |||          |||             |||          |||       |||  |||   |||   |||  |||        \n";
    cout<<"\t\t\t|||||||||||||||  |||||||||||  |||||||||||     |||||||||||  |||||||||||||  |||   |||   |||  |||||||||||\n";
    cout<<"_______________________________________________________________________________________________________________________________________________________\n";
    men:
    cout<<"\n\n\n1. Login \n";
    cout<<"2. Register \n";
    cout<<"3. Exit \n";
    cout<<"\n Choose a option : ";
    cin>>option;

    if(option==1){
        login();
        cin.get();
        cin.get();
    }
    else if(option==2){
        regster();
        main();
    }
    else if(option==3){
        exit(0);
    }
    else{
        system("cls");
        cout<<"\nInvalid input :( \n";

        goto men;
    }

    amount obj;
    obj.welcome();
    obj.car_selection();
    obj.car_amount();

}