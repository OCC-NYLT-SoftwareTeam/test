#include "_regex.h"
using namespace bbb;

//*********************************************************************************
_Regex::_Regex()
{

}
//*********************************************************************************

//*********************************************************************************
bool _Regex::isItemName(QString s)
{
    // need to sanitize string for spec. chars.
    QRegularExpression rx("^[-A-Za-z0-9()._]{1}[-A-Za-z0-9() ._]{0,35}$");
    QRegularExpressionMatch match = rx.match(s);
    return match.hasMatch();
}
//*********************************************************************************


//*********************************************************************************
bool _Regex::isBoxName(QString s)
{
    QRegularExpression rx("^[A-Za-z0-9().-_]{1}[A-Za-z0-9() .-_]{0,25}$");
    QRegularExpressionMatch match = rx.match(s);
    return match.hasMatch();
}
//*********************************************************************************
