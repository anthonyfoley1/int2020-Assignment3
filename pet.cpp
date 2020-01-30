#include "pet.h"


Pet::Pet(){ //Default constructor
  m_age=0;
  m_name="No name";
  m_weight=0;
  m_type="No type";
}

 //Overloaded constructor
Pet::Pet(int age, string name, double weight, string type){
  m_age=age;
  m_name=name;
  m_weight=weight;
  m_type=type;
}



//accessors AKA getters
int Pet::getAge(){
  return m_age;
}
string Pet::getName(){
  return m_name;
}
double Pet::getWeight(){
  return m_weight;
}
string Pet::getType(){
  return m_type;
}

//mutators AKA setters
void Pet::setAge(int age){
  m_age=age;
}
void Pet::setName(string name){
  m_name=name;
}
void Pet::setWeight(double weight){
  m_weight=weight;
}
void Pet::setType(string type){
  m_type=type;
}
