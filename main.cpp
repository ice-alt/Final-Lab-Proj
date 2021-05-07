#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <cmath>
#include "Rect.cpp"
#include "sqrBase.cpp"
#include "cuBoid.cpp"
#include "Cylinder.cpp"
#include "Sphere.cpp"

using namespace std;



int main(){


ReadFile("dataBlocks.dat");
vector <sqrBaseRectBlocks> sqrBaseArray(vector<rectBlocks> R);
vector <cuboidBlocks> cuboidArray(vector<sqrBaseRectBlocks> S);
vector <cylindricalBlocks> cylinderArray(vector<sqrBaseRectBlocks> S);
sortSurfaceArea(cylindricalBlocks c1, cylindricalBlocks c2);
sortedCylinder(vector <cylindricalBlocks> cy);
vector <sphericalBlocks> cylinderArray(vector<cuboidBlocks> C);
sortSurfaceArea(sphericalBlocks s1, sphericalBlocks s2);
sortVolume(sphericalBlocks v1, sphericalBlocks v2);
sortedSphere1(vector <sphericalBlocks> sp);
sortedSphere2(vector <sphericalBlocks> sp);



return 0;
}
