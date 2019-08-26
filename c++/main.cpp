#include<iostream>
using namespace std;
class Dist{
private:
      float feet,inc;
  public:
    Dist();
    void GetDist();
    void ShowDist();
   Dist AddDist(Dist D);
   Dist SubDist(Dist D);
};
Dist ::Dist(){
    feet=0;
    inc=0;
}
void Dist ::GetDist()
{
    cout<<"Enter dist in feets";

    cin>>feet;
    cout<<"Enter Dist in Inches (Enter Between 1-12(You Know Why))";
    cin>>inc;
}
void Dist ::ShowDist()
{
    cout<<"Distance is (feet)"<<feet;
    cout<<"Distance is (inc)"<<inc;
}
Dist Dist::AddDist(Dist D)
{
    Dist temp;
    temp.feet=feet+D.feet;
    temp.inc=inc+D.inc;
    if(temp.inc>=12)
    {
        temp.feet++;
        temp.inc-=12;

    }
    return temp;
}
Dist Dist::SubDist(Dist D)
{
    Dist temp;
    temp.feet=feet-D.feet;
    temp.inc=inc-D.inc;
    if(temp.inc<0)
    {
        temp.inc+=12;
        temp.feet--;
    }
    return temp;
}
int main()
{
    Dist a,b,c,d;
    a.GetDist();
    b.GetDist();
    c=a.AddDist(b);
    d=a.SubDist(b);
    c.ShowDist();
    d.ShowDist();



}
