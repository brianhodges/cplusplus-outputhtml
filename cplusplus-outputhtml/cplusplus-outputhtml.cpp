// cplusplus-outputhtml.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "stdafx.h"
#include "Vehicle.h"
using namespace std;


int main(int argc, const char * argv[]) {
	Vehicle v1, v2, v3;
	v1.SetValues("Porsche", "911", "2018", 90000.00);
	v2.SetValues("Infiniti", "Q60", "2018", 45000.00);
	v3.SetValues("Honda", "Civic", "2018", 30000.00);
	
	vector<Vehicle> vehicles = { v1, v2, v3 };
	
	ofstream html_file("index.html");
	html_file << "<!DOCTYPE html>"
				"<html>"
					"<head>"
						"<script src=\"./js/jquery-3.2.1.min.js\"></script>"
						"<script src=\"./js/main.js\"></script>"
						"<link rel=\"stylesheet\" href=\"./css/main.css\"/>"
					"</head>"
					"<body>"
						"<h1>Inventory</h1>"
						"<table>"
						"<thead>"
							"<th>Name</th>"
							"<th>Price</th>"
						"</thead>"
						"<tbody>";
					
	for (vector<int>::size_type i = 0; i != vehicles.size(); i++) {
		html_file <<	"<tr>"
							"<td>";
		html_file <<			vehicles[i].FullName();
		html_file <<		"</td>"
							"<td>";
		html_file <<			vehicles[i].FullPrice();
		html_file <<		"</td>"
						"</tr>";
	}

	html_file <<		"</tbody>"
						"</table>"
					"</body>"
				"</html>";
	html_file.close();
	return 0;
}

