int i=0,j=0,k;
class dimention
{	
  String name;float length,breadth,height,volume,diameter;
	public:
	void cube_getter()
	{
    while(Serial.available()==0){}
    name=Serial.readString();
    while(Serial.available()==0){}
    length=Serial.parseFloat();
		breadth=0;height=0;diameter=0;
		volume=length*length*length;
		i++;
	}
	void cuboid_getter()
	{
		while(Serial.available()==0){}
    name=Serial.readString();
    while(Serial.available()==0){}
    length=Serial.parseFloat();
    while(Serial.available()==0){}
    breadth=Serial.parseFloat();
    while(Serial.available()==0){}
    height=Serial.parseFloat();
		diameter=0;
		volume=length*breadth*height;
		i++;
	}
	void cone_getter()
	{
		while(Serial.available()==0){}
    name=Serial.readString();
    while(Serial.available()==0){}
    diameter=Serial.parseFloat();
    while(Serial.available()==0){}
    height=Serial.parseFloat();
		i++;length=0;breadth=0;
		volume=3.1416*(diameter/2)*(diameter/2)*(height/3);
	}
	void cylinder_getter()
	{
		while(Serial.available()==0){}
    name=Serial.readString();
    while(Serial.available()==0){}
    diameter=Serial.parseFloat();
    while(Serial.available()==0){}
    height=Serial.parseFloat();
		length=0;breadth=0;
		volume=3.1416*(diameter/2)*(diameter/2)*height;i++;
	}
	void sphere_getter()
	{
    
		while(Serial.available()==0){}
    name=Serial.readString();
    while(Serial.available()==0){}
    diameter=Serial.parseFloat();
		i++;length=0;breadth=0;height=0;
		volume=4*3.1416*(diameter/2)*(diameter/2)*(diameter/2)/3;
	}
	static void setter_print()
	{
		Serial.println("name   length");
	}
	void setter()
	{
    Serial.print("Name of the object:     ");Serial.println(name);
    Serial.print("Length of the object:   ");Serial.println(length);
    Serial.print("Breadth of the object:  ");Serial.println(breadth);
    Serial.print("Height of the object:   ");Serial.println(height);
    Serial.print("Diameter of the object: ");Serial.println(diameter);
    Serial.print("Volume of the object:   ");Serial.println(volume);
	}
	static void print()
	{
		/*cout<<"\t\t\t\t________________________\t\t\t\t"<<endl;
		cout<<"\t\t\t\t Auto Dimention Counter \t\t\t\t"<<endl;
		cout<<"\t\t\t\t________________________\t\t\t\t"<<endl;
		cout<<"1) Calculate My Object Dimention:-"<<endl;
		cout<<"2) Show previous Entry :-"<<endl;
		cout<<"3) Remove a Unwanted Entry:-"<<endl;
		cout<<"4) Exit:-"<<endl<<endl<<endl;
		cout<<"Make Your Choice"<<endl;*/
    Serial.println("\t\t\t\t________________________\t\t\t\t");
    Serial.println("\t\t\t\t Auto Dimention Counter \t\t\t\t");
    Serial.println("\t\t\t\t________________________\t\t\t\t");
    Serial.println("1) Calculate My Object Dimention:-");
    Serial.println("2) Show previous Entry :-");
    Serial.println("3) Remove a Unwanted Entry:-");
    Serial.println("4) Exit:-");
    Serial.println("make your choice");
	}
	static void print_2()
	{/*
		cout<<".........("<<k<<").........."<<endl;
		cout<<"1) Cube"<<endl;
		cout<<"2) Cuboid"<<endl;
		cout<<"3) Cone"<<endl;
		cout<<"4) Cylinder"<<endl;
		cout<<"5) Sphere"<<endl<<endl<<endl;
		cout<<"Make Your Choice"<<endl;k++;*/
    Serial.println(".........(");Serial.println(k);Serial.println(")..........");
    Serial.println("1) Cube");
    Serial.println("2) Cuboid");
    Serial.println("3) Cone");
    Serial.println("4) Cylinder");
    Serial.println("5) Sphere");
    Serial.println("make your choice");k++;
	}
};
void setup(){
  Serial.begin(9600);
	dimention a[30]; int n,x=1,q,p;
	while(x==1){
		dimention::print();
    while(Serial.available()==0){}
		p=Serial.parseInt();Serial.println(p);
		if(p==1){
			Serial.println("Number of Objects Wanna add: ");
			while(Serial.available()==0){}
      n=Serial.parseInt();Serial.println(n);k=1;
			while(n--){
				dimention::print_2();
        while(Serial.available()==0){}
				q=Serial.parseInt();Serial.println(q);
				if(q==1)
					a[i].cube_getter();
				else if(q==2)
					a[i].cuboid_getter();
				else if(q==3)
					a[i].cone_getter();
				else if(q==4)
					a[i].cylinder_getter();
				else if(q==5)
					a[i].sphere_getter();
			}
		}
		else if(p==2){
			dimention::setter_print();
			for(j=0;j<i;j++){
				a[j].setter();
			}
		}
		else if(p==4)
			x=0;
	}
}
void loop(){

}





