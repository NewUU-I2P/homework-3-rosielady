#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress){
std::string result;
if (macAddress.substr(0, 2)=="FF"){
    result="Broadcast";}
    break;

if(macAddress[1]==0){
    result="Unicast";
    }
if(macAddress[1]==2){
    result="Unicast";
    }

if(macAddress[1]==4){
    result="Unicast";
    }
if(macAddress[1]==6){
    result="Unicast";
    }
if(macAddress[1]==8){
    result="Unicast";
    }
if(macAddress[2]==A){
    result="Unicast";
    }    
if(macAddress[2]==C){
    result="Unicast";
    }    
if(macAddress[2]==E){
    result="Unicast";
    }    
else{
    result="Multicast";
    }
}
    

    
    return result;
}
