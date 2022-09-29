#include <iostream>
#include <cmath>
using namespace std; 
int main() {

int gryffindor = 0;
int hufflepuff = 0;
int ravenclaw = 0;
int slytherin = 0;


int answer1;
int answer2;
int answer3;
int answer4;

cout << "The Sorting Hat Quiz!\n";

cout << "Q1) When im dead I want people to remember me as:\n" <<"1) The Good \n" <<"2) The Great \n" <<"3) The Wise \n" <<"4) The Bold \n" << "Enter Answer number \n";
cin >> answer1;

if (answer1==1){
  hufflepuff = hufflepuff + 1;

}
else if (answer1 == 2){

  slytherin = slytherin+1;
}

else if (answer1 == 3){

  ravenclaw = ravenclaw+1;
}

else if (answer1 == 4){

  gryffindor = gryffindor+1;
}

else {

  cout << "Invalid input";

}

cout << "Q2) Dawn or Dusk? \n" <<"1) Dawn \n" <<"2) Dusk \n" << "Enter Answer number \n";

cin >> answer2;

if (answer2==1){
  ravenclaw = ravenclaw+1;
  gryffindor = gryffindor + 1;

}
else if (answer2 == 2){
hufflepuff = hufflepuff + 1;
slytherin = slytherin+1;
}

else {

  cout << "Invalid Input";
}

cout << "Q3) Which kind of Instrument most pleases your ear? \n" <<"1) The Violin \n" <<"2) The Trumpet \n" <<"3) The Piano \n" <<"4) The Drum \n"<< "Enter Answer number \n";

cin >> answer3;

if (answer3==1){
  
 slytherin = slytherin+1;
}
else if (answer3 == 2){
hufflepuff = hufflepuff + 1;
 
}

else if (answer3 == 3){

  ravenclaw = ravenclaw+1;
}

else if (answer3 == 4){

  gryffindor = gryffindor+1;
}

else {

  cout << "Invalid input";

}

cout << "Q4) Which road tempts you the most? \n" <<"1) The wide, sunny grassy lane \n" <<"2) The narrow, dark, latern-lit alley \n" <<"3) The twisting, leaf-strewn path through the woods \n" <<"4) The cobbled street lined with ancient buildings \n"<< "Enter Answer number \n";

cin >> answer4;

if (answer4==1){
  hufflepuff = hufflepuff + 1;
 
}
else if (answer4 == 2){
slytherin = slytherin+1;
 
}

else if (answer4 == 3){
gryffindor = gryffindor+1;

}

else if (answer4 == 4){
ravenclaw = ravenclaw+1;
  
}

else {

  cout << "Invalid input";

}
cout << "\nCongrats on being sorted into... ";

  int max = 0;
string house;

if (gryffindor > max) {

  max = gryffindor;
  house = "Gryffindor";
}
if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
}
if (ravenclaw > max) {

  max = ravenclaw;
  house = "Ravenclaw";
}
if (slytherin > max) {

  max = slytherin;
  house = "Slytherin";
}

cout << house << "!\n";

}