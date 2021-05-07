#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <cmath>
#include "classes.h"
using namespace std;

//Declare vector for rectBlock objects
vector<rectBlocks> rect;

//Reading the file
vector<rectBlocks> ReadFile(string file){
	string filename(file);
	ifstream inPutFile(filename);
 	
	while(!inPutFile.eof()){
		rectBlocks rectBlock;
		
		inPutFile >> rectBlock.rectwidth;
		inPutFile >> rectBlock.rectheight;
		inPutFile >> rectBlock.rectlength;
		
	
		rect.push_back(rectBlock);

}
	inPutFile.close();
	cout << endl;
	
	return rect;
	}
	
