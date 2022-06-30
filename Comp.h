#include <iostream>
#include <string>

class Comp
{
    private:
        int ip;
        std::string proc;
        int mem;
    public:
        Comp();
        Comp(const Comp &obj);
        Comp(int _ip, const std::string& _proc, int _mem);
        int get_ip() const;
        std::string get_proc() const;
        int get_mem() const;
        void set_ip(int new_ip);
        void set_proc(std::string new_proc);
        void set_mem(int new_mem);
        void show();
};      
