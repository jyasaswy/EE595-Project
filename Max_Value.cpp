/*
 * Max_Value.cpp
 *
 *  Created on: May 8, 2020
 *      Author: jyasa
 */
#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#include <fstream>
#include<windows.h>
#include<string>
using namespace std;

int main(){

	ifstream readfile;
	readfile.open("OUT");
	string line,b;
	vector<long double> output;
	long double y;
	while(getline(readfile,line)){
			stringstream ss(line);

			getline(ss,b,' ');
			getline(ss,b,' ');
			//cout<<y<<endl;
			output.push_back(stod(b));

		}

	y=*max_element(output.begin(), output.end());
	cout<<"max value is "<<y;
	//system("jsim_n.exe");


}


