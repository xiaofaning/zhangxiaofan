#include"Furnture.h"
int main()
{
	sofabed sofabed("金属",2400,2,"单人");
	cout<<"沙发床：主材料="<<sofabed.getMaterial()<<"价格="<<sofabed.getprice()<<"沙发座位数="sofabed.getseats()<<"床类型="<<sofabed.getbedtype()<<endl;
	return 0;
}