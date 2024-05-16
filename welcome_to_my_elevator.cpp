#include <iostream>
using namespace std;
class Elevator
{
private:
	int elNum; // elevator number
	int currentFloor; // current floor
	int highestFloor; // highest floor
public:
	Elevator(int = 1, int = 1, int = 15); // constructor
	void request(int);
};
Elevator::Elevator(int elNum, int currentFloor, int highestFloor){
	this->elNum=elNum;
	if(currentFloor<=0){
		currentFloor=1;
	}
	if(highestFloor<=0){
		highestFloor=1;
	}
	this->currentFloor=currentFloor;
	this->highestFloor=highestFloor;
}
void Elevator:: request(int floor){
	if(floor>highestFloor||floor<=0){
		cout<<"nonexist floor"<<endl;
		cout<<"*****************************************************"<<endl;
	}
	else if(floor==currentFloor){
		cout<<"current floor is "<<floor<<endl;
		cout<<"*****************************************************"<<endl;
	}
	else if(floor>currentFloor){
		cout<<"the currentFloor is "<<currentFloor<<endl;
		cout<<"the elevator begin rising up ......"<<endl;
		while(currentFloor<=floor){
			currentFloor++;
			cout<<"the currentFloor is "<<currentFloor<<endl;
		}
		cout<<"the elevator stop at "<<currentFloor<<endl;
		cout<<"*****************************************************"<<endl;
	}
	else{
		cout<<"the currentFloor is "<<currentFloor<<endl;
		cout<<"the elevator begin going down ......"<<endl;
		while(currentFloor<=floor){
			currentFloor--;
			cout<<"the currentFloor is "<<currentFloor<<endl;
		}
		cout<<"the elevator stop at "<<currentFloor<<endl;
		cout<<"*****************************************************"<<endl;
	}
}
int main(){
	int elNum; // elevator number
	int currentFloor; // current floor
	int highestFloor; // highest floor
	int floor;
	cout<<"please enter the elevator number,current floor and highest floor:"<<endl;
	cin>>elNum>>currentFloor>>highestFloor;
	Elevator ele(elNum,currentFloor,highestFloor);
	cout<<"elevator "<<elNum<<", highestFloor is "<<highestFloor<<", current in "<<currentFloor<<" floor"<<endl;
	while(1){
		cout<<"choose the floor you want to go, enter -1 to leave the elevator: "<<endl;
		cin>>floor;
		if(floor==-1){
			break;
		}
		ele.request(floor);
		
	}
	cout<<"Welcome to take the elevator again!"<<endl;
	return 0;
}
