//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.2
//
// <auto-generated>
//
// Generated from file `RouterF.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Glacier2_RouterF_h__
#define __Glacier2_RouterF_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <Ice/Proxy.h>
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

#ifndef GLACIER2_API
#   if defined(ICE_STATIC_LIBS)
#       define GLACIER2_API /**/
#   elif defined(GLACIER2_API_EXPORTS)
#       define GLACIER2_API ICE_DECLSPEC_EXPORT
#   else
#       define GLACIER2_API ICE_DECLSPEC_IMPORT
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace Glacier2
{

class Router;
class RouterPrx;

}

/// \cond STREAM
namespace Ice
{

}
/// \endcond

/// \cond INTERNAL
namespace Glacier2
{

using RouterPtr = ::std::shared_ptr<Router>;
using RouterPrxPtr = ::std::shared_ptr<RouterPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace Glacier2
{

class Router;
/// \cond INTERNAL
GLACIER2_API void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< Router>&);
GLACIER2_API ::IceProxy::Ice::Object* upCast(Router*);
/// \endcond

}

}

namespace Glacier2
{

class Router;
/// \cond INTERNAL
GLACIER2_API ::Ice::Object* upCast(Router*);
/// \endcond
typedef ::IceInternal::Handle< Router> RouterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::Router> RouterPrx;
typedef RouterPrx RouterPrxPtr;
/// \cond INTERNAL
GLACIER2_API void _icePatchObjectPtr(RouterPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

/// \cond STREAM
namespace Ice
{

}
/// \endcond

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
