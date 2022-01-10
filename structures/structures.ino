struct Animal {  //creating animal structure
int weight;
int age;
String family;
boolean alive;
String animalname;
};

Animal dog = {8,8,"Canidae", true,"dog"}; //feeding data
Animal cat = {12,10,"Felidae",false,"cat"};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Printing animal information");
  printAnimalInfo(dog);  //printing animal information
  printAnimalInfo(cat);
  swapMemberWeight(&dog , &cat);
  Serial.println("Weight after swapping");
  printAnimalInfo(dog);  //printing animal information after swapping weight
  printAnimalInfo(cat);
  Serial.println("showing which animal is best:");
  struct Animal bestAnimal = compareAnimal(&dog, &cat);
  printAnimalInfo(bestAnimal);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void printAnimalInfo(struct Animal a){
  Serial.print("Name: ");
  Serial.println(a.animalname);
  Serial.print("Weight: ");
  Serial.println(a.weight);
  Serial.print("Age: ");
  Serial.println(a.age);
  Serial.print("Family: ");
  Serial.println(a.family);
  Serial.print("Alive: "); 
  Serial.println(a.alive);
  
}

void swapMemberWeight(struct Animal *A,struct Animal *B){
  int temp = A->weight;
  A->weight = B->weight;
  B->weight = temp;
}

Animal compareAnimal(struct Animal *a, struct Animal *b){ 
  struct Animal bestAnimal;
  if(a->weight > b->weight){  //comparing based on weight
    bestAnimal.weight = a->weight;
    bestAnimal.family = a->family;
    bestAnimal.age = a->age;
    bestAnimal.alive = a->alive;
    bestAnimal.animalname = a->animalname;
  }
  else{
    bestAnimal.weight = b->weight;
    bestAnimal.family = b->family;
    bestAnimal.age = b->age;
    bestAnimal.alive = b->alive;
    bestAnimal.animalname = b->animalname;
  }
  return bestAnimal;
}
