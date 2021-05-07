#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <cmath>
#include "classes.h"
using namespace std;


vector <cylindricalBlocks> cyb;

vector <cylindricalBlocks> cylinderArray(vector<sqrBaseRectBlocks> S){

	for(sqrBaseRectBlocks sq: S){
		cylindricalBlocks cy = cylindricalBlocks(sq.width, sq.height, sq.length);
		cyb.push_back(cy);
	}


return cyb;
}


bool sortSurfaceArea(cylindricalBlocks c1, cylindricalBlocks c2){

	return (c1.surfaceArea > c2.surfaceArea);
	
}



void sortedCylinder(vector <cylindricalBlocks> cy){

	sort(cy.begin(), cy.end(), sortSurfaceArea);
	for(cylindricalBlocks c: cy){
		cout << "Length: " << c.length << ";  Diameter: " << c.diameter << ";  Surface Area: " << c.surfaceArea << endl;
	}


}










