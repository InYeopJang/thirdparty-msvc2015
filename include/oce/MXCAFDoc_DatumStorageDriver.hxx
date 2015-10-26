// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MXCAFDoc_DatumStorageDriver_HeaderFile
#define _MXCAFDoc_DatumStorageDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MXCAFDoc_DatumStorageDriver.hxx>

#include <MDF_ASDriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_PDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_MDF_SRelocationTable.hxx>
class CDM_MessageDriver;
class Standard_Type;
class PDF_Attribute;
class TDF_Attribute;
class MDF_SRelocationTable;



class MXCAFDoc_DatumStorageDriver : public MDF_ASDriver
{

public:

  
  //! Returns mutable DatumStorageDriver from MXCAFDoc;
  Standard_EXPORT MXCAFDoc_DatumStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver);
  
  //! Returns the version number from which the driver
  //! is available: 0.
  Standard_EXPORT   Standard_Integer VersionNumber()  const;
  
  //! Returns the type: XCAFDoc_Datum.
  Standard_EXPORT   Handle(Standard_Type) SourceType()  const;
  
  Standard_EXPORT   Handle(PDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, const Handle(PDF_Attribute)& Target, const Handle(MDF_SRelocationTable)& RelocTable)  const;




  DEFINE_STANDARD_RTTI(MXCAFDoc_DatumStorageDriver)

protected:




private: 




};







#endif // _MXCAFDoc_DatumStorageDriver_HeaderFile
