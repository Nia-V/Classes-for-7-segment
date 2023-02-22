

class Seg {
private:
  int* pins; // ""int*"" means a pointer to a variable whose datatype is integer" I dont really understand this at all. But it works??
  
  Seg(){};
public:
  Seg (int pins[7]) {
    this->pins = pins;
  }

  void init(){
    for (int i = 0; i<8; i++){
      pinMode(pins[i],OUTPUT);
    }
  }


  void display(int num) {
    int numbers[10][7] = {
      {1,1,1,1,1,1,0},
      {0,1,1,0,0,0,0},
      {1,1,0,1,1,0,1},
      {1,1,1,1,0,0,1},
      {0,1,1,0,0,1,1},
      {1,0,1,1,0,1,1},
      {1,0,1,1,1,1,1},
      {1,1,1,0,0,0,0},
      {1,1,1,1,1,1,1},
      {1,1,1,1,0,1,1}
    };
    for (int i = 0; i<8; i++){
      digitalWrite(pins[i], numbers[num][i]);
    }
  }
};

int my7pins[7] {2,3,4,5,6,7,8};
Seg my7(my7pins);

  void setup() {
    my7.init();
  }

  void loop() {
    my7.display(0);
    delay(1000);
    my7.display(1);
    delay(1000);
    my7.display(2);
    delay(1000);
    my7.display(3);
    delay(1000);
    my7.display(4);
    delay(1000);
    my7.display(5);
    delay(1000);  
    my7.display(6);
    delay(1000);
    my7.display(7);
    delay(1000);
    my7.display(8);
    delay(1000);
    my7.display(9);
    delay(1000);
  }
