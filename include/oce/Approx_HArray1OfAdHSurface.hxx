// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Approx_HArray1OfAdHSurface_HeaderFile
#define _Approx_HArray1OfAdHSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Approx_HArray1OfAdHSurface.hxx>

#include <Approx_Array1OfAdHSurface.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Adaptor3d_HSurface;
class Approx_Array1OfAdHSurface;



class Approx_HArray1OfAdHSurface : public MMgt_TShared
{

public:

  
    Approx_HArray1OfAdHSurface(const Standard_Integer Low, const Standard_Integer Up);
  
    Approx_HArray1OfAdHSurface(const Standard_Integer Low, const Standard_Integer Up, const Handle(Adaptor3d_HSurface)& V);
  
      void Init (const Handle(Adaptor3d_HSurface)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Adaptor3d_HSurface)& Value) ;
  
     const  Handle(Adaptor3d_HSurface)& Value (const Standard_Integer Index)  const;
  
      Handle(Adaptor3d_HSurface)& ChangeValue (const Standard_Integer Index) ;
  
     const  Approx_Array1OfAdHSurface& Array1()  const;
  
      Approx_Array1OfAdHSurface& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Approx_HArray1OfAdHSurface)

protected:




private: 


  Approx_Array1OfAdHSurface myArray;


};

#define ItemHArray1 Handle(Adaptor3d_HSurface)
#define ItemHArray1_hxx <Adaptor3d_HSurface.hxx>
#define TheArray1 Approx_Array1OfAdHSurface
#define TheArray1_hxx <Approx_Array1OfAdHSurface.hxx>
#define TCollection_HArray1 Approx_HArray1OfAdHSurface
#define TCollection_HArray1_hxx <Approx_HArray1OfAdHSurface.hxx>
#define Handle_TCollection_HArray1 Handle_Approx_HArray1OfAdHSurface
#define TCollection_HArray1_Type_() Approx_HArray1OfAdHSurface_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _Approx_HArray1OfAdHSurface_HeaderFile
