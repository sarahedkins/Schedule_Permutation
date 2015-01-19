#include <iostream>
#include <vector>

using namespace std;

class course {
private: 
	string name = "N/A";
	int section_num = 0;
	vector<pair<int, string>> days_and_times;
public: 
	course(string name_it, int section);
	void setName(string call_me_this);
	string getName();
	void set_section_num(int this_number);
	int get_section_num();
	void add_day_time(pair<int, string> my_pair);
	vector<pair<int, string>> get_days_and_times();
};

int main() {

	/* How do we get information from the mySQL database 
	to use in this program??? 
	*/

	system("pause");
	return 0;
}

course::course(string name_it, int section){
	name = name_it;
	section_num = section;
}

void course::setName(string call_me_this){
	name = call_me_this;
}

string course::getName(){
	return name;
}

void course::set_section_num(int this_number){
	section_num = this_number; 
}

int course::get_section_num(){
	return section_num;
}

void course::add_day_time(pair<int, string> my_pair){
	days_and_times.push_back(my_pair);
}

vector<pair<int, string>> course::get_days_and_times(){
	return days_and_times;
}