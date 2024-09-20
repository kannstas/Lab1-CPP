// Lab_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string name;
//	cout << "What is your name? ";
//	getline(cin, name);
//	cout << "Hello, " << name << "!\n";
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	double a, b; cout << "Ââåäèòå a è b:\n";
//	cin >> a; // ââîä ñ êëàâèàòóðû çíà÷åíèÿ a
//	cin >> b; // ââîä ñ êëàâèàòóðû çíà÷åíèÿ b
//	double x = a / b; // âû÷èñëåíèå çíà÷åíèÿ x
//	cout.precision(3);
//	//cout << "\nx = " << setprecision(3)<< x << endl; //åñòü ïðîáëåìà
//	cout << "\nx = " << x << endl; //âûâîä ðåçóëüòàòà íà ýêðàí
//	cout << sizeof(a / b) << ends << sizeof(x) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	string name;
//	cout << "Ââåäèòå ñâîå èìÿ\n";
//	double a, b;
//	cout << "Ââåäèòå a è b:\n";
//	cin >> a;
//	cin >> name;
//	cin >> b;
//	double x = a / b;
//	cout << "\nx = " << x << endl;
//	cout << "Ïðèâåò, " << name << "!\n";
//	return 0;
//}

//#include <iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	int p;
//	double s;
//	cout << "Ââåäèòå ïåðèìåòð\n";
//	cin >> p;
//	s = sqrt(p * (p - p / 3) * (p - p / 3) * (p - p / 3));
//	cout.precision(2);
//	cout << "Side" << "    Square\n";
//	cout << p/3 << "       "<<s;
//
//}

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
    double res;
    cout << "Enter two coordinates for the FIRST point\n"<<"x:\n";
    cin >> x1;
    cout << "y:\n";
    cin >> y1;
    cout << "Enter two coordinates for the SECOND point\n" << "x:\n";
    cin >> x2;
    cout << "y:\n";
    cin >> y2;
    cout << "Enter two coordinates for the THIRD point\n" << "x:\n";
    cin >> x3;
    cout << "y:\n";
    cin >> y3;
    cout << "Enter two coordinates for the FOURTH point\n" << "x:\n";
    cin >> x4;
    cout << "y:\n";
    cin >> y4;
    cout << "Enter two coordinates for the FIFTH point\n" << "x:\n";
    cin >> x5;
    cout << "y:\n";
    cin >> y5;
    res = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5  * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5);
    cout << "Square: "<< res;
}
