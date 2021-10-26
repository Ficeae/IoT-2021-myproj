#include "lab4header.h"

int main() 
{
    Printer Mitsubishi("Mitsubishi P93E", 16250, 5.6, 8385500221, "cf033a9d-d1k");
    cout << "Name: " << Mitsubishi.getPrinterName() << endl
         << "Price: " << Mitsubishi.getUahPrice() << " uah" << endl
         << "Pages per min: " << Mitsubishi.getPagesPerMin() << endl 
         << "Store ID: " << Mitsubishi.getID() << endl
         << "Serial Number: " << Mitsubishi.getSnum() << endl
         << "Section: " << Mitsubishi.section << endl << endl;
    
    Printer Sony("Sony UP-D897", 18000, 2.1, 1036190717, "10JL0933-UP-d897");
    cout << "Name: " << Sony.getPrinterName() << endl
         << "Price: " << Sony.getUahPrice() << " uah" << endl
         << "Pages per min: " << Sony.getPagesPerMin() << endl 
         << "Store ID: " << Sony.getID() << endl
         << "Serial Number: " << Sony.getSnum() << endl
         << "Section: " << Sony.section << endl << endl;

    Printer Epson("Epson L120", 4509, 2.22, 7484929003, "C11CD76302");
    cout << "Name: " << Epson.getPrinterName() << endl
         << "Price: " << Epson.getUahPrice() << " uah" << endl
         << "Pages per min: " << Epson.getPagesPerMin() << endl 
         << "Store ID: " << Epson.getID() << endl
         << "Serial Number: " << Epson.getSnum() << endl
         << "Section: " << Epson.section;
    
    return 0;
}