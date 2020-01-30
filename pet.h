#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class Pet{
  public:
    Pet(); //Default constructor
    Pet(int age, string name, double weight, string type);

    //accessors AKA getters
    int getAge();
    string getName();
    double getWeight();
    string getType();

    //mutators AKA setters
    void setAge(int age);
    void setName(string name) ;
    void setWeight(double weight);
    void setType(string type);


  private:
    int m_age;
    string m_name;
    double m_weight;
    string m_type;

};

#endif
