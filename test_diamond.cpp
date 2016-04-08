
class Grand
{
public:
    Grand(){}
    virtual ~Grand(){}

    int value = 0;
};

class Mother
{
public:
    Mother(){}
    virtual ~Mother(){}
};

class Father
{
public:
    Father(){}
    virtual ~Father(){}
};

class Child : public Mother, public Father
{
public:
    Child(){}
    virtual ~Child(){}
};


int main ()
{
    Father* f_ptr = new Child;

    delete f_ptr;
    return 0;
}
