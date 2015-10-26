// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_CInter_HeaderFile
#define _HLRBRep_CInter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <IntCurve_IntConicConic.hxx>
#include <HLRBRep_TheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <IntRes2d_Intersection.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_ConstructionError;
class HLRBRep_CurveTool;
class HLRBRep_TheProjPCurOfCInter;
class HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter;
class HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter;
class HLRBRep_TheIntConicCurveOfCInter;
class HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter;
class HLRBRep_IntConicCurveOfCInter;
class HLRBRep_TheIntPCurvePCurveOfCInter;
class HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter;
class HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter;
class HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter;
class IntRes2d_Domain;
class TColStd_Array1OfReal;



class HLRBRep_CInter  : public IntRes2d_Intersection
{
public:

  DEFINE_STANDARD_ALLOC

  
    HLRBRep_CInter();
  
    HLRBRep_CInter(const Standard_Address& C, const Standard_Real TolConf, const Standard_Real Tol);
  
    HLRBRep_CInter(const Standard_Address& C, const IntRes2d_Domain& D, const Standard_Real TolConf, const Standard_Real Tol);
  
    HLRBRep_CInter(const Standard_Address& C1, const Standard_Address& C2, const Standard_Real TolConf, const Standard_Real Tol);
  
    HLRBRep_CInter(const Standard_Address& C1, const IntRes2d_Domain& D1, const Standard_Address& C2, const Standard_Real TolConf, const Standard_Real Tol);
  
    HLRBRep_CInter(const Standard_Address& C1, const Standard_Address& C2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
    HLRBRep_CInter(const Standard_Address& C1, const IntRes2d_Domain& D1, const Standard_Address& C2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT   void Perform (const Standard_Address& C1, const IntRes2d_Domain& D1, const Standard_Address& C2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
      void Perform (const Standard_Address& C1, const Standard_Address& C2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   void Perform (const Standard_Address& C1, const IntRes2d_Domain& D1, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   void Perform (const Standard_Address& C1, const Standard_Real TolConf, const Standard_Real Tol) ;
  
      void Perform (const Standard_Address& C1, const IntRes2d_Domain& D1, const Standard_Address& C2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
      void Perform (const Standard_Address& C1, const Standard_Address& C2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   IntRes2d_Domain ComputeDomain (const Standard_Address& C1, const Standard_Real TolDomain)  const;




protected:





private:

  
  Standard_EXPORT   void InternalPerform (const Standard_Address& C1, const IntRes2d_Domain& D1, const Standard_Address& C2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean Composite) ;
  
  Standard_EXPORT   void InternalCompositePerform_noRecurs (const Standard_Integer NbInterC1, const Standard_Address& C1, const Standard_Integer NumInterC1, const TColStd_Array1OfReal& Tab1, const IntRes2d_Domain& D1, const Standard_Integer NbInterC2, const Standard_Address& C2, const Standard_Integer NumInterC2, const TColStd_Array1OfReal& Tab2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   void InternalCompositePerform (const Standard_Address& C1, const IntRes2d_Domain& D1, const Standard_Integer N1, const Standard_Integer NB1, const TColStd_Array1OfReal& Tab1, const Standard_Address& C2, const IntRes2d_Domain& D2, const Standard_Integer N2, const Standard_Integer NB2, const TColStd_Array1OfReal& Tab2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean Composite) ;


  Standard_Real param1inf;
  Standard_Real param1sup;
  Standard_Real param2inf;
  Standard_Real param2sup;
  IntCurve_IntConicConic intconiconi;
  HLRBRep_TheIntConicCurveOfCInter intconicurv;
  HLRBRep_TheIntPCurvePCurveOfCInter intcurvcurv;


};

#define TheCurve Standard_Address
#define TheCurve_hxx <Standard_Address.hxx>
#define TheCurveTool HLRBRep_CurveTool
#define TheCurveTool_hxx <HLRBRep_CurveTool.hxx>
#define IntCurve_TheProjPCur HLRBRep_TheProjPCurOfCInter
#define IntCurve_TheProjPCur_hxx <HLRBRep_TheProjPCurOfCInter.hxx>
#define IntCurve_TheCurveLocatorOfTheProjPCur HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter
#define IntCurve_TheCurveLocatorOfTheProjPCur_hxx <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#define IntCurve_TheLocateExtPCOfTheProjPCur HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter
#define IntCurve_TheLocateExtPCOfTheProjPCur_hxx <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#define IntCurve_TheCurveLocatorOfTheProjPCur HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter
#define IntCurve_TheCurveLocatorOfTheProjPCur_hxx <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#define IntCurve_TheLocateExtPCOfTheProjPCur HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter
#define IntCurve_TheLocateExtPCOfTheProjPCur_hxx <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#define IntCurve_TheIntConicCurve HLRBRep_TheIntConicCurveOfCInter
#define IntCurve_TheIntConicCurve_hxx <HLRBRep_TheIntConicCurveOfCInter.hxx>
#define IntCurve_TheIntersectorOfTheIntConicCurve HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter
#define IntCurve_TheIntersectorOfTheIntConicCurve_hxx <HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx>
#define IntCurve_TheIntersectorOfTheIntConicCurve HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter
#define IntCurve_TheIntersectorOfTheIntConicCurve_hxx <HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx>
#define IntCurve_IntConicCurve HLRBRep_IntConicCurveOfCInter
#define IntCurve_IntConicCurve_hxx <HLRBRep_IntConicCurveOfCInter.hxx>
#define IntCurve_TheIntPCurvePCurve HLRBRep_TheIntPCurvePCurveOfCInter
#define IntCurve_TheIntPCurvePCurve_hxx <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#define IntCurve_ThePolygon2dOfTheIntPCurvePCurve HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter
#define IntCurve_ThePolygon2dOfTheIntPCurvePCurve_hxx <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#define IntCurve_TheDistBetweenPCurvesOfTheIntPCurvePCurve HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter
#define IntCurve_TheDistBetweenPCurvesOfTheIntPCurvePCurve_hxx <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#define IntCurve_ExactIntersectionPointOfTheIntPCurvePCurve HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter
#define IntCurve_ExactIntersectionPointOfTheIntPCurvePCurve_hxx <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#define IntCurve_ThePolygon2dOfTheIntPCurvePCurve HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter
#define IntCurve_ThePolygon2dOfTheIntPCurvePCurve_hxx <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#define IntCurve_TheDistBetweenPCurvesOfTheIntPCurvePCurve HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter
#define IntCurve_TheDistBetweenPCurvesOfTheIntPCurvePCurve_hxx <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#define IntCurve_ExactIntersectionPointOfTheIntPCurvePCurve HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter
#define IntCurve_ExactIntersectionPointOfTheIntPCurvePCurve_hxx <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#define IntCurve_IntCurveCurveGen HLRBRep_CInter
#define IntCurve_IntCurveCurveGen_hxx <HLRBRep_CInter.hxx>

#include <IntCurve_IntCurveCurveGen.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef TheCurveTool
#undef TheCurveTool_hxx
#undef IntCurve_TheProjPCur
#undef IntCurve_TheProjPCur_hxx
#undef IntCurve_TheCurveLocatorOfTheProjPCur
#undef IntCurve_TheCurveLocatorOfTheProjPCur_hxx
#undef IntCurve_TheLocateExtPCOfTheProjPCur
#undef IntCurve_TheLocateExtPCOfTheProjPCur_hxx
#undef IntCurve_TheCurveLocatorOfTheProjPCur
#undef IntCurve_TheCurveLocatorOfTheProjPCur_hxx
#undef IntCurve_TheLocateExtPCOfTheProjPCur
#undef IntCurve_TheLocateExtPCOfTheProjPCur_hxx
#undef IntCurve_TheIntConicCurve
#undef IntCurve_TheIntConicCurve_hxx
#undef IntCurve_TheIntersectorOfTheIntConicCurve
#undef IntCurve_TheIntersectorOfTheIntConicCurve_hxx
#undef IntCurve_TheIntersectorOfTheIntConicCurve
#undef IntCurve_TheIntersectorOfTheIntConicCurve_hxx
#undef IntCurve_IntConicCurve
#undef IntCurve_IntConicCurve_hxx
#undef IntCurve_TheIntPCurvePCurve
#undef IntCurve_TheIntPCurvePCurve_hxx
#undef IntCurve_ThePolygon2dOfTheIntPCurvePCurve
#undef IntCurve_ThePolygon2dOfTheIntPCurvePCurve_hxx
#undef IntCurve_TheDistBetweenPCurvesOfTheIntPCurvePCurve
#undef IntCurve_TheDistBetweenPCurvesOfTheIntPCurvePCurve_hxx
#undef IntCurve_ExactIntersectionPointOfTheIntPCurvePCurve
#undef IntCurve_ExactIntersectionPointOfTheIntPCurvePCurve_hxx
#undef IntCurve_ThePolygon2dOfTheIntPCurvePCurve
#undef IntCurve_ThePolygon2dOfTheIntPCurvePCurve_hxx
#undef IntCurve_TheDistBetweenPCurvesOfTheIntPCurvePCurve
#undef IntCurve_TheDistBetweenPCurvesOfTheIntPCurvePCurve_hxx
#undef IntCurve_ExactIntersectionPointOfTheIntPCurvePCurve
#undef IntCurve_ExactIntersectionPointOfTheIntPCurvePCurve_hxx
#undef IntCurve_IntCurveCurveGen
#undef IntCurve_IntCurveCurveGen_hxx




#endif // _HLRBRep_CInter_HeaderFile
