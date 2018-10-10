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
// Generated from file `Version.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice_Version_h__
#define __Ice_Version_h__

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
 * A version structure for the protocol version.
 * \headerfile Ice/Ice.h
 */
struct ProtocolVersion
{
    Byte major;
    Byte minor;

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */

    std::tuple<const Byte&, const Byte&> ice_tuple() const
    {
        return std::tie(major, minor);
    }
};

/**
 * A version structure for the encoding version.
 * \headerfile Ice/Ice.h
 */
struct EncodingVersion
{
    Byte major;
    Byte minor;

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */

    std::tuple<const Byte&, const Byte&> ice_tuple() const
    {
        return std::tie(major, minor);
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
struct StreamableTraits<::Ice::ProtocolVersion>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = true;
};

template<typename S>
struct StreamReader<::Ice::ProtocolVersion, S>
{
    static void read(S* istr, ::Ice::ProtocolVersion& v)
    {
        istr->readAll(v.major, v.minor);
    }
};

template<>
struct StreamableTraits<::Ice::EncodingVersion>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = true;
};

template<typename S>
struct StreamReader<::Ice::EncodingVersion, S>
{
    static void read(S* istr, ::Ice::EncodingVersion& v)
    {
        istr->readAll(v.major, v.minor);
    }
};

}
/// \endcond

#else // C++98 mapping

namespace Ice
{

/**
 * A version structure for the protocol version.
 * \headerfile Ice/Ice.h
 */
struct ProtocolVersion
{
    Byte major;
    Byte minor;

    bool operator==(const ProtocolVersion& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(major != rhs_.major)
        {
            return false;
        }
        if(minor != rhs_.minor)
        {
            return false;
        }
        return true;
    }

    bool operator<(const ProtocolVersion& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(major < rhs_.major)
        {
            return true;
        }
        else if(rhs_.major < major)
        {
            return false;
        }
        if(minor < rhs_.minor)
        {
            return true;
        }
        else if(rhs_.minor < minor)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const ProtocolVersion& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const ProtocolVersion& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const ProtocolVersion& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const ProtocolVersion& rhs_) const
    {
        return !operator<(rhs_);
    }
};

/**
 * A version structure for the encoding version.
 * \headerfile Ice/Ice.h
 */
struct EncodingVersion
{
    Byte major;
    Byte minor;

    bool operator==(const EncodingVersion& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(major != rhs_.major)
        {
            return false;
        }
        if(minor != rhs_.minor)
        {
            return false;
        }
        return true;
    }

    bool operator<(const EncodingVersion& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(major < rhs_.major)
        {
            return true;
        }
        else if(rhs_.major < major)
        {
            return false;
        }
        if(minor < rhs_.minor)
        {
            return true;
        }
        else if(rhs_.minor < minor)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const EncodingVersion& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const EncodingVersion& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const EncodingVersion& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const EncodingVersion& rhs_) const
    {
        return !operator<(rhs_);
    }
};

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::Ice::ProtocolVersion>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = true;
};

template<typename S>
struct StreamWriter< ::Ice::ProtocolVersion, S>
{
    static void write(S* ostr, const ::Ice::ProtocolVersion& v)
    {
        ostr->write(v.major);
        ostr->write(v.minor);
    }
};

template<typename S>
struct StreamReader< ::Ice::ProtocolVersion, S>
{
    static void read(S* istr, ::Ice::ProtocolVersion& v)
    {
        istr->read(v.major);
        istr->read(v.minor);
    }
};

template<>
struct StreamableTraits< ::Ice::EncodingVersion>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = true;
};

template<typename S>
struct StreamWriter< ::Ice::EncodingVersion, S>
{
    static void write(S* ostr, const ::Ice::EncodingVersion& v)
    {
        ostr->write(v.major);
        ostr->write(v.minor);
    }
};

template<typename S>
struct StreamReader< ::Ice::EncodingVersion, S>
{
    static void read(S* istr, ::Ice::EncodingVersion& v)
    {
        istr->read(v.major);
        istr->read(v.minor);
    }
};

}
/// \endcond

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
