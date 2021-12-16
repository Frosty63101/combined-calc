#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#define PI 3.14159265

int
main() {

    int r = 0;

    do

    {

        system("CLS");

        //declaring variables 
        int verification;

        double pa;

        double pb = 0;

        double pc;

        double psqrtc;

        double qa;

        double qb = 0;

        double qc = 0;

        double qplus;

        double qnegative;

        int fn;

        int fi;

        int qr;

        int pr;

        int fr;

        int cr;

        int gr;

        char cop;

        float cnum1;

        float cnum2;

        double gg;

        double gv;

        double gt;

        double gd;

        int ta;

        int tr;

        int tb;

        int tc;

        int tfi;

        int tfn;

        int tf1;

        int tf2;

        int tr1;

        int tn2;

        int tn1;

        int tn12{

        };

        int ta3;

        int td;

        int tf3;

        int tf4;

        int tf5;

        int tf6;

        int GCF1;

        int GCF2;

        std::string ra;

        std::string rb;

        std::string rc;

        int rt;

        double ria{};

        double rib{};

        double ric;

        int rr;

        std::string rata;

        std::string rato;

        std::string rath;

        std::string ratx;

        double ratia{};

        double ratio{};

        double ratih{};

        double ratix{};

        double ratix2{};

        double ratiratxr{};

        double ratf{};

        double ratxr{};

        int ratr{};

        //allows std:: to work
        using namespace std;

        //setting verification to unused value
        verification = 9;

        //asks which function to use
        std::

            cout <<
            "Please verify which function you wish to use put " <<

            "\n"

            <<
            "0 for quadratic formula" << "\n" <<

            " 1 for pythagorean theorum"

            <<
            "\n" <<

            "3 for factor of any positive integer\n" <<

            "4 for functions of a normal calculator\n" <<

            "5 for height and velocity of dropped object when given time\n" <<

            "6 for quadratic trinomial where a!=1\n" <<

            "7 for special right angle triangles\n" <<

            "8 for right angle trig\n";

        //applies choice to variable verification to use to select function
        std::cin >> verification;

        //function 0 is to run the quadratic formula with user input values
        if (verification == 0)

            do

            {

                r = 0;

                std::cout << "input a value";

                std::cin >> qa;

                std::cout << "input b value";

                std::cin >> qb;

                std::cout << "input c value";

                std::cin >> qc;

                std::

                    cout << "(-" << qb << " +/- sqrt(" << qb << "^2-4*" << qa

                    <<

                    "*" << qc << ") / 2*" << qa << "\n\n";

                //executes math function
                qplus = (-qb + sqrt(qb * qb - 4 * qa * qc)) / (2 * qa);

                qnegative =
                    (-qb - sqrt(qb * qb - 4 * qa * qc)) / (2 * qa);

                std::

                    cout << "x= " << qplus << "," << qnegative << "\n\n";

                std::cout << "would you like to repeat 1/0: \n";

                std::cin >> qr;

                if (qr == 0)

                {

                    std::

                        cout << "would you like to restart 1/0: \n";

                    std::cin >> r;

                    break;

                }

                system("CLS");

            } while (qr == 1);

            //function 1 is to run the pythagorean theorum with user input lengths
        else if (verification == 1)

            do

            {

                r = 0;

                pr = 0;

                std::

                    cout <<

                    "Please input length of side a and b then press enter\n";

                std::cin >> pa;

                std::cin >> pb;

                ;

                //executes math function
                pc = (pa * pa) + (pb * pb);

                psqrtc = sqrt(pc);

                std::

                    cout <<

                    "The length of the hypotenous of your given triangle is:   "

                    <<
                    psqrtc << "\n\n";

                std::cout << "would you like to repeat 1/0: \n";

                std::cin >> pr;

                if (pr == 0)

                {

                    std::

                        cout << "would you like to restart 1/0: \n";

                    std::cin >> r;

                    break;

                }

                system("CLS");

            } while (pr == 1);

            //function 3 is to find all factors of any positive integer
        else if (verification == 3)

            do

            {

                r = 0;

                fr = 0;

                //taking input 
                std::cout << "Enter a positive integer: ";

                cin >> fn;

                std::

                    cout << "Factors of " << fn << " are: " << endl;

                for (fi = 1; fi <= fn; ++fi)

                {

                    if (fn % fi == 0)

                        std::cout << fi << endl;

                }

                std::cout << "would you like to repeat 1/0: \n";

                std::cin >> fr;

                if (fr == 0)

                {

                    std::

                        cout << "would you like to restart 1/0: \n";

                    std::cin >> r;

                    break;

                }

                system("CLS");

            } while (fr == 1);

        else if (verification == 4)

            do

            {

                std::

                    cout << "Enter operator either + or - or * or /: ";

                std::cin >> cop;

                std::cout << "Enter two operands: ";

                std::cin >> cnum1 >> cnum2;

                switch (cop)

                {

                case '+':

                    std::cout << cnum1 + cnum2 << "\n\n";

                    break;

                case '-':

                    std::cout << cnum1 - cnum2 << "\n\n";

                    break;

                case '*':

                    std::cout << cnum1 * cnum2 << "\n\n";

                    break;

                case '/':

                    std::cout << cnum1 / cnum2 << "\n\n";

                    break;

                default:

                    // If the operator is other than +, -, * or /, error message is shown
                    std::cout << "Error! operator is not correct";

                    break;

                }

                std::cout << "would you like to repeat 1/0: \n";

                std::cin >> cr;

                if (cr == 0)

                {

                    std::

                        cout << "would you like to restart 1/0: \n";

                    std::cin >> r;

                    break;

                }

                system("CLS");

            } while (cr == 1);

        else if (verification == 5)

            do

            {

                std::cout << "enter time for fall: \n";

                std::cin >> gt;

                gg = 9.80665;

                gv = gg * gt;

                gd = (0.5 * gg) * (gt * gt);

                std::

                    cout << "final velocity is: " << gv << " m/s^2" << "\n" <<

                    "drop height is: " << gd << " m" << "\n\n";

                std::cout << "would you like to repeat 1/0: \n";

                std::cin >> gr;

                if (gr == 0)

                {

                    std::

                        cout << "would you like to restart 1/0: \n";

                    std::cin >> r;

                    break;

                }

                system("CLS");

            } while (gr == 1);

        else if (verification == 7)

            do {

                std::

                    cout <<

                    "enter values for a b c (enter a, b or c for unknown values)\n";

                std::cin >> ra;

                std::cin >> rb;

                std::cin >> rc;

                std::cout << "enter 1 for 30-60-90 and 2 for 45-45-90 \n";

                std::cin >> rt;

                if (rt == 1) {

                    if (ra == "a") {

                        if (rb == "b") {

                            stringstream ss;

                            ss << rc;

                            ss >> ric;

                            ria = ric / 2;

                            std::cout << "a = " << ria << " b = " << (ria *

                                sqrt(3)) <<

                                " c = " << ric;

                        }
                        else if (rc == "c") {

                            stringstream ss;

                            ss << rb;

                            ss >> rib;

                            ria = rib / sqrt(3);

                            std::

                                cout << "a = " << ria << " b = " << rib << " c = " <<
                                (ria * 2);

                        }
                        else if (ra == "a") {

                            stringstream ss;

                            ss << rc;

                            ss >> ric;

                            ria = ric / 2;

                            std::cout << "a = " << ria << " b = " << (ria *

                                sqrt(3)) <<

                                " c = " << ric;

                        }

                    }
                    else if (rb == "b") {

                        if (rc == "c") {

                            stringstream ss;

                            ss << ra;

                            ss >> ria;

                            rib = ria * sqrt(3);

                            std::

                                cout << "a = " << ria << " b = " << rib << " c = " <<
                                (ria * 2);

                        }
                        else if (ra == "a") {

                            stringstream ss;

                            ss << rc;

                            ss >> ric;

                            ria = ric / 2;

                            std::cout << "a = " << ria << " b = " << (ria *

                                sqrt(3)) <<

                                " c = " << ric;

                        }
                        else if (rb == "b") {

                            stringstream ss;

                            ss << rc;

                            ss >> ric;

                            ria = ric / 2;

                            std::cout << "a = " << ria << " b = " << (ria *

                                sqrt(3)) <<

                                " c = " << ric;

                        }

                    }
                    else if (rc == "c") {

                        if (rb == "b") {

                            stringstream ss;

                            ss << ra;

                            ss >> ria;

                            rib = ria * sqrt(3);

                            std::

                                cout << "a = " << ria << " b = " << rib << " c = " <<
                                ria * 2;

                        }
                        else if (ra == "a") {

                            stringstream ss;

                            ss << rb;

                            ss >> rib;

                            ria = rib / sqrt(3);

                            std::

                                cout << "a = " << ria << " b = " << rib << " c = " <<
                                (ria * 2);

                        }
                        else if (rc == "c") {

                            stringstream ss;

                            ss << ra;

                            ss >> ria;

                            rib = ria * sqrt(3);

                            std::

                                cout << "a = " << ria << " b = " << rib << " c = " <<
                                (ria * 2);

                        }

                    }

                }

                if (rt == 2) {

                    if (ra == "a") {

                        if (rb == "b") {

                            stringstream ss;

                            ss << rc;

                            ss >> ric;

                            ria = ric / sqrt(2);

                            std::

                                cout << "a = " << ria << " b = " << ria << " c = " <<
                                ric;

                        }
                        else if (rc == "c") {

                            stringstream ss;

                            ss << rb;

                            ss >> rib;

                            std::

                                cout << "a = " << rib << " b = " << rib << " c = " <<
                                (rib * sqrt(2));

                        }
                        else if (ra == "a") {

                            stringstream ss;

                            ss << rc;

                            ss >> ric;

                            ria = ric / 2;

                            std::

                                cout << "a = " << rib << " b = " << rib << " c = " <<
                                ric;

                        }

                    }
                    else if (rb == "b") {

                        if (rc == "c") {

                            stringstream ss;

                            ss << ra;

                            ss >> ria;

                            std::

                                cout << "a = " << ria << " b = " << ria << " c = " <<
                                (ria * sqrt(2));

                        }
                        else if (ra == "a") {

                            stringstream ss;

                            ss << rc;

                            ss >> ric;

                            rib = ric / sqrt(2);

                            std::

                                cout << "a = " << rib << " b = " << rib << " c = " <<
                                ric;

                        }
                        else if (rb == "b") {

                            stringstream ss;

                            ss << rc;

                            ss >> ric;

                            std::

                                cout << "a = " << ria << " b = " << ria << " c = " <<
                                ric;

                        }

                    }
                    else if (rc == "c") {

                        if (rb == "b") {

                            stringstream ss;

                            ss << ra;

                            ss >> ria;

                            std::

                                cout << "a = " << ria << " b = " << ria << " c = " <<
                                (ria * sqrt(2));

                        }
                        else if (ra == "a") {

                            stringstream ss;

                            ss << rb;

                            ss >> rib;

                            std::

                                cout << "a = " << rib << " b = " << rib << " c = " <<
                                (rib * sqrt(2));

                        }
                        else if (rc == "c") {

                            stringstream ss;

                            ss << ra;

                            ss >> ria;

                            rib = ria * sqrt(3);

                            std::

                                cout << "a = " << ria << " b = " << ria << " c = " <<
                                (ria * sqrt(2)) << "\n";

                        }

                    }

                }

                std::cout << "would you like to repeat 1/0: \n";

                std::cin >> rr;

                if (rr == 0)

                {

                    std::

                        cout << "would you like to restart 1/0: \n";

                    std::cin >> r;

                    break;

                }

                system("CLS");

            } while (rr == 1);

            //factor quadratic trinomial if a!= 1
        else

            if (verification == 6)

                do

                {

                    tr1 = 0;

                    std::

                        cout <<

                        "please enter a b and c values of a trinomial where a != 1\n";

                    std::cin >> ta;

                    std::cin >> tb;

                    std::cin >> tc;

                    tfn = ta * tc;

                    {

                        std::cout << "Factors of " << tfn << " are: " << endl;

                        for (tfi = 1; tfi <= tfn; ++tfi)

                        {

                            if (tfn % tfi == 0)

                                std::cout << tfi << endl;

                        }

                    }

                    std::cout << "enter factors that add to " << tb << "\n";

                    std::cin >> tf1;

                    std::cin >> tf2;

                    tn1 = tf1;

                    tn2 = tf2;

                    if (tf1 + tf2 == tb)

                    {

                        std::cout << "Factors of " << tn1 << " are: " << endl;

                        for (tf1 = 1; tf1 <= tn1; ++tf1)

                        {

                            if (tn1 % tf1 == 0)

                                std::cout << tf1 << endl;

                        }

                        std::cout << "Factors of " << tn2 << " are: " << endl;

                        for (tf2 = 1; tf2 <= tn2; ++tf2)

                        {

                            if (tn2 % tf2 == 0)

                                std::cout << tf2 << endl;

                        }

                        std::

                            cout << "enter values for a and c that multiply to " <<
                            tfn <<
                            "\n";

                        std::cin >> ta3;

                        std::cin >> td;

                        std::cout << ta3 << td;

                        std::

                            cout << "(" << ta << "x^2 +" << ta3 << "x)" << "(" << td <<

                            "x +" << tc << ")\n";

                        std::cout << "Factors of " << ta << " are: " << endl;

                        for (tf3 = 1; tf3 <= ta; ++tf3)

                        {

                            if (ta % tf3 == 0)

                                std::cout << tf3 << endl;

                        }

                        std::cout << "Factors of " << ta3 << " are: " << endl;

                        for (tf4 = 1; tf3 <= ta3; ++tf4)

                        {

                            if (ta3 % tf4 == 0)

                                std::cout << tf4 << endl;

                        }

                        std::cout << "pick the GCF\n";

                        std::cin >> GCF1;

                        std::cout << "Factors of " << td << " are: " << endl;

                        for (tf5 = 1; tf5 <= td; ++tf5)

                        {

                            if (td % tf5 == 0)

                                std::cout << tf5 << endl;

                        }

                        std::cout << "Factors of " << tc << " are: " << endl;

                        for (tf6 = 1; tf6 <= tc; ++tf6)

                        {

                            if (tc % tf3 == 0)

                                std::cout << tf6 << endl;

                        }

                        std::cout << "pick the GCF\n";

                        std::cin >> GCF2;

                        std::cout << "(" << ta / GCF1 << "x + " << ta3 /

                            GCF1 << ")" << "(" << GCF1 << "x +" << GCF2 << ")\n";

                    }

                    std::cout << "would you like to repeat 1/0: \n";

                    std::cin >> tr;

                    if (tr == 0)

                    {

                        std::cout << "would you like to restart 1/0: \n";

                        std::cin >> r;

                        break;

                    }

                    std::cout << ".\n";

                    system("CLS");

                } while (tr == 1); \

            else

                if (verification == 8)

                    do {

                        std::
                            cout <<
                            "input side lengths or enter o a or h and x for the one you want to solve\n";

                        std::cin >> rato;

                        std::cin >> rata;

                        std::cin >> rath;

                        std::cout << "input angle or x\n";

                        std::cin >> ratx;

                        if (rato == "o") {

                            if (rata == "x" && ratx != "x") {

                                stringstream ss;

                                ss << rath;

                                ss >> ratih;

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                ratix2 = 180 - (ratix + 90);

                                ratiratxr = (ratix * PI / 180);

                                std::cout << "a = " << ratih *
                                    cos(ratiratxr) << " other angle = " << ratix2 << "\n";

                            }

                            if (rath == "x" && ratx != "x") {

                                stringstream ss;

                                ss << rata;

                                ss >> ratia;

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                ratix2 = 180 - (ratix + 90);

                                ratiratxr = (ratix * PI / 180);

                                std::cout << "h = " << ratia /
                                    cos(ratiratxr) << " other angle = " << ratix2 << "\n";

                            }

                            if (ratx == "x" && rath != "h" && rath != "x" &&
                                rata != "a" && rata != "x") {

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                stringstream ssss;

                                ssss << rath;

                                ssss >> ratih;

                                stringstream ss;

                                ss << rata;

                                ss >> ratia;

                                ratf = (ratia / ratih);

                                ratxr = (acos(ratf)) * (180 / PI);

                                std::
                                    cout << "x = " << ratxr << " other angle = " << (180 -
                                        (ratxr +
                                            90)) <<
                                    "\n";

                            }

                        }
                        else if (rata == "a") {

                            if (rato == "x" && ratx != "x") {

                                stringstream ss;

                                ss << rath;

                                ss >> ratih;

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                ratix2 = 180 - (ratix + 90);

                                ratiratxr = (ratix * PI / 180);

                                std::cout << "o = " << ratih *
                                    sin(ratiratxr) << " other angle = " << ratix2 << "\n";

                            }

                            if (rath == "x" && ratx != "x") {

                                stringstream ss;

                                ss << rato;

                                ss >> ratio;

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                ratix2 = 180 - (ratix + 90);

                                ratiratxr = (ratix * PI / 180);

                                std::cout << "h = " << ratio /
                                    sin(ratiratxr) << " other angle = " << ratix2 << "\n";

                            }

                            if (ratx == "x" && rath != "h" && rath != "x" &&
                                rato != "o" && rato != "x") {

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                stringstream ssss;

                                ssss << rath;

                                ssss >> ratih;

                                stringstream ss;

                                ss << rato;

                                ss >> ratio;

                                ratf = (ratio / ratih);

                                ratxr = (asin(ratf)) * (180 / PI);

                                std::
                                    cout << "x = " << ratxr << " other angle = " << (180 -
                                        (ratxr +
                                            90)) <<
                                    "\n";

                            }

                        }
                        else if (rath == "h") {

                            if (rato == "x" && ratx != "x") {

                                stringstream ss;

                                ss << rata;

                                ss >> ratia;

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                ratix2 = 180 - (ratix + 90);

                                ratiratxr = (ratix * PI / 180);

                                std::cout << "o = " << ratia *
                                    tan(ratiratxr) << " other angle = " << ratix2 << "\n";

                            }

                            if (rata == "x" && ratx != "x") {

                                stringstream ss;

                                ss << rato;

                                ss >> ratio;

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                ratix2 = 180 - (ratix + 90);

                                ratiratxr = (ratix * PI / 180);

                                std::cout << "a = " << ratio /
                                    tan(ratiratxr) << " other angle = " << ratix2 << "\n";

                            }

                            if (ratx == "x" && rata != "a" && rata != "x" &&
                                rato != "o" && rato != "x") {

                                stringstream sss;

                                sss << ratx;

                                sss >> ratix;

                                stringstream ssss;

                                ssss << rata;

                                ssss >> ratia;

                                stringstream ss;

                                ss << rato;

                                ss >> ratio;

                                ratf = (ratio / ratia);

                                ratxr = (atan(ratf)) * (180 / PI);

                                std::
                                    cout << "x = " << ratxr << " other angle = " << (180 -
                                        (ratxr +
                                            90)) <<
                                    "\n";

                            }

                        }

                        std::cout << "would you like to repeat 1/0: \n";

                        std::cin >> ratr;

                        if (ratr == 0)

                        {

                            std::cout << "would you like to restart 1/0: \n";

                            std::cin >> r;

                            break;

                        }

                        std::cout << ".\n";

                        system("CLS");

                    } while (ratr == 1);

                else

                {

                    std::cout << "enter a valid integer please \n";

                    std::cout << "would you like to restart 1/0: \n";

                    std::cin >> r;

                    break;

                }

    }

    while (r == 1);

}