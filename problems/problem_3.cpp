#include <string>

std::string problemSolution3(float height, char S) {
std::string result;   
switch (S) {
        case 'F':
            if (height<1.6) {
            result="Short";}
            else if (height<1.75){
                result="Normal"}
            else {
                result="Tall"
            }
        break;
        case 'M':
             if (height<1.7) {
            result="Short";}
            else if (height<1.85){
                result="Normal"}
            else {
                result="Tall"
            }
        break;
    }
    return result;
    
   
