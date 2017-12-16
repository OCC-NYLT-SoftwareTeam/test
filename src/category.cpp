#include "category.h"

//*********************************************************************************
Category::Category()
{

}
//*********************************************************************************

//*********************************************************************************
QString Category::categoryToQString(Category::categoryType cat)
{
    QStringList categoryStrLs = QStringList() << "Kitchen" <<
                     "Propane / Stoves" <<
                     "Arts and Crafts" <<
                     "Tarps" <<
                     "Office";
    return categoryStrLs[static_cast<int> (cat)];
}
//*********************************************************************************

//*********************************************************************************
QString Category::categoryToQString(int cat)
{
    QStringList categoryStrLs = QStringList() << "Kitchen" <<
                     "Propane / Stoves" <<
                     "Arts and Crafts" <<
                     "Tarps" <<
                     "Office";
    return categoryStrLs[static_cast<int> (cat)];
}
//*********************************************************************************