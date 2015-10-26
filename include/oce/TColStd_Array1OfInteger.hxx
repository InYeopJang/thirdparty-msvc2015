// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_Array1OfInteger_HeaderFile
#define _TColStd_Array1OfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;



class TColStd_Array1OfInteger 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColStd_Array1OfInteger(const Standard_Integer Low, const Standard_Integer Up);
  
    TColStd_Array1OfInteger(const Standard_Integer& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Standard_Integer& V) ;
  
      void Destroy() ;
~TColStd_Array1OfInteger()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TColStd_Array1OfInteger& Assign (const TColStd_Array1OfInteger& Other) ;
 const  TColStd_Array1OfInteger& operator = (const TColStd_Array1OfInteger& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Standard_Integer& Value) ;
  
     const  Standard_Integer& Value (const Standard_Integer Index)  const;
   const  Standard_Integer& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Standard_Integer& ChangeValue (const Standard_Integer Index) ;
    Standard_Integer& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TColStd_Array1OfInteger(const TColStd_Array1OfInteger& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Standard_Integer
#define Array1Item_hxx <Standard_Integer.hxx>
#define TCollection_Array1 TColStd_Array1OfInteger
#define TCollection_Array1_hxx <TColStd_Array1OfInteger.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TColStd_Array1OfInteger_HeaderFile
