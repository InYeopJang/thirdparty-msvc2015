// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepLib_MakeVertex_HeaderFile
#define _BRepLib_MakeVertex_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepLib_MakeShape.hxx>
class gp_Pnt;
class TopoDS_Vertex;


//! Provides methods to build vertices.
class BRepLib_MakeVertex  : public BRepLib_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepLib_MakeVertex(const gp_Pnt& P);
  
  Standard_EXPORT  const  TopoDS_Vertex& Vertex()  const;
Standard_EXPORT operator TopoDS_Vertex() const;




protected:





private:





};







#endif // _BRepLib_MakeVertex_HeaderFile
