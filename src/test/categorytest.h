#ifndef CATEGORYTEST_H
#define CATEGORYTEST_H

#include <QObject>
#include <QtTest>
#include <QString>

#include "category.h"

namespace bbbTest {
/***********************************************************************************/
//! \class   CategoryTest
//! \brief   Contains the tests for the Category class
//! \details This file is only on included in test builds.  It will not be
//!             complied debug or release builds. It will be used by travis.ci to
//!             run unit tests for the Category class
//! \test
//! \author Bob Baker
/***********************************************************************************/
class CategoryTest : public QObject
{
    Q_OBJECT
public:
    //************************************************************
    //! \brief Default Constructor
    //! \author Bob Baker
    CategoryTest();
    //************************************************************

// All testing functions must be in private slots.
private slots:
    //************************************************************
    //* Testing Functions
    //************************************************************
    //! \brief Makes sure QTest, .yml an travis.ci are working.
    //! \test
    //! \author Bob Baker
    void testTest();
    //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    //! \brief Tests the int values of the enums
    //! \test
    //! \author Bob Baker
    void testCatEnumVals();
    //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    //! \brief Test Data for testIntToString()
    //! \test
    //! \author Bob Baker
    void testIntToString_data();
    //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    //! \brief Tests int to QString conversions
    //! \test
    //! \author Bob Baker
    void testIntToString();
    //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    //! \brief Test Data for String to int convertions
    //! \test
    //! \author Bob Baker
    void testStringToInt_data();
    //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    //! \brief Tests for String to int convertions
    //! \test
    //! \author Bob Baker
    void testStringToInt();
    //************************************************************

}; // end class
/***********************************************************************************/

} // end namespace
#endif // CATEGORYTEST_H
