class Single
{
public:
    Single(){}
    ~Single(){}

private:
    int prvVar {0xabc};
public:
    int pubVar {0xabd};
};

// Inheritance without vurtual methods.
class Parent
{
public:
    Parent(){}
    ~Parent(){}

private:
    int prvVar {0xbcd};
public:
    int pubVar {0xbce};
};

class Child : public Parent
{
public:
    Child(){}
    ~Child(){}

private:
    int prvVar {0xcde};
public:
    int pubVar {0xcdf};
};

// Virtual methods.
class VirtualParent
{
public:
    VirtualParent(){}
    virtual ~VirtualParent(){}

private:
    int prvVar {0xdef};
public:
    int pubVar {0xdea};
};

// Inheritance with virtual methods.
class VirtualChild : public VirtualParent
{
public:
    VirtualChild(){}
    virtual ~VirtualChild() override{}
private:
    int prvVar {0xefa};
public:
    int pubVar {0xefb};
};

int main()
{
    Single single;
    Parent parent;
    Child child;

    VirtualParent vparent;
    VirtualChild vchild;
}
