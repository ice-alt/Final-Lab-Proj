#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <cmath>
#include "classes.h"
using namespace std;


vector <cuboidBlocks> cubd;

vector <cuboidBlocks> cuboidArray(vector<sqrBaseRectBlocks> S){

	for(sqrBaseRectBlocks sq: S){
		if(sq.width == sq.height && sq.height == sq.length){
			cuboidBlocks cub = cuboidBlocks(sq.width, sq.height, sq.length);
		cubd.push_back(cub);
	}

}

return cubd;



}

