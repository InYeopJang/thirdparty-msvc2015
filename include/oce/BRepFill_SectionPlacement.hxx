// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_SectionPlacement_HeaderFile
#define _BRepFill_SectionPlacement_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_BRepFill_LocationLaw.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Trsf.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class BRepFill_LocationLaw;
class TopoDS_Shape;
class gp_Trsf;


//! Place a shape in a local axis coordinate
class BRepFill_SectionPlacement 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Automatic placement
  Standard_EXPORT BRepFill_SectionPlacement(const Handle(BRepFill_LocationLaw)& Law, const TopoDS_Shape& Section, const Standard_Boolean WithContact = Standard_False, const Standard_Boolean WithCorrection = Standard_False);
  
  //! Placement on vertex
  Standard_EXPORT BRepFill_SectionPlacement(const Handle(BRepFill_LocationLaw)& Law, const TopoDS_Shape& Section, const TopoDS_Shape& Vertex, const Standard_Boolean WithContact = Standard_False, const Standard_Boolean WithCorrection = Standard_False);
  
  Standard_EXPORT  const  gp_Trsf& Transformation()  const;
  
  Standard_EXPORT   Standard_Real AbscissaOnPath() ;




protected:





private:

  
  Standard_EXPORT   void Perform (const Standard_Boolean WithContact, const Standard_Boolean WithCorrection, const TopoDS_Shape& Vertex) ;


  Handle(BRepFill_LocationLaw) myLaw;
  TopoDS_Shape mySection;
  gp_Trsf myTrsf;
  Standard_Real myParam;
  Standard_Integer myIndex;


};







#endif // _BRepFill_SectionPlacement_HeaderFile
