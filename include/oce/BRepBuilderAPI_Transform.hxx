// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_Transform_HeaderFile
#define _BRepBuilderAPI_Transform_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <gp_Trsf.hxx>
#include <TopLoc_Location.hxx>
#include <Standard_Boolean.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
class Standard_NoSuchObject;
class gp_Trsf;
class TopoDS_Shape;
class TopTools_ListOfShape;


//! Geometric transformation on a shape.
//! The transformation to be applied is defined as a
//! gp_Trsf transformation, i.e. a transformation which does
//! not modify the underlying geometry of shapes.
//! The transformation is applied to:
//! -   all curves which support edges of a shape, and
//! -   all surfaces which support its faces.
//! A Transform object provides a framework for:
//! -   defining the geometric transformation to be applied,
//! -   implementing the transformation algorithm, and
//! -   consulting the results.
class BRepBuilderAPI_Transform  : public BRepBuilderAPI_ModifyShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a framework for applying the geometric
  //! transformation T to a shape. Use the function Perform
  //! to define the shape to transform.
  Standard_EXPORT BRepBuilderAPI_Transform(const gp_Trsf& T);
  
  //! Creates a transformation from the gp_Trsf <T>, and
  //! applies it to the shape <S>. If the transformation
  //! is  direct   and isometric (determinant  =  1) and
  //! <Copy> =  Standard_False,  the resulting shape  is
  //! <S> on   which  a  new  location has    been  set.
  //! Otherwise,  the   transformation is applied   on a
  //! duplication of <S>.
  Standard_EXPORT BRepBuilderAPI_Transform(const TopoDS_Shape& S, const gp_Trsf& T, const Standard_Boolean Copy = Standard_False);
  
  //! pplies the geometric transformation defined at the
  //! time of construction of this framework to the shape S.
  //! - If the transformation T is direct and isometric, in
  //! other words, if the determinant of the vectorial part
  //! of T is equal to 1., and if Copy equals false (the
  //! default value), the resulting shape is the same as
  //! the original but with a new location assigned to it.
  //! -   In all other cases, the transformation is applied to a duplicate of S.
  //! Use the function Shape to access the result.
  //! Note: this framework can be reused to apply the same
  //! geometric transformation to other shapes. You only
  //! need to specify them by calling the function Perform again.
  Standard_EXPORT   void Perform (const TopoDS_Shape& S, const Standard_Boolean Copy = Standard_False) ;
  
  //! Returns the modified shape corresponding to <S>.
  Standard_EXPORT virtual  const  TopoDS_Shape& ModifiedShape (const TopoDS_Shape& S)  const;
  
  //! Returns the list  of shapes modified from the shape
  //! <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& S) ;




protected:





private:



  gp_Trsf myTrsf;
  TopLoc_Location myLocation;
  Standard_Boolean myUseModif;


};







#endif // _BRepBuilderAPI_Transform_HeaderFile
