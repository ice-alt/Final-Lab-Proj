#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <cmath>
#include "classes.h"
using namespace std;


vector <sqrBaseRectBlocks> sqr;

vector <sqrBaseRectBlocks> sqrBaseArray(vector<rectBlocks> R){

for(rectBlocks re: R){
	if(re.width == re.height){
		sqrBaseRectBlocks sqrb = sqrBaseRectBlocks(re.width, re.height, re.length);
		sqr.push_back(sqrb);
	}

}

return sqr;
}
