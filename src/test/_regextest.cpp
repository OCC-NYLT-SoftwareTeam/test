#include "test/_regextest.h"
using namespace bbbTest;

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
_RegexTest::_RegexTest() { qDebug() << "\n"; }

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
_RegexTest::testTest()
{
    //************************************************************
    //* Testing begins here
    //************************************************************
    // this is test code for the test code. lol
    //QCOMPARE( actual, expected)
    QString str = "hello";
    QVERIFY(str.toUpper() == QString("HELLO"));
    QCOMPARE(5,5); //QCOMPARE( actual, expected)
    //************************************************************
}

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

_RegexTest::testIsItemName_data()
{
    QTest::addColumn<QString>("itemName");
    QTest::addColumn<bool>("result");

    QTest::newRow("all lower ") << "mypot"  << true;
    QTest::newRow("mixed case") << "MyPot"  << true;
    QTest::newRow("upper case") << "MYPOT"  << true;

    QTest::newRow("beg w. num") << "5myPot" << true;
    QTest::newRow("beg w. (  ") << "(myPot" << true;
    QTest::newRow("beg w. )  ") << ")myPot" << true;
    QTest::newRow("beg w. .  ") << ".myPot" << true;
    QTest::newRow("beg w. -  ") << "-myPot" << true;
    QTest::newRow("beg w. _  ") << "_myPot" << true;

    QTest::newRow("end w. num") << "5myPot" << true;
    QTest::newRow("end w. (  ") << "myPot(" << true;
    QTest::newRow("end w. )  ") << "myPot)" << true;
    QTest::newRow("end w. .  ") << "myPot." << true;
    QTest::newRow("end w. -  ") << "myPot-" << true;
    QTest::newRow("end w. _  ") << "myPot_" << true;

    QTest::newRow("has ()    ") << "myP()t" << true;
    QTest::newRow("has )(    ") << "myP)(t" << true;
    QTest::newRow("has ..    ") << "my..ot" << true;
    QTest::newRow("has _num  ") << "my_6ot" << true;
    QTest::newRow("has (num) ") << "myP(4)" << true;

    QTest::newRow("too short ") << ""       << false;
    QTest::newRow("too long  ") << "abcdefghijklmnopqrstuvwxyz0123456789"
                                            << false;

    // Illegal Symbols
    QTest::newRow("beg w. !  ") << "!myPot" << false;
    QTest::newRow("has    !  ") << "my!Pot" << false;
    QTest::newRow("end w. !  ") << "myPot!" << false;
    QTest::newRow("beg w. @  ") << "@myPot" << false;
    QTest::newRow("has    @  ") << "my@Pot" << false;
    QTest::newRow("end w. @  ") << "myPot@" << false;
    QTest::newRow("beg w. #  ") << "#myPot" << false;
    QTest::newRow("has    #  ") << "my#Pot" << false;
    QTest::newRow("end w. #  ") << "myPot#" << false;
    QTest::newRow("beg w. $  ") << "$myPot" << false;
    QTest::newRow("has    $  ") << "my$Pot" << false;
    QTest::newRow("end w. $  ") << "myPot$" << false;
    QTest::newRow("beg w. %  ") << "%myPot" << false;
    QTest::newRow("has    %  ") << "my%Pot" << false;
    QTest::newRow("end w. %  ") << "myPot%" << false;
    QTest::newRow("beg w. ^  ") << "^myPot" << false;
    QTest::newRow("has    ^  ") << "my^Pot" << false;
    QTest::newRow("end w. ^  ") << "myPot^" << false;
    QTest::newRow("beg w. &  ") << "&myPot" << false;
    QTest::newRow("has    &  ") << "my&Pot" << false;
    QTest::newRow("end w. &  ") << "myPot&" << false;
    QTest::newRow("beg w. *  ") << "*myPot" << false;
    QTest::newRow("has    *  ") << "my*Pot" << false;
    QTest::newRow("end w. *  ") << "myPot*" << false;
    QTest::newRow("beg w. +  ") << "+myPot" << false;
    QTest::newRow("has    +  ") << "my+Pot" << false;
    QTest::newRow("end w. +  ") << "myPot+" << false;
    QTest::newRow("beg w. =  ") << "=myPot" << false;
    QTest::newRow("has    =  ") << "my=Pot" << false;
    QTest::newRow("end w. =  ") << "myPot=" << false;
    QTest::newRow("beg w. ~  ") << "~myPot" << false;
    QTest::newRow("has    ~  ") << "my~Pot" << false;
    QTest::newRow("end w. ~  ") << "myPot~" << false;
}

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

_RegexTest::testIsItemName()
{
    //************************************************************
    //* Testing begins here
    //************************************************************
    QFETCH(QString, itemName);
    QFETCH(bool, result);

    typedef bbb::_Regex rx;

    //QCOMPARE( actual, expected)
    QCOMPARE(rx.isItemName(itemName), result);
    //************************************************************
}