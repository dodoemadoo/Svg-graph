#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int number1(0);
	int number2(0);
	int number3(0);
	int number4(0);

	ofstream fout;

	fout.open("rectline.svg");

	if (fout.fail())
	{
		cout << "File rectline.svg is not able to be opened.";
		return 1;
	}

	cout << "Please input your four numbers separated by spaces: " << endl;
	cin >> number1 >> number2 >> number3 >> number4;

	fout << "<?xml version=\"1.0\" standalone=\"no\"?>"<< endl;
	fout << "<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\"" << endl;
	fout << "\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">" << endl;
	fout << "<svg width=\"500\" height=\"500\"" << endl;
	fout << "xmlns=\"http://www.w3.org/2000/svg\">" << endl;

	fout << "<rect x=\"" << 0 <<"\" y=\"" << 300-number1 << "\" width=\"" << 25 << "\" height=\"" << number1 << "\" style=\"fill:blue;\"/>" << endl;
	fout << "<rect x=\"" << 25 << "\" y=\"" << 300-number2 << "\" width=\"" << 130 << "\" height=\"" << number2 << "\" style=\"fill:rgb(0,255,0);\"/>" << endl;
	fout << "<rect x=\"" << 155 <<"\" y=\"" << 300-number3 << "\" width=\"" << 25 << "\" height=\"" << number3 << "\" style=\"fill:blue;\"/>" << endl;
	fout << "<rect x=\"" << 180 << "\" y=\"" << 300-number4<< "\" width=\"" << 130 << "\" height=\"" << number4 << "\" style=\"fill:rgb(0,255,0);\"/>" << endl;

	fout << "<line x1=\"" << 0 << "\" y1=\"" << 0 << "\" x2=\"" << 0 << "\" y2=\"" << 300 << "\" style=\"stroke:purple;stroke-width:2\"/>" << endl;
	fout << "<line x1=\"" << 0 << "\" y1=\"" << 300 << "\" x2=\"" << 310 << "\" y2=\"" << 300 << "\" style=\"stroke:purple;stroke-width:2\"/>" << endl;

	fout << "</svg>" << endl;

	fout.close();
    return 0;
}
