#include<iostream>
#include<string>
using namespace std;
class Furnture
{
	string mat;
	double price;
public:
	Furnture(string mat,double price):mat(mat),price(price){}
	string getMaterial(){return mat;}
	double getprice(){return price;}
};
class sofa:virtual public Furnture
		  {
			  int seats;
public:
	sofa(string mat, double price,int seats):Furture(mat price),seats(seats){}
	int getseats(){return seats;}
		  };
		  class bed:virtual public Furture
		  {
			  string bedtype
		  public:
			  bed(string met,double price,string bedtype):
			  Furture(met,price),bedtype(bedtppe){}
			  string getbedtype{return bedtype;}


		  };
		  class sofabed:public sofa,public bed
		  {
		  public:
			  sofabed(string met,double price,int seats,string bedtype):
				Furture(met,price),sofa(met,price,seats),bed(met,price,bedtype){}
				
		  }
