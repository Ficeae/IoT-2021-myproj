#include "lab4header.h"

Printer::Printer() {
        PrinterName = "unknown";
        PrintSpd = 0;
        Price = 0;
        StoreID = 0;
        SerialNum = "unknown";
    }

Printer::Printer(string Name, 
                double Uah, 
                double Speed,
                long ID,
                string Snum)
        {
            PrinterName = Name;
            PrintSpd = Speed;
            Price = Uah;
            StoreID = ID;
            SerialNum = Snum;
        }

string Printer::getPrinterName()
    {
        return PrinterName;
    }
double Printer::getPagesPerMin()
    {
         return 1/PrintSpd*60;
    }
double Printer::getUahPrice()
    {
        return Price;
    }
long Printer::getID()
    {
        return StoreID;
    }
string Printer::getSnum()
    {
        return SerialNum;
    }