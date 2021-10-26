#include <iostream>
#include <string>

using namespace std;

    class Printer {
        private:
            string PrinterName;
            double PrintSpd;
            double Price;
        
        protected:
            long StoreID;
            string SerialNum;
        
        public:
            const string section = "printers";
            Printer();
    
            Printer(string Name, 
                    double Uah, 
                    double Speed,
                    long ID,
                    string Snum);
            ~Printer(){};
            
            string getPrinterName();
            double getPagesPerMin();
            double getUahPrice();
            long getID();
            string getSnum();
    };