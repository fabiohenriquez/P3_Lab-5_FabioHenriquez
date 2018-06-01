#include "bodega.h"

bodega::bodega(){


}

void bodega::setIngredientes(ingredientes*i){
ingredient.push_back(i);

}

void bodega::setPlatos(platos*p){
plat.push_back(p);

}

vector<platos*> bodega::getPlatos(){
return plat;
}

vector<ingredientes*> bodega::getIngredientes(){
return ingredient;
}

