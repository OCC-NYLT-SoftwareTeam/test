#ifndef _REGEX_H
#define _REGEX_H
//*********************************************************************************
// For Regex matching
// Do not use <QRegex>, it is outdated.
#include <QRegularExpression>

// For strings
#include <QString>
//*********************************************************************************


//*********************************************************************************
//! \class   _Regex
//! \brief   Regex String Validation Class
//! \details No objects may be instantiated.  ALl methods are static.
//! \author  Bob Baker
//*********************************************************************************
class _Regex
{
public:
    //**********************************************************
    //! \brief   Contains requirements for Item names.
    //! \details Static:
    //! \param   QString itemName
    //! \return  bool isValidItemName
    //! \author  Bob Baker
    static bool isItemName(QString itemName);
    //**********************************************************
private:
    //**********************************************************
    //! \brief   Default no-args constructor
    //! \details Private: No objects can be instantiated.
    //! \author  Bob Baker
    _Regex();
    //**********************************************************
};
//*********************************************************************************

#endif // _REGEX_H
