class SevenSegmentDisplay {
private:
    int *pins; // ""int*"" means a pointer to a variable whose datatype is integer" I dont really understand this at all. But it works??

    SevenSegmentDisplay() {};
public:
    SevenSegmentDisplay(int pins[7]) {
        this->pins = pins;
    }

    void init() {
        for (int i = 0; i < 8; i++) {
            pinMode(pins[i], OUTPUT);
        }
    }


    void display(int num) {
        int numbers[10][7] = {
                {1, 1, 1, 1, 1, 1, 0},
                {0, 1, 1, 0, 0, 0, 0},
                {1, 1, 0, 1, 1, 0, 1},
                {1, 1, 1, 1, 0, 0, 1},
                {0, 1, 1, 0, 0, 1, 1},
                {1, 0, 1, 1, 0, 1, 1},
                {1, 0, 1, 1, 1, 1, 1},
                {1, 1, 1, 0, 0, 0, 0},
                {1, 1, 1, 1, 1, 1, 1},
                {1, 1, 1, 1, 0, 1, 1}
        };

        for (int i = 0; i < 7; i++) {
            digitalWrite(pins[i], numbers[num][i]);
        }
    }
};

int my7pins[7]{2, 3, 4, 5, 6, 7, 8};
SevenSegmentDisplay my7(my7pins);

void setup() {
    my7.init();
}

void loop() {
    for (int i = 0; i < 10; ++i) {
        my7.display(i);
        delay(1000);
    }
}
