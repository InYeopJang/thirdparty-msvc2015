###############################################################################
# Cache file for HDF5 under Visual Studio
#
###############################################################################

# General Flags
set (BUILD_SHARED_LIBS ON CACHE BOOL "" FORCE)
set (BUILD_TESTING OFF CACHE BOOL "" FORCE)
set (HDF5_ENABLE_PARALLEL OFF CACHE BOOL "" FORCE)

# Component flags
set (HDF5_BUILD_TOOLS OFF CACHE BOOL "" FORCE)
set (HDF5_BUILD_CPP_LIB ON CACHE BOOL "" FORCE)
set (HDF5_BUILD_HL_LIB ON CACHE BOOL "" FORCE)
set (HDF5_BUILD_FORTRAN OFF CACHE BOOL "" FORCE)

# Third-party support
set (HDF5_ENABLE_Z_LIB_SUPPORT ON CACHE BOOL "" FORCE)
set (HDF5_ENABLE_SZIP_SUPPORT ON CACHE BOOL "" FORCE)
set (HDF5_ENABLE_SZIP_ENCODING OFF CACHE BOOL "" FORCE)
# Requires the TGZPATH variable to be set by the caller to point to the directory
# containing the SZip.tar.gz & ZLib.tar.gz.
# See https://www.hdfgroup.org/HDF5/release/cmakebuild.html#bldfiles
set (HDF5_ALLOW_EXTERNAL_SUPPORT TGZ CACHE STRING "" FORCE)
