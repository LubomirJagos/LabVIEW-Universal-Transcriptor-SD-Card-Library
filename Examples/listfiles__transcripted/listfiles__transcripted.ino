#include <ArduinoSTL.h>
#include <vector>
#include <SPI.h>
#include <SD.h>
using namespace std;
void LVSubVI_LabVIEW_Universal_Transcriptor_SD_Card_LibraryprintDirectory(unsigned char nested_level,File file){
    unsigned char wireUID_484_ = nested_level;
    File wireUID_702_ = file;
    /***** BEGIN WhileLoop ********/
    bool wireUID_941_; //LoopEndRef.
    int iteratorUID_807 = 0; //loop iterator
    do{
     //shift register init and get front value
        bool wireUID_309_;
        unsigned char wireUID_873_ = wireUID_484_;
        File wireUID_345_;
        File wireUID_844_ = wireUID_702_;
        wireUID_345_ = wireUID_844_.openNextFile();
        wireUID_309_ = bool(wireUID_345_);
        wireUID_941_ = !wireUID_309_;
        /***** BEGIN CaseStructure ********/
        switch(wireUID_309_){
            case true:
            {
                File wireUID_936_ = wireUID_345_;
                String wireUID_1244_;
                String wireUID_995_;
                String wireUID_1211_ = "";
                String wireUID_1159_;
                unsigned char wireUID_576_ = wireUID_873_;
                bool wireUID_1221_;
                wireUID_995_ = wireUID_936_.name();
                wireUID_1159_ = String(wireUID_576_);
                wireUID_1244_ = wireUID_1159_ + wireUID_1211_ + wireUID_995_;
                Serial.println(wireUID_1244_);
                wireUID_1221_ = wireUID_936_.isDirectory();
                /***** BEGIN CaseStructure ********/
                switch(wireUID_1221_){
                    case true:
                    {
                        File wireUID_410_ = wireUID_936_;
                        unsigned char wireUID_361_;
                        unsigned char wireUID_1453_ = wireUID_576_;
                        wireUID_361_ = wireUID_1453_ + 1;
                        LVSubVI_LabVIEW_Universal_Transcriptor_SD_Card_LibraryprintDirectory(wireUID_361_,wireUID_410_);
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
                wireUID_936_.close();
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
         //C code
        
         //output assgn.
        iteratorUID_807++; //iterator increment
    }while(!wireUID_941_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
} //SubVI not locked auto-generated call

void LabVIEW_Universal_Transcriptor_SD_Card_Librarylistfiles(){
    bool wireUID_429_ = true;
    File wireUID_638_;
    unsigned short wireUID_434_ = 0;
    String wireUID_372_ = "/";
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
    wireUID_638_ = SD.open(wireUID_372_);
    /***** BEGIN CaseStructure ********/
    switch(wireUID_429_){
        case true:
        {
            unsigned char wireUID_687_ = 0;
            File wireUID_783_ = wireUID_638_;
            LVSubVI_LabVIEW_Universal_Transcriptor_SD_Card_LibraryprintDirectory(wireUID_687_,wireUID_783_);
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
    
}

void setup(){
  LabVIEW_Universal_Transcriptor_SD_Card_Librarylistfiles();
  }
void loop(){
    
}
