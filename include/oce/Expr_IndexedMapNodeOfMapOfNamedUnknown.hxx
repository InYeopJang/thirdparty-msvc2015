// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_IndexedMapNodeOfMapOfNamedUnknown_HeaderFile
#define _Expr_IndexedMapNodeOfMapOfNamedUnknown_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Expr_IndexedMapNodeOfMapOfNamedUnknown.hxx>

#include <Handle_Expr_NamedUnknown.hxx>
#include <Standard_Integer.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class Expr_NamedUnknown;
class TColStd_MapTransientHasher;
class Expr_MapOfNamedUnknown;



class Expr_IndexedMapNodeOfMapOfNamedUnknown : public TCollection_MapNode
{

public:

  
    Expr_IndexedMapNodeOfMapOfNamedUnknown(const Handle(Expr_NamedUnknown)& K1, const Standard_Integer K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(Expr_NamedUnknown)& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(Expr_IndexedMapNodeOfMapOfNamedUnknown)

protected:




private: 


  Handle(Expr_NamedUnknown) myKey1;
  Standard_Integer myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey Handle(Expr_NamedUnknown)
#define TheKey_hxx <Expr_NamedUnknown.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedMapNode Expr_IndexedMapNodeOfMapOfNamedUnknown
#define TCollection_IndexedMapNode_hxx <Expr_IndexedMapNodeOfMapOfNamedUnknown.hxx>
#define Handle_TCollection_IndexedMapNode Handle_Expr_IndexedMapNodeOfMapOfNamedUnknown
#define TCollection_IndexedMapNode_Type_() Expr_IndexedMapNodeOfMapOfNamedUnknown_Type_()
#define TCollection_IndexedMap Expr_MapOfNamedUnknown
#define TCollection_IndexedMap_hxx <Expr_MapOfNamedUnknown.hxx>

#include <TCollection_IndexedMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_hxx
#undef Handle_TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_Type_
#undef TCollection_IndexedMap
#undef TCollection_IndexedMap_hxx




#endif // _Expr_IndexedMapNodeOfMapOfNamedUnknown_HeaderFile
