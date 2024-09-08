#include<iostream>
#include<Windows.h>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

class Student
{
    char* name;
    Date birthDate;
    char* phoneNumber;
    char* city;
    char* country;
    char* nameSchool;
    int groupNumber;
public:
    Student()
    {
        name = nullptr;
        birthDate.day = birthDate.month = birthDate.year = 0;
        phoneNumber = nullptr;
        city = nullptr;
        country = nullptr;
        nameSchool = nullptr;
        groupNumber = 0;
    }
    Student(const char* nameA, int day, int month, int year, const char* phone, const char* cityA, const char* countryA, const char* school, int group)
    {
        name = new char[strlen(nameA) + 1];
        strcpy_s(name, strlen(nameA) + 1, nameA);

        birthDate.day = day;
        birthDate.month = month;
        birthDate.year = year;

        phoneNumber = new char[strlen(phone) + 1];
        strcpy_s(phoneNumber, strlen(phone) + 1, phone);

        city = new char[strlen(cityA) + 1];
        strcpy_s(city, strlen(cityA) + 1, cityA);

        country= new char[strlen(countryA) + 1];
        strcpy_s(country, strlen(countryA) + 1, countryA);

        nameSchool = new char[strlen(school) + 1];
        strcpy_s(nameSchool, strlen(school) + 1, school);

        groupNumber = group;
    }

    void Input()
    {
        char tempName[100];
        char tempPhoneNumber[100];
        char tempCity[100];
        char tempCountry[100];
        char tempNameSchool[100];

        cout << "Enter name: ";
        cin.getline(tempName, 100);
        cout << "Enter phone number: ";
        cin.getline(tempPhoneNumber, 100);
        cout << "Enter city: ";
        cin.getline(tempCity, 100);
        cout << "Enter country: ";
        cin.getline(tempCountry, 100);
        cout << "Enter school name: ";
        cin.getline(tempNameSchool, 100);
        cout << "Enter group number: ";
        cin >> groupNumber;
        cout << "Enter birth day: day -  ";
        cin >> birthDate.day;
        cout << "Month - ";
        cin >> birthDate.month;
        cout << "Year - ";
        cin >> birthDate.year;
        cin.ignore();

        if (name != nullptr)
        {
            delete[] name;
        }
        name = new char[strlen(tempName) + 1];
        strcpy_s(name, strlen(tempName) + 1, tempName);

        if (phoneNumber != nullptr)
        {
            delete[] phoneNumber;
        }
        phoneNumber = new char[strlen(tempPhoneNumber) + 1];
        strcpy_s(phoneNumber, strlen(tempPhoneNumber) + 1, tempPhoneNumber);

        if (city != nullptr)
        {
            delete[] city;
        }
        city = new char[strlen(tempCity) + 1];
        strcpy_s(city, strlen(tempCity) + 1, tempCity);

        if (country != nullptr)
        {
            delete[] country;
        }
        country = new char[strlen(tempCountry) + 1];
        strcpy_s(country, strlen(tempCountry) + 1, tempCountry);

        if (nameSchool != nullptr)
        {
            delete[] nameSchool;
        }
        nameSchool = new char[strlen(tempNameSchool) + 1];
        strcpy_s(nameSchool, strlen(tempNameSchool) + 1, tempNameSchool);
    }
    void Output()
    {
        cout << "Student info: " << endl
            << "Name: " << name << endl
            << "BirthDate: " << birthDate.day << "/" << birthDate.month << "/" << birthDate.year << endl
            << "Phone number: " << phoneNumber << endl
            << "City: " << city << endl
            << "Country: " << country << endl
            << "School name: " << nameSchool << endl
            << "Group number: " << groupNumber << endl;
    }

    void SetName(const char* nameA)
    {
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(nameA) + 1];
        strcpy_s(name, strlen(nameA) + 1, nameA);
    }
    void SetDate(int day, int month, int year)
    {
        birthDate.day = day;
        birthDate.month = month;
        birthDate.year = year;
    }
    void SetPhone(const char* phone)
    {
        if (phoneNumber != nullptr)
        {
            delete[] phoneNumber;
        }
        phoneNumber = new char[strlen(phone) + 1];
        strcpy_s(phoneNumber, strlen(phone) + 1, phone);
    }
    void SetCity(const char* cityA)
    {
        if (city != nullptr)
        {
            delete[] city;
        }
        city = new char[strlen(cityA) + 1];
        strcpy_s(city, strlen(cityA) + 1, cityA);
    }
    void SetCountry(const char* countryA)
    {
        if (country != nullptr)
        {
            delete[]country;
        }
        country = new char[strlen(countryA) + 1];
        strcpy_s(country, strlen(countryA) + 1, countryA);
    }
    void SetSchoolName(const char* school)
    {
        if (nameSchool != nullptr)
        {
            delete[]nameSchool;
        }
        nameSchool = new char[strlen(school) + 1];
        strcpy_s(nameSchool, strlen(school) + 1, school);
    }
    void SetGroupNumber(int group)
    {
        groupNumber = group;
    }

    const char* GetName()
    {
        return name;
    }
    Date GetBirthDate()
    {
        return birthDate;
    }
    const char* GetPhoneNumber()
    {
        return phoneNumber;
    }
    const char* GetCity()
    {
        return city;
    }
    const char* GetCountry()
    {
        return country;
    }
    const char* GetNameSchool()
    {
        return nameSchool;
    }
    int GetGroupNumber()
    {
        return groupNumber;
    }

    ~Student()
    {
        delete[] name;
        delete[] phoneNumber;
        delete[] city;
        delete[] country;
        delete[] nameSchool;
    }
};

int main()
{
    Student s1;
    s1.Input();
    s1.Output();

    /*s1.SetName("Anna");
    s1.Output();*/
    /*s1.SetDate(1, 10, 2003);
    s1.Output();*/

    /*Date bDate = s1.GetBirthDate();
    cout << "BirthDate: " << bDate.day << "/" << bDate.month << "/" << bDate.year << endl;
    cout << s1.GetCity() << endl;
    cout << s1.GetGroupNumber();*/

    return 0;
}
