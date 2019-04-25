//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.2
//
// <auto-generated>
//
// Generated from file `ConnectionF.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice_ConnectionF_h__
#define __Ice_ConnectionF_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/Optional.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 2
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_API
#   if defined(ICE_STATIC_LIBS)
#       define ICE_API /**/
#   elif defined(ICE_API_EXPORTS)
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace Ice
{

class ConnectionInfo;
class WSConnectionInfo;
class Connection;

}

/// \cond STREAM
namespace Ice
{

}
/// \endcond

/// \cond INTERNAL
namespace Ice
{

using ConnectionInfoPtr = ::std::shared_ptr<ConnectionInfo>;

using WSConnectionInfoPtr = ::std::shared_ptr<WSConnectionInfo>;

using ConnectionPtr = ::std::shared_ptr<Connection>;

}
/// \endcond

#else // C++98 mapping

namespace Ice
{

class ConnectionInfo;
/// \cond INTERNAL
ICE_API LocalObject* upCast(ConnectionInfo*);
/// \endcond
typedef ::IceInternal::Handle< ConnectionInfo> ConnectionInfoPtr;

class WSConnectionInfo;
/// \cond INTERNAL
ICE_API LocalObject* upCast(WSConnectionInfo*);
/// \endcond
typedef ::IceInternal::Handle< WSConnectionInfo> WSConnectionInfoPtr;

class Connection;
/// \cond INTERNAL
ICE_API LocalObject* upCast(Connection*);
/// \endcond
typedef ::IceInternal::Handle< Connection> ConnectionPtr;

}

/// \cond STREAM
namespace Ice
{

}
/// \endcond

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
