// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_GeometricRepresentationContext_HeaderFile
#define _StepGeom_GeometricRepresentationContext_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_GeometricRepresentationContext.hxx>

#include <Standard_Integer.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class TCollection_HAsciiString;



class StepGeom_GeometricRepresentationContext : public StepRepr_RepresentationContext
{

public:

  
  //! Returns a GeometricRepresentationContext
  Standard_EXPORT StepGeom_GeometricRepresentationContext();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aContextIdentifier, const Handle(TCollection_HAsciiString)& aContextType) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aContextIdentifier, const Handle(TCollection_HAsciiString)& aContextType, const Standard_Integer aCoordinateSpaceDimension) ;
  
  Standard_EXPORT   void SetCoordinateSpaceDimension (const Standard_Integer aCoordinateSpaceDimension) ;
  
  Standard_EXPORT   Standard_Integer CoordinateSpaceDimension()  const;




  DEFINE_STANDARD_RTTI(StepGeom_GeometricRepresentationContext)

protected:




private: 


  Standard_Integer coordinateSpaceDimension;


};







#endif // _StepGeom_GeometricRepresentationContext_HeaderFile
