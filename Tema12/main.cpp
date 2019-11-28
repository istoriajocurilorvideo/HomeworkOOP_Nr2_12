#include "Matrice.h"
#include "Vector.h"
#include "Graf.h"
#include "Graf_Neorientat.h"
#include "Graf_Orientat.h"


int main()
{
    cout<<"Matrix operations : ";
    Matrice m(3);

    m(1, 1) = 7;
    int i, j;
    int temp;
    for(i=0; i<m.getSize(); i++){
        for(j=0; j<m.getSize(); j++)
            cout<<m(i, j)<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout<<"Vector operations : ";
    Vector v2(7);
    cout<<"am fost creat";
    int v[] = {1, 2, 5, 6, 7};
    int mr = 5;
    Vector v3(v, mr);
    cout<<"SIeu";
    Vector v1(v3);
    cout<<"aici la fel";
    for(int index=0; index < v1.getSize(); index++)
        cout<<v1[index]<<" ";
    cout<<endl;
    v1[2] = 90;
    for(int index=0; index < v1.getSize(); index++)
        cout<<v1[index]<<" ";
    v1.pushBack(30);
    cout<<endl;
    for(int index=0; index < v1.getSize(); index++)
        cout<<v1[index]<<" ";
    cout<<endl<<v1.getSize();
    cout<<endl;
    cout<<v1<<endl;
    cout<<"Grafuri neorientate: " <<endl;
    Graf_Neorientat graf(6);
    cout<<graf;
    graf.addEdge(1 , 3);
    graf.addEdge(2 , 3);
    graf.addEdge(4 , 5);
    cout<<endl<<endl<<graf;
    cout<<endl;
    graf.deleteEdge(2, 3);
    cout<<graf;
    /*
    v3.deleteItemByIndex(2);
    v3.deleteItemByItem(6);
    cout<<v3;*/
    return 0;
}
