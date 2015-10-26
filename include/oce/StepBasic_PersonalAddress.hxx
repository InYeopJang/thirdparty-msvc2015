// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_PersonalAddress_HeaderFile
#define _StepBasic_PersonalAddress_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_PersonalAddress.hxx>

#include <Handle_StepBasic_HArray1OfPerson.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <StepBasic_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepBasic_Person.hxx>
#include <Standard_Integer.hxx>
class StepBasic_HArray1OfPerson;
class TCollection_HAsciiString;
class StepBasic_Person;



class StepBasic_PersonalAddress : public StepBasic_Address
{

public:

  
  //! Returns a PersonalAddress
  Standard_EXPORT StepBasic_PersonalAddress();
  
  Standard_EXPORT virtual   void Init (const Standard_Boolean hasAinternalLocation, const Handle(TCollection_HAsciiString)& aInternalLocation, const Standard_Boolean hasAstreetNumber, const Handle(TCollection_HAsciiString)& aStreetNumber, const Standard_Boolean hasAstreet, const Handle(TCollection_HAsciiString)& aStreet, const Standard_Boolean hasApostalBox, const Handle(TCollection_HAsciiString)& aPostalBox, const Standard_Boolean hasAtown, const Handle(TCollection_HAsciiString)& aTown, const Standard_Boolean hasAregion, const Handle(TCollection_HAsciiString)& aRegion, const Standard_Boolean hasApostalCode, const Handle(TCollection_HAsciiString)& aPostalCode, const Standard_Boolean hasAcountry, const Handle(TCollection_HAsciiString)& aCountry, const Standard_Boolean hasAfacsimileNumber, const Handle(TCollection_HAsciiString)& aFacsimileNumber, const Standard_Boolean hasAtelephoneNumber, const Handle(TCollection_HAsciiString)& aTelephoneNumber, const Standard_Boolean hasAelectronicMailAddress, const Handle(TCollection_HAsciiString)& aElectronicMailAddress, const Standard_Boolean hasAtelexNumber, const Handle(TCollection_HAsciiString)& aTelexNumber) ;
  
  Standard_EXPORT virtual   void Init (const Standard_Boolean hasAinternalLocation, const Handle(TCollection_HAsciiString)& aInternalLocation, const Standard_Boolean hasAstreetNumber, const Handle(TCollection_HAsciiString)& aStreetNumber, const Standard_Boolean hasAstreet, const Handle(TCollection_HAsciiString)& aStreet, const Standard_Boolean hasApostalBox, const Handle(TCollection_HAsciiString)& aPostalBox, const Standard_Boolean hasAtown, const Handle(TCollection_HAsciiString)& aTown, const Standard_Boolean hasAregion, const Handle(TCollection_HAsciiString)& aRegion, const Standard_Boolean hasApostalCode, const Handle(TCollection_HAsciiString)& aPostalCode, const Standard_Boolean hasAcountry, const Handle(TCollection_HAsciiString)& aCountry, const Standard_Boolean hasAfacsimileNumber, const Handle(TCollection_HAsciiString)& aFacsimileNumber, const Standard_Boolean hasAtelephoneNumber, const Handle(TCollection_HAsciiString)& aTelephoneNumber, const Standard_Boolean hasAelectronicMailAddress, const Handle(TCollection_HAsciiString)& aElectronicMailAddress, const Standard_Boolean hasAtelexNumber, const Handle(TCollection_HAsciiString)& aTelexNumber, const Handle(StepBasic_HArray1OfPerson)& aPeople, const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   void SetPeople (const Handle(StepBasic_HArray1OfPerson)& aPeople) ;
  
  Standard_EXPORT   Handle(StepBasic_HArray1OfPerson) People()  const;
  
  Standard_EXPORT   Handle(StepBasic_Person) PeopleValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbPeople()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;




  DEFINE_STANDARD_RTTI(StepBasic_PersonalAddress)

protected:




private: 


  Handle(StepBasic_HArray1OfPerson) people;
  Handle(TCollection_HAsciiString) description;


};







#endif // _StepBasic_PersonalAddress_HeaderFile
