#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress){
std::string result;
if (macAddress.substr(0, 2)=="FF"){
    result="Broadcast";}
    

else if(macAddress[1]=='0'){
    result="Unicast";
    }
else if(macAddress[1]=='2'){
    result="Unicast";
    }

else if(macAddress[1]=='4'){
    result="Unicast";
    }
else if(macAddress[1]=='6'){
    result="Unicast";
    }
else if(macAddress[1]=='8'){
    result="Unicast";
    }
else if(macAddress[1]=='A'){
    result="Unicast";
    }    
else if(macAddress[1]=='C'){
    result="Unicast";
    }    
else if(macAddress[1]=='E'){
    result="Unicast";
    }    
else{
    result="Multicast";
    }
    
    return result;
}
