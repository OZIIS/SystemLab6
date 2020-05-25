#include <iostream>
#include <string>

using namespace std;
int main() {
	int number;
	string sexx;
	struct Information
	{
		string Name;
		string sex;
		int Vz;
		int Rst;
		int Vs;
		int VzMin, VzMax;
		int RstMin, RstMax;
		int VsMin, VsMax;
	};
	Information m[3];
	m[0] = { "Stas","m",20,173,75,18,22,150,170,45,65};
	m[1] = { "Oleg","m",26,190,95,18,25,150,180,45,75 };
	m[2] = { "Valera","m",23,180,65,18,22,150,175,45,65 };
	Information f[3];
	f[0] = { "Rita","f",18,160,50,18,25,165,185,70,90 };
	f[1] = { "Inna","f",25,175,65,25,31,180,190,70,90 };
	f[2] = { "Anna","f",23,182,75,29,190,200,80,100 };
	cout << "Input your sex" << endl;
	cin >> sexx;
	cout << "Input user number" << endl;
	cin >> number;
	if (sexx == "m") {
		for (int i = 0; i < 5; i++) {
			if (m[number].VzMin <= f[i].Vz && m[number].VzMax >= f[i].Vz && m[number].RstMin <= f[i].Rst && m[number].RstMax >= f[i].Rst && m[number].VsMin <= f[i].Vs && m[number].VsMax >= f[i].Vs)
			{
				cout << f[i].Name << endl;
			}
		}
	}
	else {
		if (sexx == "f") {
			for (int i = 0; i < 5; i++) {
				if (f[number].VzMin <= m[i].Vz && f[number].VzMax >= m[i].Vz && f[number].RstMin <= m[i].Rst && f[number].RstMax >= m[i].Rst && f[number].VsMin <= m[i].Vs && f[number].VsMax >= m[i].Vs)
				{
					cout << "Your pare maybe:" << endl;
					cout << f[i].Name << endl;
				}
			}
		}
		else { cout << "Error"; }

	}

	return 0;
}