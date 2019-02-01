#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Informatin
{
public:
    int day, month,year,match,wicket,run;
    Informatin() {}
    Informatin(int p, int q, int r,int t, int w, int z)
    {
        day = p;
        month = q;
        year = r;
        match=t;
        wicket=w;
        run=z;

    }
    void show();
      int putyear()
    {
       return year;
    }
};
 void Informatin::show()
    {
        cout<<"Date of birth : "<<day<<"."<<month<<"."<<year<<endl;
        cout<<"Match : "<<match<<endl;
        cout<<"Wicket : "<<wicket<<endl;
        cout<<"Runs : "<<run<<endl;
    }

class Person
{
public:
    string name;
    Informatin Iob;
    void getData(string name, Informatin data)
    {
        this->name = name;
        Iob = data;
    }
    int fun()
    {
        return Iob.putyear();
    }
    void putData();
};
 void Person :: putData()
    {
        cout<<"Name : "<<name<<endl;
        Iob.show();
    }
class Cricketer: public Person,public Informatin
{
public:
    Informatin Iop;
    string category;
    void getCricketer(string na, Informatin duc, string category)
    {
        getData(na, duc);
        this->category = category;
    }
    string getcategory()
    {
        return category;
    }
    int fun1()
    {
        return fun();
    }
    void putInfo();
};
 void Cricketer :: putInfo()
    {
        putData();
        cout<<"Player Category : "<<category<<endl;
    }
int main()
{
    Cricketer obj[15];
    ll c1=0,c2=0,c3=0,c4=0;
    obj[0].getCricketer("Tamim Iqbal",Informatin(12,107,1923,150,0,5600), "keeper");
    obj[1].getCricketer("Mehedi Hasan Miraz",Informatin(2,10,1996,50,80,560), "spinbowler");
    obj[2].getCricketer("Mostafizur_Rahman",Informatin(11,06,1997,74,145,150), "fastbowler");
    obj[3].getCricketer("Masrafi Mortaja",Informatin(5,1,1991,220,350,1400), "fastbowler");
    obj[4].getCricketer("Musfikur Rahim",Informatin(19,06,1994,203,0,6500), "batsman");
    obj[5].getCricketer("Imrul_kayes",Informatin(2,12,1992,135,0,4100), "batsman");
    obj[6].getCricketer("Sakib_al Hassan",Informatin(5,11,1993,201,264,5600), "batsman");
    obj[7].getCricketer("Mithun_Hossain",Informatin(23,10,1995,11,0,360), "batsman");
    obj[8].getCricketer("Liton_Das",Informatin(30,12,1996,36,0,1123), "keeper");
    obj[9].getCricketer("Nasir_Hossain",Informatin(15,10,1994,120,76,2900), "batsman");
    obj[10].getCricketer("Sabbir_Rahman",Informatin(11,9,1995,76,45,1200), "batsman");
    obj[11].getCricketer("Mominul",Informatin(16,12,1996,43,17,630), "batsman");
    obj[12].getCricketer("Rubel_Ahamed",Informatin(22,8,1995,156,220,296), "fastbowler");
    obj[13].getCricketer("Rony",Informatin(25,05,1996,15,21,54), "fastbowler");
    obj[14].getCricketer("Anamul Haque",Informatin(14,06,1995,23,0,534), "keeper");
    Cricketer ar[8];
    int t=0;
    for(int i=0; i<15; i++)
    {
        if(obj[i].getcategory()=="keeper" && (2018-obj[i].fun1()>20) && (2018-obj[i].fun1()<30)&& c1<1)
        {
            ar[t] = obj[i];
            c1++;
            t++;
        }
        if(obj[i].getcategory()=="fastbowler" && (2018-obj[i].fun1()>20) && (2018-obj[i].fun1()<30) && c2<2)
        {
            ar[t] = obj[i];
            c2++;
            t++;
        }
        if(obj[i].getcategory()=="spinbowler" && (2018-obj[i].fun1()>20) && (2018-obj[i].fun1()<30) && c3<1)
        {
            ar[t] = obj[i];
            c3++;
            t++;
        }
        if(obj[i].getcategory()=="batsman"  && (2018-obj[i].fun1()>20) && (2018-obj[i].fun1()<30) && c4<4)
        {
            ar[t] = obj[i];
            c4++;
            t++;
        }
    }
    ll cnt=1;
    for(int i = 0; i < t; i++)
    {
        cout<<"Player No. : "<<cnt<<endl;
        ar[i].putInfo();
        cout<<endl;
        cout<<endl;
        cnt++;
    }
    return 0;
}
