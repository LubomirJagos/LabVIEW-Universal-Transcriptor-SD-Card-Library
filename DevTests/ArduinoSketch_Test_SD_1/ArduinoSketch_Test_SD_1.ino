#include <ArduinoSTL.h>
#include <vector>
#include <SPI.h>
#include <SD.h>
using namespace std;

void Test_SD_1(){
    bool wireUID_627_;
    long wireUID_479_ = 9600;
    unsigned char wireUID_563_ = 4;
    Serial.begin(wireUID_479_);
    wireUID_627_ = SD.begin(wireUID_563_);
    /***** BEGIN CaseStructure ********/
    switch(wireUID_627_){
        case true:
        {
            String wireUID_811_ = "Initialization done.";
            Serial.println(wireUID_811_);
             /* C code */
         /* output assgn. */
        }
        break;
        case false:
        {
            String wireUID_577_ = "Initialization failed!";
            Serial.println(wireUID_577_);
             /* C code */
         /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    /***** BEGIN WhileLoop ********/
    bool wireUID_1075_ = false; //LoopEndRef.
    int iteratorUID_960 = 0; //loop iterator
    do{
     //shift register init and get front value
        vector<char> wireUID_252_;
        File wireUID_697_;
        bool wireUID_425_;
        long wireUID_713_ = 10;
        char wireUID_680_ = 0;
        long wireUID_1500_ = 2000;
        unsigned short wireUID_648_ = 0;
        String wireUID_598_ = "test.txt";
        wireUID_697_ = SD.open(wireUID_598_);
        wireUID_425_ = wireUID_697_.available();
        wireUID_252_ = vector<char>(wireUID_713_,wireUID_680_);
        /***** BEGIN CaseStructure ********/
        switch(wireUID_425_){
            case true:
            {
                File wireUID_789_ = wireUID_697_;
                String wireUID_998_ = "a";
                long wireUID_877_ = 10;
                vector<char> wireUID_840_ = wireUID_252_;
                wireUID_789_.read(&wireUID_840_.front(), wireUID_877_);
                Serial.write(&wireUID_840_.front());
                wireUID_789_.close();
                 /* C code */
             /* output assgn. */
            }
            break;
            case false:
            {
             /* C code */
             /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        delay(wireUID_1500_);
         //C code
        
         //output assgn.
        iteratorUID_960++; //iterator increment
    }while(!wireUID_1075_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Test_SD_1();
}
