#include "pet.h"

int main(int argc, char const *argv[]) {
  //Creating an instance using default
  Pet* pet1 = new Pet();
  pet1->setAge(2);
  pet1->setName("Buddy");
  pet1->setWeight(52);
  pet1->setType("Dog");

  //Creating second instance using default
  Pet* pet2 = new Pet();
  pet2->setAge(3);
  pet2->setName("Rama");
  pet2->setWeight(12);
  pet2->setType("Cat");

  //Now I print out the 2 pet names
  cout<<"\n"<<"The name is: "<<pet1->getName()<<endl;
  cout<<"The age is: "<<pet1->getAge()<<endl;
  cout<<"The weight is: "<<pet1->getWeight()<<endl;
  cout<<"The type is: "<<pet1->getType()<<endl;

  cout<<"\n"<<"The name is: "<<pet2->getName()<<endl;
  cout<<"The age is: "<<pet2->getAge()<<endl;
  cout<<"The weight is: "<<pet2->getWeight()<<endl;
  cout<<"The type is: "<<pet2->getType()<<endl;


  return 0;
}
