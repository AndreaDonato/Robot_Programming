#include "vec_f.h"
#include <iostream>
#include <assert.h>

using namespace std;

// read/write access to element at pos - Accedo all'elemento pos scrivendo vettore.at(pos)
float& VecF::at(int pos){
  return v[pos];
}
// read access to element at pos - Utilissimo
// const after () means that the method does not modify the invoking object
const float& VecF::at(int pos) const {
  return v[pos];
}

/******************************
 * 
 *      COSTRUTTORI
 * 
 * ****************************/
// Default constructor
VecF::VecF():
  dim(0),
  v(nullptr)
  {}

// Constructor per vettore non vuoto
VecF::VecF(int dim_ = 0):
  dim(dim_),
  v(nullptr)
  {
    if(dim)
    v = new float[dim];
  }

// copy Constructor
VecF::VecF(const VecF& ToCopy):
  VecF(ToCopy.dim)  // Il compilatore C++ sa che VecF è il costruttore e se ne frega dell'ambiguità di sintassi
  {
    for (int i=0; i<dim; ++i)
      v[i] = ToCopy.v[i];
  }

// Destructor
VecF::~VecF() {
  if(dim)
    delete [] v;
}


/******************************
 * 
 *      OPERATORI
 * 
 * ****************************/

// op =, deep copy
VecF& VecF::operator = (const VecF& ToDeepCopy)
{
  if(dim != ToDeepCopy.dim)   // Quando uso un operatore, sto "guardando" dentro la classe a sinistra e posso usarne gli attributi
  {
    delete [] v;
    v = 0;
    dim = ToDeepCopy.dim;
    if (!dim)
      return *this;
    v = new float[dim];
  }
  
  for(int i = 0; i < dim; ++i)
    v[i] = ToDeepCopy.v[i];

  return *this;
}

// returns the sum this + other (LeftOperand + RightOperand)
VecF VecF::operator + (const VecF& RightOperand) const {
  assert(RightOperand.dim==dim && "dim mismatch");
  VecF returned(*this);   // Crea un VecF chiamato returned chiamando il costruttore di copia
  for(int i = 0; i < dim; ++i)
    returned.v[i]+=RightOperand.v[i];
  return returned;
}

VecF VecF::operator - (const VecF& other) const {
  assert(other.dim==dim && "dim mismatch");
  VecF returned(*this);
  for(int i = 0; i < dim; ++i)
    returned.v[i]-=RightOperand.v[i];
  return returned;
}


// returns this*f
VecF VecF::operator * (float f) const {
  VecF returned(*this);
  for(int i = 0; i < dim; ++i)
    returned.v[i] *= f;
  return returned;
}


// returns the dot product (vecs should have the same size);
float VecF::operator * (const VecF& other) const {
  float acc = 0.f;
  // TODO: fillme
  return acc;
}

// Definisce come un oggetto di classe VecF viene stampato in un oggetto di classe ostream come cout (stream di output)
ostream& operator << (ostream& os, const VecF& v) {
  os << "{ ptr: " << &v << " dim:" << v.dim << " vals: [ ";
  for (int i=0; i<v.dim; ++i)
    os << v.at(i) <<  " ";
  os << "] }";
  return os;
}
