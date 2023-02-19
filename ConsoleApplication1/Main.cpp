#include "Include.h"

using namespace std;

int main()
{
    /*cout << ("----#1 DATETIME----") << endl;
    DateTime *time1 = new DateTime();

    if (time1->Read("INPUT VALUES")) {
        time1->PrintDate();
    }
    else
        return 0;

    cout << endl;

    time1->AddDays(1);
    time1->AddMonths(1);
    time1->AddYears(2);

    if (time1->CheckValid(time1->GetDay(), time1->GetMonth(), time1->GetYear(), time1->GetHour(), time1->GetMinute())) {
        time1->PrintDate();
    }
    else
        return 0;

    cout << endl;

    time1->IsLeapYear();

    cout << endl;

    time1->MonthOfYear();

    delete time1;
    cout << endl;




    cout << ("----#2 PIXEL----") << endl;
    Pixel a;
    Pixel* b = new Pixel();

    a.SetColor("Green");

    a.Move(10, 15);

    b->Read("INPUT VALUES");
    cout << "Dist from "; b->Print();
    cout << " to "; a.Print();
    cout << " is " << b->Dist(a) << endl;

    delete b;
    cout << endl;*/



    cout << ("----#3 LINE----") << endl;
    Line* line = new Line();

    line->Read("INPUT VALUES");
    line->Print();
    cout << "Length: " << line->Length() << endl;
    line->Center();
    delete line;

}
