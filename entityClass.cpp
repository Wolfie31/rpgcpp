#include"includes/entityClass.h"
#include<iostream>
#include<string>
#include<iostream>
using namespace std;

/*
TYPES:

0:npc (character)
1:pc (unused atm)
2: obj (object, obstacle)
3: cosobj (transparent object, eg. grass, flowers, doorway etc)

*/



//entity Funtions
entity::entity(string name){

        std::cout << name << endl;


        /*switch (type)
        {
        case  0:
        {
            npc npc(name, 1);
            cout << "npc created" << endl;
            break;
        }
        case 1:
        {
            pc pc;
            break;
        }
        case 2:
        { 
            obj obj;
            break;
        }
        case 3:
        {
            cosobj cosobj;
            break;
        }
        default:
            break;
        }
        */

}  


//Type classes:


//type 0: npc methods


//npc constructor
npc::npc(string newName,  int level){
    name = newName;
    cout << "created npc named: " << name << ", starting at level: " << level << endl;
}

//npc, print information about stats

void npc::getInfo(){
    cout << "Name: " << name << endl << "Level: " << level << endl;
}

//npc change name method

void npc::setName(std::string newName){

}






//Job functions
job::job(int input){
    jobName = joblist[input];
}



