#include "media.h"
#include <cstring>
#include <iostream>
using namespace std; 

Media::Media() {
    title = new char[100]; 
    year = 0;  

}

Media::Media(char* newtitle, int newyear) {
    title = new char[100]; 
    strcpy(title, newtitle);
    year = newyear;  
}

char* Media::gettitle() {
    return title;  
}

int Media::getInt() {
    return year;  
}

void Media::print() {
}
