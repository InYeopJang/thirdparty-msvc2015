// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Axis_HeaderFile
#define _AIS_Axis_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AIS_Axis.hxx>

#include <Handle_Geom_Line.hxx>
#include <Handle_Geom_Axis2Placement.hxx>
#include <gp_Pnt.hxx>
#include <AIS_TypeOfAxis.hxx>
#include <Standard_Boolean.hxx>
#include <gp_Dir.hxx>
#include <Standard_Real.hxx>
#include <Standard_CString.hxx>
#include <Handle_Prs3d_LineAspect.hxx>
#include <AIS_InteractiveObject.hxx>
#include <Handle_Geom_Axis1Placement.hxx>
#include <Standard_Integer.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Prs3d_Projector.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <Handle_SelectMgr_Selection.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Quantity_NameOfColor.hxx>
class Geom_Line;
class Geom_Axis2Placement;
class Prs3d_LineAspect;
class Geom_Axis1Placement;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;
class Quantity_Color;


//! Locates the x, y and z axes in an Interactive Object.
//! These are used to orient it correctly in presentations
//! from different viewpoints, or to construct a revolved
//! shape, for example, from one of the axes. Conversely,
//! an axis can be created to build a revolved shape and
//! then situated relative to one of the axes of the view.
class AIS_Axis : public AIS_InteractiveObject
{

public:

  
  //! Initializes the line aComponent
  Standard_EXPORT AIS_Axis(const Handle(Geom_Line)& aComponent);
  
  //! initializes the axis2 position
  //! aComponent. The coordinate system used is right-handed.
  Standard_EXPORT AIS_Axis(const Handle(Geom_Axis2Placement)& aComponent, const AIS_TypeOfAxis anAxisType);
  
  //! Initializes the axis1 position anAxis.
  Standard_EXPORT AIS_Axis(const Handle(Geom_Axis1Placement)& anAxis);
  

  //! Returns the axis entity aComponent and identifies it
  //! as a component of a shape.
     const  Handle(Geom_Line)& Component()  const;
  
  //! Sets the coordinates of the lin aComponent.
  Standard_EXPORT   void SetComponent (const Handle(Geom_Line)& aComponent) ;
  

  //! Returns the position of axis2 and   positions it by
  //! identifying it as the x, y, or z axis and giving its
  //! direction in 3D space. The coordinate system used is right-handed.
     const  Handle(Geom_Axis2Placement)& Axis2Placement()  const;
  

  //! Allows you to provide settings for aComponent:the
  //! position and direction of an axis in 3D space. The
  //! coordinate system used is right-handed.
  Standard_EXPORT   void SetAxis2Placement (const Handle(Geom_Axis2Placement)& aComponent, const AIS_TypeOfAxis anAxisType) ;
  
  //! Constructs a new line to serve as the axis anAxis in 3D space.
  Standard_EXPORT   void SetAxis1Placement (const Handle(Geom_Axis1Placement)& anAxis) ;
  
  //! Returns the type of axis.
      AIS_TypeOfAxis TypeOfAxis()  const;
  

  //! Constructs the entity aTypeAxis to stock information
  //! concerning type of axis.
      void SetTypeOfAxis (const AIS_TypeOfAxis aTypeAxis) ;
  

  //! Returns a signature of 2 for axis datums. When you
  //! activate mode 2 by a signature, you pick AIS objects
  //! of type AIS_Axis.
      Standard_Boolean IsXYZAxis()  const;
  
  //! Returns true if the interactive object accepts the display mode aMode.
  Standard_EXPORT   Standard_Boolean AcceptDisplayMode (const Standard_Integer aMode)  const;
  
  //! computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;
  
    virtual   Standard_Integer Signature()  const;
  
    virtual   AIS_KindOfInteractive Type()  const;
  
  Standard_EXPORT   void SetColor (const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT   void SetColor (const Quantity_Color& aColor) ;
  
  Standard_EXPORT   void SetWidth (const Standard_Real aValue) ;
  
  Standard_EXPORT   void UnsetColor() ;
  
  Standard_EXPORT   void UnsetWidth() ;




  DEFINE_STANDARD_RTTI(AIS_Axis)

protected:




private: 

  
  Standard_EXPORT   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;
  
  Standard_EXPORT   void ComputeFields() ;

  Handle(Geom_Line) myComponent;
  Handle(Geom_Axis2Placement) myAx2;
  gp_Pnt myPfirst;
  gp_Pnt myPlast;
  AIS_TypeOfAxis myTypeOfAxis;
  Standard_Boolean myIsXYZAxis;
  gp_Dir myDir;
  Standard_Real myVal;
  Standard_CString myText;
  Handle(Prs3d_LineAspect) myLineAspect;


};


#include <AIS_Axis.lxx>





#endif // _AIS_Axis_HeaderFile
