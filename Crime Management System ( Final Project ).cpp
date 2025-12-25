#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

void loading_bar()
{
    system("color 7D");
    for (int i = 15; i <= 100; i += 10)
    {
        system("cls");
        cout << "\n\n\n\n\n\n\n\t\t\t";
        cout << i << " %% Loading******\n\n\t\t";
        cout << " ";
        for (int j = 0; j < i; j += 2)
        {
            cout << " ";
        }
        Sleep(50);
        if (i == 90 || i == 50 || i == 96 || i == 83)
        {
            Sleep(50);
        }
        system("cls");
    }
}

void intro_data()
{
    system("color 7D");
    cout << "====================================" << endl;
    cout << "=        Crime Data Management    = " << endl;
    cout << "====================================" << endl;
    cout << "Choose an option:" << endl;
    cout << "1) Police Assistant. " << endl;
    cout << "2) Admin.  " << endl;
    cout << "3) Exit the program " << endl;
    cout << "------------------------------------" << endl;
}

void Assistant_login()
{
    system("cls");
    cout << "--------------------------------" << endl;
    cout << "Assistant login:" << endl;
    cout << "--------------------------------" << endl;
    string namoo, passo, captcha;
    string correctCaptcha = "hjkI";
    string correctname = "Horriya";
    string correctpass = "64048";
    while (true)
    {
        cout << "Enter your name: ";
        cin >> namoo;
        cout << "\nEnter your password: ";
        cin >> passo;
        cout << "\nEnter the captcha (hjkI): ";
        cin >> captcha;
        if (captcha == correctCaptcha && namoo == correctname && passo == correctpass)
        {
            cout << "Login successful!" << endl;
            break;
        }
        else
        {
            cout << "Error: Incorrect data. Please try again." << endl;
        }
    }
    system("cls");
}

struct Criminal_input
{
    string name;
    string dateOfBirth;
    char gender;
    string fatherName;
    float height;
    string color;
    string cnic;
    string siteOfInvolvement;
    string detention;
    string criminalRecord;
    string crime;
};

void inputData(Criminal_input &criminal)
{
    cin.ignore();
    cout << "Enter Name: " << endl;
    getline(cin, criminal.name);
    cout << "Enter Date of Birth: ";
    cin >> criminal.dateOfBirth;
    cout << "Enter CNIC: " << endl;
    cin >> criminal.cnic;
    cin.ignore();
    cout << "Enter Father's Name: " << endl;
    getline(cin, criminal.fatherName);
    cout << "Enter gender(F/M): " << endl;
    cin >> criminal.gender;
    cout << "Enter Height(feet): " << endl;
    cin >> criminal.height;
    cin.ignore();
    cout << "Enter skin tone: " << endl;
    getline(cin, criminal.color);
    cout << "Enter Site of Involvement: " << endl;
    getline(cin, criminal.siteOfInvolvement);
    cout << "Enter Detention Status: " << endl;
    cin >> criminal.detention;
    cout << "Enter Criminal Record: " << endl;
    cin >> criminal.criminalRecord;
    cin.ignore();
    cout << "Enter Crime Committed: " << endl;
    getline(cin, criminal.crime);
    getch();
}

void displayData(const Criminal_input &criminal)
{
    cout << "--------------------------------" << endl;
    cout << "Name: " << criminal.name << endl;
    cout << "Date of Birth: " << criminal.dateOfBirth << endl;
    cout << "CNIC: " << criminal.cnic << endl;
    cout << "Father's Name: " << criminal.fatherName << endl;
    cout << "Gender: " << criminal.gender << endl;
    cout << "Height: " << criminal.height << endl;
    cout << "Skin tone " << criminal.color << endl;
    cout << "Site of Involvement: " << criminal.siteOfInvolvement << endl;
    cout << "Detention Status: " << criminal.detention << endl;
    cout << "Criminal Record: " << criminal.criminalRecord << endl;
    cout << "Crime Committed: " << criminal.crime << endl;
    cout << "--------------------------------" << endl;
}

void Criminal_data()
{
    const int MAX_CRIMINAL = 100;
    Criminal_input criminal[MAX_CRIMINAL];
    int n;
    cout << "Enter the number of Criminal (max " << MAX_CRIMINAL << "): ";
    cin >> n;
    if (n > MAX_CRIMINAL || n <= 0)
    {
        cout << "Invalid number of Criminals. Please enter a number between 1 and " << MAX_CRIMINAL << "." << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nCriminal" << i + 1 << " Details:\n";
        inputData(criminal[i]);
    }
    cout << "\nCriminal Data:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails of Criminal " << i + 1 << ":\n";
        displayData(criminal[i]);
    }
    getch();
    cout << "Data displayed successfully.";
    system("cls");
}

struct Police_input
{
    string name;
    string dateOfBirth;
    char gender;
    string fatherName;
    string cnic;
    string grade;
    string awards;
    int criminal_arrested;
};

void inputData(Police_input &police)
{
    cin.ignore();
    cout << "Enter Name: " << endl;
    getline(cin, police.name);
    cout << "Enter Date of Birth: ";
    cin >> police.dateOfBirth;
    cout << "Enter CNIC: " << endl;
    cin >> police.cnic;
    cin.ignore();
    cout << "Enter Father's Name: " << endl;
    getline(cin, police.fatherName);
    cout << "Enter gender(F/M): " << endl;
    cin >> police.gender;
    cout << "Enter Position/Post: " << endl;
    cin >> police.grade;
    cout << "Enter awards: " << endl;
    cin >> police.awards;
    cout << "Enter the number of criminal arrested: " << endl;
    cin >> police.criminal_arrested;
    getch();
}

void displayData(const Police_input &police)
{
    system("cls");
    cout << "--------------------------------" << endl;
    cout << "Name: " << police.name << endl;
    cout << "Date of Birth: " << police.dateOfBirth << endl;
    cout << "CNIC: " << police.cnic << endl;
    cout << "Father's Name: " << police.fatherName << endl;
    cout << "Gender: " << police.gender << endl;
    cout << "Post: " << police.grade << endl;
    cout << "Awards: " << police.awards << endl;
    cout << "Criminal arrested: " << police.criminal_arrested << endl;
    cout << "--------------------------------" << endl;
}

void Police_data()
{
    const int MAX_POLICE = 100;
    Police_input police[MAX_POLICE];
    int n;
    cout << "Enter the number of Police (max " << MAX_POLICE << "): ";
    cin >> n;
    if (n > MAX_POLICE || n <= 0)
    {
        cout << "Invalid number of police. Please enter a number between 1 and " << MAX_POLICE << "." << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nPolice " << i + 1 << " Details:\n";
        inputData(police[i]);
    }
    cout << "\nPolice Data:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails of Police " << i + 1 << ":\n";
        displayData(police[i]);
    }
    getch();
    cout << "Data displayed successfully.";
    system("cls");
}

struct Victim_input
{
    string name;
    int age;
    string cnic;
    char gender;
    string fatherName;
    string statement;
    string affect;
    string compansation;
};

void inputData(Victim_input &victim)
{
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, victim.name);
    cout << "Enter the age of victim: ";
    cin >> victim.age;
    cout << "Enter CNIC: ";
    cin >> victim.cnic;
    cin.ignore();
    cout << "Enter Father's Name: ";
    getline(cin, victim.fatherName);
    cout << "Enter gender (F/M): ";
    cin >> victim.gender;
    cin.ignore();
    cout << "Enter Statement made by Victim: ";
    getline(cin, victim.statement);
    cout << "Enter affects of witnessing crime on victim's mental health: ";
    getline(cin, victim.affect);
    cout << "Enter the compensation provided by authority: ";
    getline(cin, victim.compansation);
    getch();
}

void displayData(const Victim_input &victim)
{
    cout << "--------------------------------" << endl;
    cout << "Name: " << victim.name << endl;
    cout << "Age: " << victim.age << endl;
    cout << "CNIC: " << victim.cnic << endl;
    cout << "Father's Name: " << victim.fatherName << endl;
    cout << "Gender: " << victim.gender << endl;
    cout << "Statement: " << victim.statement << endl;
    cout << "Affect: " << victim.affect << endl;
    cout << "Compensation: " << victim.compansation << endl;
    cout << "--------------------------------" << endl;
}

void Victim_data()
{
    const int MAX_VICTIMS = 100;
    Victim_input victims[MAX_VICTIMS];
    int n;
    cout << "Enter the number of Victims (max " << MAX_VICTIMS << "): ";
    cin >> n;
    if (n > MAX_VICTIMS || n <= 0)
    {
        cout << "Invalid number of victims. Please enter a number between 1 and " << MAX_VICTIMS << "." << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nVictim " << i + 1 << " Details:\n";
        inputData(victims[i]);
    }
    cout << "\nVictim Data:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails of Victim " << i + 1 << ":\n";
        displayData(victims[i]);
    }
    getch();
    cout << "Data displayed successfully.";
    system("cls");
}

void Admin_login()
{
    cout << "Admin login:" << endl;
    cout << "--------------------------------" << endl;
    cin.ignore();
    string namoo = "Anmol";
    string passo = "64136";
    string captcha = "hjkI";
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter your name: ";
        cin >> namoo;
        cout << "\nEnter your password: ";
        cin >> passo;
        cout << "\nEnter the captcha (hjkI): ";
        cin >> captcha;
        if (captcha == "hjkI" && namoo == "Anmol" && passo == "64136")
        {
            cout << "Login successful!" << endl;
            return;
        }
        else
        {
            cout << "Incorrect input. Please try again." << endl;
        }
    }
    cout << "Too many failed attempts. Exiting." << endl;
    exit(0);
}

struct Criminal
{
    string name;
    string fatherName;
    string cnic;
    string gender;
    string detention;
    string previousRecord;
    string crime;
    string dateOfBirth;
    float height;
};

void displayCriminalDetails(const Criminal &criminal)
{
    cout << "\nCriminal Found:\n";
    cout << "Name: " << criminal.name << endl;
    cout << "Date of Birth: " << criminal.dateOfBirth << endl;
    cout << "Father Name: " << criminal.fatherName << endl;
    cout << "CNIC: " << criminal.cnic << endl;
    cout << "Gender(M/F): " << criminal.gender << endl;
    cout << "Detention (Y/N): " << criminal.detention << endl;
    cout << "Previous Record: " << criminal.previousRecord << endl;
    cout << "Height(cm): " << criminal.height << endl;
    cout << "Crime: " << criminal.crime << endl;
}

bool searchCriminalsByName(const Criminal criminals[], int numCriminals, const string &searchName)
{
    for (int i = 0; i < numCriminals; i++)
    {
        if (criminals[i].name == searchName)
        {
            displayCriminalDetails(criminals[i]);
            return true;
        }
    }
    return false;
}

void updateCriminal(Criminal criminals[], int numCriminals, const string &searchName)
{
    bool found = false;
    for (int i = 0; i < numCriminals; i++)
    {
        if (criminals[i].name == searchName)
        {
            found = true;
            cout << "Criminal Found. Enter the fields you want to update:\n";
            cout << "New Name (Current: " << criminals[i].name << "): ";
            getline(cin, criminals[i].name);
            cout << "New Father Name (Current: " << criminals[i].fatherName << "): ";
            getline(cin, criminals[i].fatherName);
            cout << "New Crime (Current: " << criminals[i].crime << "): ";
            getline(cin, criminals[i].crime);
            cout << "Criminal record updated successfully." << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "Criminal not found." << endl;
    }
}

void deleteCriminal(Criminal criminals[], int &numCriminals, const string &searchName)
{
    bool found = false;
    for (int i = 0; i < numCriminals; i++)
    {
        if (criminals[i].name == searchName)
        {
            for (int j = i; j < numCriminals - 1; j++)
            {
                criminals[j] = criminals[j + 1];
            }
            numCriminals--;
            cout << "Criminal deleted successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Criminal not found." << endl;
    }
}

void displayRemainingCriminals(const Criminal criminals[], int numCriminals)
{
    cout << "\nRemaining Criminals:\n";
    for (int i = 0; i < numCriminals; i++)
    {
        displayCriminalDetails(criminals[i]);
    }
}

void Admin_criminal_menu()
{
    const int MAX_CRIMINALS = 100;
    Criminal criminals[MAX_CRIMINALS];
    int numCriminals = 3;
    criminals[0] = {"Laiba Altaf", "Muhammad Imran", "3465278907862", "F", "Y", "Kidnapping", "Robbery", "23-03-2006", 175.0};
    criminals[1] = {"Muhammad Ali", "Ahmad Iqbal", "3245798065424", "M", "N", "None", "Theft", "05-15-1990", 168.0};
    criminals[2] = {"Bilal Khan", "Muhammad Amir", "3421476890986", "M", "Y", "Drug Trafficking", "Murder", "10-11-1989", 180.0};
    int choice;
    do
    {
        cout << "\nCriminal Database Menu\n";
        cout << "1. Search Any Criminal Record\n";
        cout << "2. Update Criminal Record\n";
        cout << "3. Delete Criminal Record\n";
        cout << "4. Display All Criminals\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
        {
            string searchName;
            cout << "Enter the name of the criminal to search: ";
            getline(cin, searchName);
            if (searchCriminalsByName(criminals, numCriminals, searchName))
            {
                cout << endl;
            }
            else
            {
                cout << "Criminal not found." << endl;
            }
            break;
        }
        case 2:
        {
            string searchName;
            cout << "Enter the name of the criminal to update: ";
            getline(cin, searchName);
            updateCriminal(criminals, numCriminals, searchName);
            break;
        }
        case 3:
        {
            string searchName;
            cout << "Enter the name of the criminal to delete: ";
            getline(cin, searchName);
            deleteCriminal(criminals, numCriminals, searchName);
            displayRemainingCriminals(criminals, numCriminals);
            break;
        }
        case 4:
        {
            displayRemainingCriminals(criminals, numCriminals);
            break;
        }
        case 5:
            cout << "Exiting criminal menu...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
}

   int main()
{
    loading_bar();
    while (true)
    {
        intro_data();
        getch();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            Assistant_login();
            system("cls");
            cout << "--------------------------------" << endl;
            cout << "\n Menu for Police Assistant: " << endl;
            cout << "--------------------------------" << endl;
            cout << " 1. Criminal Data " << endl;
            cout << " 2. Police Data " << endl;
            cout << " 3. Victim Data " << endl;
            cout << " 4. Exit          " << endl;
            cout << "--------------------------------" << endl;
            cout << " Enter your choice:" << endl;
            int select;
            cin >> select;
            system("cls");
            switch (select)
            {
            case 1:
                Criminal_data();
                getch();
                break;
            case 2:
                Police_data();
                getch();
                break;
            case 3:
                Victim_data();
                getch();
                break;
            case 4:
                loading_bar();
                break;
            default:
                cout << "Invalid" << endl;
                break;
            }
        }
        else if (choice == 2)
        {
            Admin_login();
            system("cls");
            cout << "--------------------------------" << endl;
            cout << "\n Menu for Admin Menu: " << endl;
            cout << "--------------------------------" << endl;
            cout << " 1. Criminal Data " << endl;
            cout << " 2. Police Data " << endl;
            cout << " 3. Victim Data " << endl;
            cout << " 4. Exit          " << endl;
            cout << "--------------------------------" << endl;
            cout << " Enter your choice:" << endl;
            int select;
            cin >> select;
            system("cls");
            switch (select)
            {
            case 1:
                Admin_criminal_menu();
                break;
            case 2:
                Police_data();
                break;
            case 3:
                Victim_data();
                break;
            case 4:
                loading_bar();
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
            }
        }
        else if (choice == 3)
        {
            loading_bar();
            cout << "----------------------------------------------------------------------------------------";
            cout << "---------------------------  Thank  You  ----------------------------------------------";
            cout << "----------------------------------------------------------------------------------------";
            loading_bar();
            return 0;
        }
        else
        {
            cout << "Default" << endl;
        }
        system("cls");
    }
    return 0;
}
