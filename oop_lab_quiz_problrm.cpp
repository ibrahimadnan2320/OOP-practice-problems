#include<iostream>
using namespace std;

class soldier {
private:
	string soldier_id;
	string s_name;
	int s_b_salary;
	int s_rank;
	int s_t_missions;
	int s_s_missions;

public:
	int f_misson;
	int m_bonus;
	int f_salary;

	void set(string a, string b, int c, int d, int e, int f) {
		soldier_id = a;
		s_name = b;
		s_b_salary = c;
		s_rank = d;
		s_t_missions = e;
		s_s_missions = f;
	}

	string get_soldierid() {
		return soldier_id;
	}

	string get_soldiername() {
		return s_name;
	}

	int get_basicsalary() {
		return s_b_salary;
	}

	int get_soldierrank() {
		return s_rank;
	}

	int get_totalmissions() {
		return s_t_missions;
	}

	int get_successfulmissions() {
		return s_s_missions;
	}

	friend void cal_per(soldier &sol1);

	void display() {
		cout << "ID : " << soldier_id
		     << "\nName : " << s_name
		     << "\nBasic Salary : " << s_b_salary // ADDED: " : " so value doesn't stick to label
		     << "\nRank : " << s_rank
		     << "\nSoldier Total Missons : " << s_t_missions
		     << "\nSuccessfull Soldier Missons : " << s_s_missions
		     << "\n\n\nFailed Mission : " << f_misson
		     << "\nMission Bonus : " << m_bonus // ADDED: display calculated bonus
		     << "\nTotal Salary : " << f_salary; // ADDED: display calculated total salary
	}
};

void cal_per(soldier &sol1) {
	sol1.f_misson = sol1.s_t_missions - sol1.s_s_missions;
	sol1.m_bonus = sol1.s_s_missions * 5000;
	sol1.f_salary = sol1.m_bonus + sol1.s_b_salary;
}

int main() {
	soldier s1;
	s1.set("F2025266213", "Ahmad", 69696969, 1, 1000, 900);
	cal_per(s1);
	s1.display(); 
	return 0;
}
