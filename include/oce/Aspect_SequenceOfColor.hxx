// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_SequenceOfColor_HeaderFile
#define _Aspect_SequenceOfColor_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_Aspect_SequenceNodeOfSequenceOfColor.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Quantity_Color;
class Aspect_SequenceNodeOfSequenceOfColor;



class Aspect_SequenceOfColor  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Aspect_SequenceOfColor();
  
  Standard_EXPORT Aspect_SequenceOfColor(const Aspect_SequenceOfColor& Other);
  
  Standard_EXPORT   void Clear() ;
~Aspect_SequenceOfColor()
{
  Clear();
}
  
  Standard_EXPORT  const  Aspect_SequenceOfColor& Assign (const Aspect_SequenceOfColor& Other) ;
 const  Aspect_SequenceOfColor& operator = (const Aspect_SequenceOfColor& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Quantity_Color& T) ;
  
      void Append (Aspect_SequenceOfColor& S) ;
  
  Standard_EXPORT   void Prepend (const Quantity_Color& T) ;
  
      void Prepend (Aspect_SequenceOfColor& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Quantity_Color& T) ;
  
      void InsertBefore (const Standard_Integer Index, Aspect_SequenceOfColor& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Quantity_Color& T) ;
  
      void InsertAfter (const Standard_Integer Index, Aspect_SequenceOfColor& S) ;
  
  Standard_EXPORT  const  Quantity_Color& First()  const;
  
  Standard_EXPORT  const  Quantity_Color& Last()  const;
  
      void Split (const Standard_Integer Index, Aspect_SequenceOfColor& Sub) ;
  
  Standard_EXPORT  const  Quantity_Color& Value (const Standard_Integer Index)  const;
 const  Quantity_Color& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Quantity_Color& I) ;
  
  Standard_EXPORT   Quantity_Color& ChangeValue (const Standard_Integer Index) ;
  Quantity_Color& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Quantity_Color
#define SeqItem_hxx <Quantity_Color.hxx>
#define TCollection_SequenceNode Aspect_SequenceNodeOfSequenceOfColor
#define TCollection_SequenceNode_hxx <Aspect_SequenceNodeOfSequenceOfColor.hxx>
#define Handle_TCollection_SequenceNode Handle_Aspect_SequenceNodeOfSequenceOfColor
#define TCollection_SequenceNode_Type_() Aspect_SequenceNodeOfSequenceOfColor_Type_()
#define TCollection_Sequence Aspect_SequenceOfColor
#define TCollection_Sequence_hxx <Aspect_SequenceOfColor.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Aspect_SequenceOfColor_HeaderFile
