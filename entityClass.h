#include<string>
class entity{
    public:
        std::string name;
        int type;
        
        entity(std::string, int);
        
};

class npc: public entity{
    public:
        int level;
        std::string name;
        npc(std::string, int);
        void getInfo();
        void setName(std::string);
        void setJob(int);
        void generateStats();
};

class pc{

};

class obj{

};

class cosobj{

};


class job{
    public:
        std::string joblist[4] = {"fighter", "archer", "mage", "healer"};
        std::string jobName;
        job(int);
        void printJobs();
};