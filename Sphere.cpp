#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <cmath>
#include "classes.h"
using namespace std;



vector <sphericalBlocks> sph;

vector <sphericalBlocks> cylinderArray(vector<cuboidBlocks> C){
	for(cuboidBlocks cub: C){
		sphericalBlocks sp = sphericalBlocks(cub.width, cub.height, cub.length);
		sph.push_back(sp);
	}


return sph;
}


bool sortSurfaceArea(sphericalBlocks s1, sphericalBlocks s2){

	return (s1.surfaceArea > s2.surfaceArea);
	
}


bool sortVolume(sphericalBlocks v1, sphericalBlocks v2){

	return (v1.surfaceArea > v2.surfaceArea);
	
}


void sortedSphere1(vector <sphericalBlocks> sp){

	sort(sp.begin(), sp.end(), sortSurfaceArea);
	for(sphericalBlocks s: sp){
		cout << "Diameter: " << s.diameter << ";  Surface Area: " << c.surfaceArea << endl;
	}


}


void sortedSphere2(vector <sphericalBlocks> sp){

	sort(sp.begin(), sp.end(), sortVolume);
	for(sphericalBlocks s: sp){
		cout << "Volume: " << s.volume << endl;
	}


}



