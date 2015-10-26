// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Intrv_SequenceOfInterval_HeaderFile
#define _Intrv_SequenceOfInterval_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_Intrv_SequenceNodeOfSequenceOfInterval.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Intrv_Interval;
class Intrv_SequenceNodeOfSequenceOfInterval;



class Intrv_SequenceOfInterval  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Intrv_SequenceOfInterval();
  
  Standard_EXPORT Intrv_SequenceOfInterval(const Intrv_SequenceOfInterval& Other);
  
  Standard_EXPORT   void Clear() ;
~Intrv_SequenceOfInterval()
{
  Clear();
}
  
  Standard_EXPORT  const  Intrv_SequenceOfInterval& Assign (const Intrv_SequenceOfInterval& Other) ;
 const  Intrv_SequenceOfInterval& operator = (const Intrv_SequenceOfInterval& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Intrv_Interval& T) ;
  
      void Append (Intrv_SequenceOfInterval& S) ;
  
  Standard_EXPORT   void Prepend (const Intrv_Interval& T) ;
  
      void Prepend (Intrv_SequenceOfInterval& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Intrv_Interval& T) ;
  
      void InsertBefore (const Standard_Integer Index, Intrv_SequenceOfInterval& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Intrv_Interval& T) ;
  
      void InsertAfter (const Standard_Integer Index, Intrv_SequenceOfInterval& S) ;
  
  Standard_EXPORT  const  Intrv_Interval& First()  const;
  
  Standard_EXPORT  const  Intrv_Interval& Last()  const;
  
      void Split (const Standard_Integer Index, Intrv_SequenceOfInterval& Sub) ;
  
  Standard_EXPORT  const  Intrv_Interval& Value (const Standard_Integer Index)  const;
 const  Intrv_Interval& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Intrv_Interval& I) ;
  
  Standard_EXPORT   Intrv_Interval& ChangeValue (const Standard_Integer Index) ;
  Intrv_Interval& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Intrv_Interval
#define SeqItem_hxx <Intrv_Interval.hxx>
#define TCollection_SequenceNode Intrv_SequenceNodeOfSequenceOfInterval
#define TCollection_SequenceNode_hxx <Intrv_SequenceNodeOfSequenceOfInterval.hxx>
#define Handle_TCollection_SequenceNode Handle_Intrv_SequenceNodeOfSequenceOfInterval
#define TCollection_SequenceNode_Type_() Intrv_SequenceNodeOfSequenceOfInterval_Type_()
#define TCollection_Sequence Intrv_SequenceOfInterval
#define TCollection_Sequence_hxx <Intrv_SequenceOfInterval.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Intrv_SequenceOfInterval_HeaderFile
