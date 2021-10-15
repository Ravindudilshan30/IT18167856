class Supervisor
{
private:
    string SupervisorId;
    string SupervisorName;
    string SupervisorEmail;
    int SupervisorTele;

public:
    void registerPhotographer();
    void viewClientReq();
    void assignPhotographer();
    void checkPhotographerAvail();

    //setters

    void setSupervisorId(int id)
    {
        SupervisorId = id;
    }

    void setSupervisorName(string name)
    {
        SupervisorName = name;
    }

    void setSupervisorEmail(string email)
    {
        SupervisorEmail = email;
    }

    void setSupervisorTele(int tele)
    {
        SupervisorTele = tele;
    }

    //getters
    string getSupervisorName()
    {
        return SupervisorName;
    }
    string getSupervisorEmail()
    {
        return SupervisorEmail;
    };
    string getSupervisorIC()
    {
        return SupervisorId;
    }
    int getSupervisorTele()
    {
        return SupervisorTele;
    }

    //constructor
    Supervisor()
    {
    }
    Supervisor(string name, string nic, string email, int tele)
    {

        SupervisorName = name;
        SupervisorId = nic;
        SupervisorTele = tele;
        SupervisorEmail = email;
    }
};