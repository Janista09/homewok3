#include <iostream>
using namespace std;
int main()
{
	float q1, q2, q3;
	float mid, final, quizztotal;
	float total, scoretotal;
	cout << "=================QUIZZES=====================" << endl;

	cout << "Enter frist quizz  (10) : ";
	cin >> q1;
	cout << "Enter second quizz (10) : ";
	cin >> q2;
	cout << "Enter third quizz  (10) : ";
	cin >> q3;

	cout << "=================MID-TERM====================" << endl;
	cout << "Enter mid-term (40) : ";
	cin >> mid;

	cout << "=================FINAL=======================" << endl;
	cout << "Enter final (50) : ";
	cin >> final;

	quizztotal = (q1+q2+q3) /3;
	scoretotal = quizztotal + mid + final;

	cout << "Quizz Total : " << quizztotal << endl;
	cout << "Mid term : " << mid << endl;
	cout << "Final  : " << final << endl;
	cout << "Total  : " << scoretotal << endl;
	cout << "Your score is " << (scoretotal >= 50? "PASS" : "FAIL ") <<endl;

	system ("pause");
	return(0);
}
