// **********************************************************************
//
// Copyright (c) 2003-2018 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.7.1
//
// <auto-generated>
//
// Generated from file `Current.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice_Current_h__
#define __Ice_Current_h__

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
#include <Ice/ObjectAdapterF.h>
#include <Ice/ConnectionF.h>
#include <Ice/Identity.h>
#include <Ice/Version.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
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

/**
 * A request context. <tt>Context</tt> is used to transmit metadata about a
 * request from the server to the client, such as Quality-of-Service
 * (QoS) parameters. Each operation on the client has a <tt>Context</tt> as
 * its implicit final parameter.
 */
using Context = ::std::map<::std::string, ::std::string>;

/**
 * Determines the retry behavior an invocation in case of a (potentially) recoverable error.
 */
enum class OperationMode : unsigned char
{
    /**
     * Ordinary operations have <tt>Normal</tt> mode.  These operations
     * modify object state; invoking such an operation twice in a row
     * has different semantics than invoking it once. The Ice run time
     * guarantees that it will not violate at-most-once semantics for
     * <tt>Normal</tt> operations.
     */
    Normal,
    /**
     * Operations that use the Slice <tt>nonmutating</tt> keyword must not
     * modify object state. For C++, nonmutating operations generate
     * <tt>const</tt> member functions in the skeleton. In addition, the Ice
     * run time will attempt to transparently recover from certain
     * run-time errors by re-issuing a failed request and propagate
     * the failure to the application only if the second attempt
     * fails.
     *
     * <p class="Deprecated"><tt>Nonmutating</tt> is deprecated; Use the
     * <tt>idempotent</tt> keyword instead. For C++, to retain the mapping
     * of <tt>nonmutating</tt> operations to C++ <tt>const</tt>
     * member functions, use the <tt>\["cpp:const"]</tt> metadata
     * directive.
     */
    Nonmutating,
    /**
     * Operations that use the Slice <tt>idempotent</tt> keyword can modify
     * object state, but invoking an operation twice in a row must
     * result in the same object state as invoking it once.  For
     * example, <tt>x = 1</tt> is an idempotent statement,
     * whereas <tt>x += 1</tt> is not. For idempotent
     * operations, the Ice run-time uses the same retry behavior
     * as for nonmutating operations in case of a potentially
     * recoverable error.
     */
    Idempotent
};

/**
 * Information about the current method invocation for servers. Each
 * operation on the server has a <tt>Current</tt> as its implicit final
 * parameter. <tt>Current</tt> is mostly used for Ice services. Most
 * applications ignore this parameter.
 * \headerfile Ice/Ice.h
 */
struct Current
{
    /**
     * The object adapter.
     */
    ::std::shared_ptr<ObjectAdapter> adapter;
    /**
     * Information about the connection over which the current method
     * invocation was received. If the invocation is direct due to
     * collocation optimization, this value is set to null.
     */
    ::std::shared_ptr<Connection> con;
    /**
     * The Ice object identity.
     */
    Identity id;
    /**
     * The facet.
     */
    ::std::string facet;
    /**
     * The operation name.
     */
    ::std::string operation;
    /**
     * The mode of the operation.
     */
    OperationMode mode;
    /**
     * The request context, as received from the client.
     */
    Context ctx;
    /**
     * The request id unless oneway (0) or collocated (-1).
     */
    int requestId;
    /**
     * The encoding version used to encode the input and output parameters.
     */
    EncodingVersion encoding;

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */

    std::tuple<const ::std::shared_ptr<ObjectAdapter>&, const ::std::shared_ptr<Connection>&, const Identity&, const ::std::string&, const ::std::string&, const OperationMode&, const Context&, const int&, const EncodingVersion&> ice_tuple() const
    {
        return std::tie(adapter, con, id, facet, operation, mode, ctx, requestId, encoding);
    }
};

using Ice::operator<;
using Ice::operator<=;
using Ice::operator>;
using Ice::operator>=;
using Ice::operator==;
using Ice::operator!=;

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::Ice::OperationMode>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 2;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

}
/// \endcond

#else // C++98 mapping

namespace Ice
{

/**
 * A request context. <tt>Context</tt> is used to transmit metadata about a
 * request from the server to the client, such as Quality-of-Service
 * (QoS) parameters. Each operation on the client has a <tt>Context</tt> as
 * its implicit final parameter.
 */
typedef ::std::map< ::std::string, ::std::string> Context;

/**
 * Determines the retry behavior an invocation in case of a (potentially) recoverable error.
 */
enum OperationMode
{
    /**
     * Ordinary operations have <tt>Normal</tt> mode.  These operations
     * modify object state; invoking such an operation twice in a row
     * has different semantics than invoking it once. The Ice run time
     * guarantees that it will not violate at-most-once semantics for
     * <tt>Normal</tt> operations.
     */
    Normal,
    /**
     * Operations that use the Slice <tt>nonmutating</tt> keyword must not
     * modify object state. For C++, nonmutating operations generate
     * <tt>const</tt> member functions in the skeleton. In addition, the Ice
     * run time will attempt to transparently recover from certain
     * run-time errors by re-issuing a failed request and propagate
     * the failure to the application only if the second attempt
     * fails.
     *
     * <p class="Deprecated"><tt>Nonmutating</tt> is deprecated; Use the
     * <tt>idempotent</tt> keyword instead. For C++, to retain the mapping
     * of <tt>nonmutating</tt> operations to C++ <tt>const</tt>
     * member functions, use the <tt>\["cpp:const"]</tt> metadata
     * directive.
     */
    Nonmutating,
    /**
     * Operations that use the Slice <tt>idempotent</tt> keyword can modify
     * object state, but invoking an operation twice in a row must
     * result in the same object state as invoking it once.  For
     * example, <tt>x = 1</tt> is an idempotent statement,
     * whereas <tt>x += 1</tt> is not. For idempotent
     * operations, the Ice run-time uses the same retry behavior
     * as for nonmutating operations in case of a potentially
     * recoverable error.
     */
    Idempotent
};

/**
 * Information about the current method invocation for servers. Each
 * operation on the server has a <tt>Current</tt> as its implicit final
 * parameter. <tt>Current</tt> is mostly used for Ice services. Most
 * applications ignore this parameter.
 * \headerfile Ice/Ice.h
 */
struct Current
{
    /**
     * The object adapter.
     */
    ObjectAdapterPtr adapter;
    /**
     * Information about the connection over which the current method
     * invocation was received. If the invocation is direct due to
     * collocation optimization, this value is set to null.
     */
    ConnectionPtr con;
    /**
     * The Ice object identity.
     */
    Identity id;
    /**
     * The facet.
     */
    ::std::string facet;
    /**
     * The operation name.
     */
    ::std::string operation;
    /**
     * The mode of the operation.
     */
    OperationMode mode;
    /**
     * The request context, as received from the client.
     */
    Context ctx;
    /**
     * The request id unless oneway (0) or collocated (-1).
     */
    Int requestId;
    /**
     * The encoding version used to encode the input and output parameters.
     */
    EncodingVersion encoding;
};

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::Ice::OperationMode>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 2;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

}
/// \endcond

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
