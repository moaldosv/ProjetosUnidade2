#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "figurageometrica.h"
#include "sculptor.h"
#include "cutvoxel.h"
#include "putvoxel.h"
#include "putsphere.h"
#include "cutellipsoid.h"
#include "putbox.h"
#include "cutbox.h"
#include "cutsphere.h"
#include "putellipsoid.h"



using namespace std;

/**
 * @brief main -  principal
 * @return
 */
int main(void)
{
    ifstream inputFile;
    inputFile.open("/home/moald/Documents/ProjetoPA/drawings/d1");
    if(!inputFile)
    {
       exit(0);
    }
    vector<string> linhas;    string l;    vector<int>::iterator it;

    while(getline(inputFile,l))
    {
        linhas.push_back(l);
    }

    int nx=0,ny=0,nz=0;
    stringstream header(linhas[0]);
    string no;
    header >> no;
    header >> nx >> ny >> nz;

    Sculptor t(nx,ny,nz); //nx,ny,nz
    vector<FiguraGeometrica*> figs;


    for(int i=1; i<linhas.size();i++){
        stringstream tipo(linhas[i]);
        tipo >> no;

        if( no == "putVoxel"){
            float r,g,b,a;
            int x,y,z;
            tipo >> x >> y >> z >> r>> g >> b >> a;
            figs.push_back(new PutVoxel(x,y,z,r,g,b,a));
        }

        else if (no == "cutVoxel"){
            int x,y,z;
            tipo >>x >> y >> z;
            figs.push_back(new CutVoxel(x,y,z));
        }
        else if( no == "putBox"){
            int x0,x1,y0,y1,z0,z1;
            float r,g,b,a;
            tipo >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
            figs.push_back(new PutBox(x0,x1,y0,y1,z0,z1,r,g,b,a));
        }
        else if( no == "cutBox"){
            int x0,x1,y0,y1,z0,z1;
            tipo >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
            figs.push_back(new CutBox(x0,x1,y0,y1,z0,z1));
        }
        else if(no == "putSphere"){
            int x,y,z,rd;
            float r,g,b,a;
            tipo >> x >> y >> z >> rd >> r >> g >>b >>a;
            figs.push_back(new PutSphere(x,y,z,rd,r,g,b,a));

        }
        else if(no == "cutSphere"){
            int x,y,z,rd;
            tipo >> x >> y >> z >> rd;
            figs.push_back(new CutSphere(x,y,z,rd));
        }
        else if (no == "putEllipsoid") {
            int x,y,z,rx,ry,rz;
            float r,g,b,a;
            tipo >> x >> y >> z >> rx >> ry >> rz >> r >> g >> b >> a;
            figs.push_back(new PutEllipsoid(x,y,z,rx,ry,rz,r,g,b,a));
        }
        else if (no == "cutEllipsoid") {
            int x,y,z,rx,ry,rz;
            tipo >> x >> y >> z >> rx >> ry >> rz;
            figs.push_back(new CutEllipsoid(x,y,z,rx,ry,rz));
        }}

    for (int i =0; i<figs.size(); i++){
        figs[i]->draw(t);
    }
    for (int i =0; i<figs.size(); i++){
        delete figs[i];
    }

    t.writeOFF("/home/moald/Documents/ProjetoPA/off.off");
    t.writeVECT("/home/moald/Documents/ProjetoPA/vect.vect");

    inputFile.close();
}
