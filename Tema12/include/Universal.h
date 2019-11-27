#ifndef UNIVERSAL_H_INCLUDED
#define UNIVERSAL_H_INCLUDED

#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <utility>
using namespace std;

class ArrayStream{
  public:
    friend ostream& operator << (ostream& out, const ArrayStream& as);
    friend istream& operator >> (istream& in, ArrayStream& as);
  protected:
    virtual void print(ostream& out) const = 0;
    virtual void read(istream& in) = 0;
};
inline ostream& operator << (ostream& out, const ArrayStream& as){ as.print(out); return out; }
inline istream& operator >> (istream& in, ArrayStream& as){ as.read(in); return in; }

#endif // UNIVERSAL_H_INCLUDED
