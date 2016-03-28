class animal
{
public:
    animal(int wght):weight(wght){};
    ~animal(){};

    int get_weight(){ return weight;}

private:
    int weight = 2;
};

int main()
{
    int a {0};
    animal Animal(122);
    a = Animal.get_weight();
    return 0;
}
