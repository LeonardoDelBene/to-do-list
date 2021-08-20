//
// Created by leonardo Del Bene on 20/08/21.
//

#include "Date.h"

void Date::setYear(int year) {
    if (year<0)
        throw (std::out_of_range("OUT OF RANGE"));
    else
        Date::year = year;
}

void Date::setMonth(int month) {
    if (month<=0 || month>=13)
        throw std::out_of_range("OUT OF RANGE");
    else
        Date::month = month;
}

void Date::setDay(int day) {
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        if (day<=0 || day>=32)
            throw (std::out_of_range("OUT OF RANGE"));
        else
            Date::day = day;
    }
    else if (month==4||month==6||month==9||month==11) {
        if (day <= 0 || day >= 31)
            throw std::out_of_range("OUT OF RANGE");
        else
            Date::day = day;
    } else if (month==2){
        if ((year%4)==0){
            if (day<=0|| day>=30)
                throw (std::out_of_range("OUT OF RANGE"));
            else
                Date::day = day;
        }
        else if (day<=0|| day>=29){
            throw (std::out_of_range("OUT OF RANGE"));
        }
        else
            Date::day = day;
    }
}

void Date::setHour(int hour) {
    if (hour<0 || hour>23)
        throw (std::out_of_range("OUT OF RANGE"));
    else
        Date::hour=hour;
}

void Date::setMinute(int minute) {
    if (minute<0 || minute>59)
        throw (std::out_of_range("OUT OF RANGE"));
    else
        Date::minute = minute;
}
