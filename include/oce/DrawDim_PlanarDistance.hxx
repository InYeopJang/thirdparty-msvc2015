// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawDim_PlanarDistance_HeaderFile
#define _DrawDim_PlanarDistance_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_DrawDim_PlanarDistance.hxx>

#include <TopoDS_Shape.hxx>
#include <DrawDim_PlanarDimension.hxx>
class TopoDS_Face;
class TopoDS_Shape;
class Draw_Display;
class gp_Pnt;
class TopoDS_Edge;


//! PlanarDistance point/point
//! PlanarDistance point/line
//! PlanarDistance line/line
class DrawDim_PlanarDistance : public DrawDim_PlanarDimension
{

public:

  
  Standard_EXPORT DrawDim_PlanarDistance(const TopoDS_Face& plane, const TopoDS_Shape& point1, const TopoDS_Shape& point2);
  
  Standard_EXPORT DrawDim_PlanarDistance(const TopoDS_Shape& geom1, const TopoDS_Shape& geom2);
  
  //! private
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;




  DEFINE_STANDARD_RTTI(DrawDim_PlanarDistance)

protected:




private: 

  
  Standard_EXPORT   void Draw (const gp_Pnt& p, const TopoDS_Edge& e, Draw_Display& d)  const;

  TopoDS_Shape myGeom1;
  TopoDS_Shape myGeom2;


};







#endif // _DrawDim_PlanarDistance_HeaderFile
