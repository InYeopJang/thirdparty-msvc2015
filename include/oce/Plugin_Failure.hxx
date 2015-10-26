// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plugin_Failure_HeaderFile
#define _Plugin_Failure_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_Failure.hxx>
#include <Handle_Plugin_Failure.hxx>

#if !defined No_Exception && !defined No_Plugin_Failure
  #define Plugin_Failure_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Plugin_Failure::Raise(MESSAGE);
#else
  #define Plugin_Failure_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Plugin_Failure, Standard_Failure)

#endif // _Plugin_Failure_HeaderFile
