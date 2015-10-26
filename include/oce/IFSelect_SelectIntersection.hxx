// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectIntersection_HeaderFile
#define _IFSelect_SelectIntersection_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IFSelect_SelectIntersection.hxx>

#include <IFSelect_SelectCombine.hxx>
class Interface_EntityIterator;
class Interface_Graph;
class TCollection_AsciiString;


//! A SelectIntersection filters the Entities issued from several
//! other Selections as Intersection of results : "AND" operator
class IFSelect_SelectIntersection : public IFSelect_SelectCombine
{

public:

  
  //! Creates an empty SelectIntersection
  Standard_EXPORT IFSelect_SelectIntersection();
  
  //! Returns the list of selected Entities, which is the common part
  //! of results from all input selections. Uniqueness is guaranteed.
  Standard_EXPORT   Interface_EntityIterator RootResult (const Interface_Graph& G)  const;
  
  //! Returns a text defining the criterium : "Intersection (AND)"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectIntersection)

protected:




private: 




};







#endif // _IFSelect_SelectIntersection_HeaderFile
