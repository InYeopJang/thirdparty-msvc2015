// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_HArray1OfPresentationStyleAssignment_HeaderFile
#define _StepVisual_HArray1OfPresentationStyleAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_HArray1OfPresentationStyleAssignment.hxx>

#include <StepVisual_Array1OfPresentationStyleAssignment.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_StepVisual_PresentationStyleAssignment.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepVisual_PresentationStyleAssignment;
class StepVisual_Array1OfPresentationStyleAssignment;



class StepVisual_HArray1OfPresentationStyleAssignment : public MMgt_TShared
{

public:

  
    StepVisual_HArray1OfPresentationStyleAssignment(const Standard_Integer Low, const Standard_Integer Up);
  
    StepVisual_HArray1OfPresentationStyleAssignment(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepVisual_PresentationStyleAssignment)& V);
  
      void Init (const Handle(StepVisual_PresentationStyleAssignment)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepVisual_PresentationStyleAssignment)& Value) ;
  
     const  Handle(StepVisual_PresentationStyleAssignment)& Value (const Standard_Integer Index)  const;
  
      Handle(StepVisual_PresentationStyleAssignment)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepVisual_Array1OfPresentationStyleAssignment& Array1()  const;
  
      StepVisual_Array1OfPresentationStyleAssignment& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepVisual_HArray1OfPresentationStyleAssignment)

protected:




private: 


  StepVisual_Array1OfPresentationStyleAssignment myArray;


};

#define ItemHArray1 Handle(StepVisual_PresentationStyleAssignment)
#define ItemHArray1_hxx <StepVisual_PresentationStyleAssignment.hxx>
#define TheArray1 StepVisual_Array1OfPresentationStyleAssignment
#define TheArray1_hxx <StepVisual_Array1OfPresentationStyleAssignment.hxx>
#define TCollection_HArray1 StepVisual_HArray1OfPresentationStyleAssignment
#define TCollection_HArray1_hxx <StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#define Handle_TCollection_HArray1 Handle_StepVisual_HArray1OfPresentationStyleAssignment
#define TCollection_HArray1_Type_() StepVisual_HArray1OfPresentationStyleAssignment_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepVisual_HArray1OfPresentationStyleAssignment_HeaderFile
