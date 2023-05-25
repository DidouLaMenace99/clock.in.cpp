#include "clock.h"

int getSeconde(tm *time) {
    return time->tm_sec;
}

int getMinutes(tm *time) {
    return time->tm_min;
}

int getHours(tm *time) {
    return time->tm_hour;
}

int getDay(tm *time) {
    return time->tm_mday;
}

int getMonth(tm *time) {
    return time->tm_mon;
}

int getYear(tm *time) {
    return time->tm_year + 1900;
}

int getTime() {
    chrono::system_clock::time_point now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);

    tm *time = localtime(&currentTime);

    int seconde = getSeconde(time);
    int minutes = getMinutes(time);
    int hours = getHours(time);
    int day = getDay(time);
    int month = getMonth(time);
    int year = getYear(time);

    // milliseconds
    int ms = chrono::duration_cast<chrono::milliseconds>(now.time_since_epoch()).count() % 1000;    

    cout << "Current time: " << hours << ":" << minutes << ":" << seconde << ":" << ms << "  " << day << "/" << month << "/" << year << endl;

    return 0;
}