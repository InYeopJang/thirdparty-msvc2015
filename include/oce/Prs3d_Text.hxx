// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_Text_HeaderFile
#define _Prs3d_Text_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Prs3d_Root.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Prs3d_Drawer.hxx>
#include <Handle_Prs3d_TextAspect.hxx>
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class Prs3d_TextAspect;


//! A framework to define the display of texts.
class Prs3d_Text  : public Prs3d_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Defines the display of the text aText at the point AttachmentPoint.
  //! The drawer aDrawer specifies the display attributes which texts will have.
  //! The presentation object aPresentation stores the
  //! information defined in this framework.
  //! static void Draw (const Handle(Prs3d_Presentation)&
  //! aPresentation, const Handle(Prs3d_TextAspect)&
  //! anAspect, const TCollection_ExtendedString& aText,
  //! const gp_Pnt& AttachmentPoint);
  Standard_EXPORT static   void Draw (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const TCollection_ExtendedString& aText, const gp_Pnt& AttachmentPoint) ;
  
  //! Defines the display of the text aText at the point
  //! AttachmentPoint.
  //! The text aspect object anAspect specifies the display
  //! attributes which texts will have.
  //! The presentation object aPresentation stores the
  //! information defined in this framework.
  //! This syntax could be used if you had not already
  //! defined text display attributes in a drawer or if you
  //! wanted to exceptionally overide the definition
  //! provided in your drawer.
  Standard_EXPORT static   void Draw (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_TextAspect)& anAspect, const TCollection_ExtendedString& aText, const gp_Pnt& AttachmentPoint) ;




protected:





private:





};







#endif // _Prs3d_Text_HeaderFile
