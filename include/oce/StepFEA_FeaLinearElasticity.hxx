// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaLinearElasticity_HeaderFile
#define _StepFEA_FeaLinearElasticity_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_FeaLinearElasticity.hxx>

#include <StepFEA_SymmetricTensor43d.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class TCollection_HAsciiString;
class StepFEA_SymmetricTensor43d;


//! Representation of STEP entity FeaLinearElasticity
class StepFEA_FeaLinearElasticity : public StepFEA_FeaMaterialPropertyRepresentationItem
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_FeaLinearElasticity();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentationItem_Name, const StepFEA_SymmetricTensor43d& aFeaConstants) ;
  
  //! Returns field FeaConstants
  Standard_EXPORT   StepFEA_SymmetricTensor43d FeaConstants()  const;
  
  //! Set field FeaConstants
  Standard_EXPORT   void SetFeaConstants (const StepFEA_SymmetricTensor43d& FeaConstants) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaLinearElasticity)

protected:




private: 


  StepFEA_SymmetricTensor43d theFeaConstants;


};







#endif // _StepFEA_FeaLinearElasticity_HeaderFile
