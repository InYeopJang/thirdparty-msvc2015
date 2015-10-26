// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_HeaderFile
#define _BRepGProp_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class TopoDS_Shape;
class GProp_GProps;
class gp_Pln;
class BRepGProp_EdgeTool;
class BRepGProp_Face;
class BRepGProp_Domain;
class BRepGProp_Cinert;
class BRepGProp_Sinert;
class BRepGProp_Vinert;
class BRepGProp_VinertGK;
class BRepGProp_UFunction;
class BRepGProp_TFunction;


//! Provides global functions to compute a shape's global
//! properties for lines, surfaces or volumes, and bring
//! them together with the global properties already
//! computed for a geometric system.
//! The global properties computed for a system are :
//! - its mass,
//! - its center of mass,
//! - its matrix of inertia,
//! - its moment about an axis,
//! - its radius of gyration about an axis,
//! - and its principal properties of inertia such as
//! principal axis, principal moments, principal radius of gyration.
class BRepGProp 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Computes the linear global properties of the shape S,
  //! i.e. the global properties induced by each edge of the
  //! shape S, and brings them together with the global
  //! properties still retained by the framework LProps. If
  //! the current system of LProps was empty, its global
  //! properties become equal to the linear global
  //! properties of S.
  //! For this computation no linear density is attached to
  //! the edges. So, for example, the added mass
  //! corresponds to the sum of the lengths of the edges of
  //! S. The density of the composed systems, i.e. that of
  //! each component of the current system of LProps, and
  //! that of S which is considered to be equal to 1, must be coherent.
  //! Note that this coherence cannot be checked. You are
  //! advised to use a separate framework for each
  //! density, and then to bring these frameworks together
  //! into a global one.
  //! The point relative to which the inertia of the system is
  //! computed is the reference point of the framework LProps.
  //! Note: if your programming ensures that the framework
  //! LProps retains only linear global properties (brought
  //! together for example, by the function
  //! LinearProperties) for objects the density of which is
  //! equal to 1 (or is not defined), the function Mass will
  //! return the total length of edges of the system analysed by LProps.
  //! Warning
  //! No check is performed to verify that the shape S
  //! retains truly linear properties. If S is simply a vertex, it
  //! is not considered to present any additional global properties.
  Standard_EXPORT static   void LinearProperties (const TopoDS_Shape& S, GProp_GProps& LProps) ;
  
  //! Computes the surface global properties of the
  //! shape S, i.e. the global properties induced by each
  //! face of the shape S, and brings them together with
  //! the global properties still retained by the framework
  //! SProps. If the current system of SProps was empty,
  //! its global properties become equal to the surface
  //! global properties of S.
  //! For this computation, no surface density is attached
  //! to the faces. Consequently, the added mass
  //! corresponds to the sum of the areas of the faces of
  //! S. The density of the component systems, i.e. that
  //! of each component of the current system of
  //! SProps, and that of S which is considered to be
  //! equal to 1, must be coherent.
  //! Note that this coherence cannot be checked. You
  //! are advised to use a framework for each different
  //! value of density, and then to bring these
  //! frameworks together into a global one.
  //! The point relative to which the inertia of the system
  //! is computed is the reference point of the framework SProps.
  //! Note : if your programming ensures that the
  //! framework SProps retains only surface global
  //! properties, brought together, for example, by the
  //! function SurfaceProperties, for objects the density
  //! of which is equal to 1 (or is not defined), the
  //! function Mass will return the total area of faces of
  //! the system analysed by SProps.
  //! Warning
  //! No check is performed to verify that the shape S
  //! retains truly surface properties. If S is simply a
  //! vertex, an edge or a wire, it is not considered to
  //! present any additional global properties.
  Standard_EXPORT static   void SurfaceProperties (const TopoDS_Shape& S, GProp_GProps& SProps) ;
  
  //! Updates <SProps> with the shape <S>, that contains its pricipal properties.
  //! The surface properties of all the faces in <S> are computed.
  //! Adaptive 2D Gauss integration is used.
  //! Parameter Eps sets maximal relative error of computed mass (area) for each face.
  //! Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
  //! for two successive steps of adaptive integration.
  //! Method returns estimation of relative error reached for whole shape.
  //! WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
  //!
  //! Computes the global volume properties of the solid
  //! S, and brings them together with the global
  //! properties still retained by the framework VProps. If
  //! the current system of VProps was empty, its global
  //! properties become equal to the global properties of S for volume.
  //! For this computation, no volume density is attached
  //! to the solid. Consequently, the added mass
  //! corresponds to the volume of S. The density of the
  //! component systems, i.e. that of each component of
  //! the current system of VProps, and that of S which
  //! is considered to be equal to 1, must be coherent to each other.
  //! Note that this coherence cannot be checked. You
  //! are advised to use a separate framework for each
  //! density, and then to bring these frameworks
  //! together into a global one.
  //! The point relative to which the inertia of the system
  //! is computed is the reference point of the framework VProps.
  //! Note: if your programming ensures that the
  //! framework VProps retains only global properties of
  //! volume (brought together for example, by the
  //! function VolumeProperties) for objects the density
  //! of which is equal to 1 (or is not defined), the
  //! function Mass will return the total volume of the
  //! solids of the system analysed by VProps.
  //! Warning
  //! The shape S must represent an object whose
  //! global volume properties can be computed. It may
  //! be a finite solid, or a series of finite solids all
  //! oriented in a coherent way. Nonetheless, S must be
  //! exempt of any free boundary. Note that these
  //! conditions of coherence are not checked by this
  //! algorithm, and results will be false if they are not respected.
  Standard_EXPORT static   Standard_Real SurfaceProperties (const TopoDS_Shape& S, GProp_GProps& SProps, const Standard_Real Eps) ;
  
  Standard_EXPORT static   void VolumeProperties (const TopoDS_Shape& S, GProp_GProps& VProps, const Standard_Boolean OnlyClosed = Standard_False) ;
  
  //! Updates <VProps> with the shape <S>, that contains its pricipal properties.
  //! The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
  //! If OnlyClosed is True then computed faces must belong to closed Shells.
  //! Adaptive 2D Gauss integration is used.
  //! Parameter Eps sets maximal relative error of computed mass (volume) for each face.
  //! Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
  //! for two successive steps of adaptive integration.
  //! Method returns estimation of relative error reached for whole shape.
  //! WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
  Standard_EXPORT static   Standard_Real VolumeProperties (const TopoDS_Shape& S, GProp_GProps& VProps, const Standard_Real Eps, const Standard_Boolean OnlyClosed = Standard_False) ;
  
  //! Updates <VProps> with the shape <S>, that contains its pricipal properties.
  //! The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
  //! If OnlyClosed is True then computed faces must belong to closed Shells.
  //! Adaptive 2D Gauss integration is used.
  //! Parameter IsUseSpan says if it is necessary to define spans on a face.
  //! This option has an effect only for BSpline faces.
  //! Parameter Eps sets maximal relative error of computed property for each face.
  //! Error is delivered by the adaptive Gauss-Kronrod method of integral computation
  //! that is used for properties computation.
  //! Method returns estimation of relative error reached for whole shape.
  //! Returns negative value if the computation is failed.
  Standard_EXPORT static   Standard_Real VolumePropertiesGK (const TopoDS_Shape& S, GProp_GProps& VProps, const Standard_Real Eps = 0.001, const Standard_Boolean OnlyClosed = Standard_False, const Standard_Boolean IsUseSpan = Standard_False, const Standard_Boolean CGFlag = Standard_False, const Standard_Boolean IFlag = Standard_False) ;
  
  Standard_EXPORT static   Standard_Real VolumePropertiesGK (const TopoDS_Shape& S, GProp_GProps& VProps, const gp_Pln& thePln, const Standard_Real Eps = 0.001, const Standard_Boolean OnlyClosed = Standard_False, const Standard_Boolean IsUseSpan = Standard_False, const Standard_Boolean CGFlag = Standard_False, const Standard_Boolean IFlag = Standard_False) ;




protected:





private:




friend class BRepGProp_EdgeTool;
friend class BRepGProp_Face;
friend class BRepGProp_Domain;
friend class BRepGProp_Cinert;
friend class BRepGProp_Sinert;
friend class BRepGProp_Vinert;
friend class BRepGProp_VinertGK;
friend class BRepGProp_UFunction;
friend class BRepGProp_TFunction;

};







#endif // _BRepGProp_HeaderFile
