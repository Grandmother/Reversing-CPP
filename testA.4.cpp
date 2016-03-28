class Parent
{
public:
    Parent(){}
    virtual ~Parent(){}

    virtual void initA(int a){ _a = a;}

private:
    int _a = 0;
};

class Child : public Parent
{
public:
    Child(){}
    virtual ~Child(){}

    virtual void initA(int a){Parent::initA(a + 10);}
};

int main()
{
    Child* ch_ptr = new Child();
    Parent* par_ptr = new Child();

    ch_ptr->initA(12);
    par_ptr->initA(15);

    delete ch_ptr;
    delete par_ptr;

    return 0;
}
