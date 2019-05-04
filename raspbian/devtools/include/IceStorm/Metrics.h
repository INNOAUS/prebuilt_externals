//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.2
//
// <auto-generated>
//
// Generated from file `Metrics.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __IceStorm_Metrics_h__
#define __IceStorm_Metrics_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/GCObject.h>
#include <Ice/Value.h>
#include <Ice/Incoming.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/Optional.h>
#include <Ice/ExceptionHelpers.h>
#include <Ice/Metrics.h>
#include <IceUtil/UndefSysMacros.h>
#include <IceStorm/Config.h>

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

#ifndef ICESTORM_API
#   if defined(ICE_STATIC_LIBS)
#       define ICESTORM_API /**/
#   elif defined(ICESTORM_API_EXPORTS)
#       define ICESTORM_API ICE_DECLSPEC_EXPORT
#   else
#       define ICESTORM_API ICE_DECLSPEC_IMPORT
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace IceMX
{

class TopicMetrics;
class SubscriberMetrics;

}

namespace IceMX
{

/**
 * Provides information on IceStorm topics.
 * \headerfile IceStorm/IceStorm.h
 */
class ICE_CLASS(ICESTORM_API) TopicMetrics : public ::Ice::ValueHelper<TopicMetrics, Metrics>
{
public:

    ICE_MEMBER(ICESTORM_API) virtual ~TopicMetrics();

    TopicMetrics() = default;

    TopicMetrics(const TopicMetrics&) = default;
    TopicMetrics(TopicMetrics&&) = default;
    TopicMetrics& operator=(const TopicMetrics&) = default;
    TopicMetrics& operator=(TopicMetrics&&) = default;

    /**
     * One-shot constructor to initialize all data members.
     * @param id The metrics identifier.
     * @param total The total number of objects observed by this metrics.
     * @param current The number of objects currently observed by this metrics.
     * @param totalLifetime The sum of the lifetime of each observed objects.
     * @param failures The number of failures observed.
     * @param published Number of events published on the topic by publishers.
     * @param forwarded Number of events forwarded on the topic by IceStorm topic links.
     */
    TopicMetrics(const ::std::string& id, long long int total, int current, long long int totalLifetime, int failures, long long int published, long long int forwarded) :
        Ice::ValueHelper<TopicMetrics, Metrics>(::std::move(id), total, current, totalLifetime, failures),
        published(published),
        forwarded(forwarded)
    {
    }

    /**
     * Obtains a tuple containing all of the value's data members.
     * @return The data members in a tuple.
     */

    std::tuple<const ::std::string&, const long long int&, const int&, const long long int&, const int&, const long long int&, const long long int&> ice_tuple() const
    {
        return std::tie(id, total, current, totalLifetime, failures, published, forwarded);
    }

    /**
     * Obtains the Slice type ID of this value.
     * @return The fully-scoped type ID.
     */
    ICE_MEMBER(ICESTORM_API) static const ::std::string& ice_staticId();

    /**
     * Number of events published on the topic by publishers.
     */
    long long int published = 0LL;
    /**
     * Number of events forwarded on the topic by IceStorm topic links.
     */
    long long int forwarded = 0LL;
};

/// \cond INTERNAL
static TopicMetrics _iceS_TopicMetrics_init;
/// \endcond

/**
 * Provides information on IceStorm subscribers.
 * \headerfile IceStorm/IceStorm.h
 */
class ICE_CLASS(ICESTORM_API) SubscriberMetrics : public ::Ice::ValueHelper<SubscriberMetrics, Metrics>
{
public:

    ICE_MEMBER(ICESTORM_API) virtual ~SubscriberMetrics();

    SubscriberMetrics() = default;

    SubscriberMetrics(const SubscriberMetrics&) = default;
    SubscriberMetrics(SubscriberMetrics&&) = default;
    SubscriberMetrics& operator=(const SubscriberMetrics&) = default;
    SubscriberMetrics& operator=(SubscriberMetrics&&) = default;

    /**
     * One-shot constructor to initialize all data members.
     * @param id The metrics identifier.
     * @param total The total number of objects observed by this metrics.
     * @param current The number of objects currently observed by this metrics.
     * @param totalLifetime The sum of the lifetime of each observed objects.
     * @param failures The number of failures observed.
     * @param queued Number of queued events.
     * @param outstanding Number of outstanding events.
     * @param delivered Number of forwarded events.
     */
    SubscriberMetrics(const ::std::string& id, long long int total, int current, long long int totalLifetime, int failures, int queued, int outstanding, long long int delivered) :
        Ice::ValueHelper<SubscriberMetrics, Metrics>(::std::move(id), total, current, totalLifetime, failures),
        queued(queued),
        outstanding(outstanding),
        delivered(delivered)
    {
    }

    /**
     * Obtains a tuple containing all of the value's data members.
     * @return The data members in a tuple.
     */

    std::tuple<const ::std::string&, const long long int&, const int&, const long long int&, const int&, const int&, const int&, const long long int&> ice_tuple() const
    {
        return std::tie(id, total, current, totalLifetime, failures, queued, outstanding, delivered);
    }

    /**
     * Obtains the Slice type ID of this value.
     * @return The fully-scoped type ID.
     */
    ICE_MEMBER(ICESTORM_API) static const ::std::string& ice_staticId();

    /**
     * Number of queued events.
     */
    int queued = 0;
    /**
     * Number of outstanding events.
     */
    int outstanding = 0;
    /**
     * Number of forwarded events.
     */
    long long int delivered = 0LL;
};

}

namespace IceMX
{

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamWriter<::IceMX::TopicMetrics, S>
{
    static void write(S* ostr, const ::IceMX::TopicMetrics& v)
    {
        ostr->writeAll(v.published, v.forwarded);
    }
};

template<typename S>
struct StreamReader<::IceMX::TopicMetrics, S>
{
    static void read(S* istr, ::IceMX::TopicMetrics& v)
    {
        istr->readAll(v.published, v.forwarded);
    }
};

template<typename S>
struct StreamWriter<::IceMX::SubscriberMetrics, S>
{
    static void write(S* ostr, const ::IceMX::SubscriberMetrics& v)
    {
        ostr->writeAll(v.queued, v.outstanding, v.delivered);
    }
};

template<typename S>
struct StreamReader<::IceMX::SubscriberMetrics, S>
{
    static void read(S* istr, ::IceMX::SubscriberMetrics& v)
    {
        istr->readAll(v.queued, v.outstanding, v.delivered);
    }
};

}
/// \endcond

/// \cond INTERNAL
namespace IceMX
{

using TopicMetricsPtr = ::std::shared_ptr<TopicMetrics>;

using SubscriberMetricsPtr = ::std::shared_ptr<SubscriberMetrics>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace IceMX
{

class TopicMetrics;
/// \cond INTERNAL
ICESTORM_API void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< TopicMetrics>&);
ICESTORM_API ::IceProxy::Ice::Object* upCast(TopicMetrics*);
/// \endcond

class SubscriberMetrics;
/// \cond INTERNAL
ICESTORM_API void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< SubscriberMetrics>&);
ICESTORM_API ::IceProxy::Ice::Object* upCast(SubscriberMetrics*);
/// \endcond

}

}

namespace IceMX
{

class TopicMetrics;
/// \cond INTERNAL
ICESTORM_API ::Ice::Object* upCast(TopicMetrics*);
/// \endcond
typedef ::IceInternal::Handle< TopicMetrics> TopicMetricsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::IceMX::TopicMetrics> TopicMetricsPrx;
typedef TopicMetricsPrx TopicMetricsPrxPtr;
/// \cond INTERNAL
ICESTORM_API void _icePatchObjectPtr(TopicMetricsPtr&, const ::Ice::ObjectPtr&);
/// \endcond

class SubscriberMetrics;
/// \cond INTERNAL
ICESTORM_API ::Ice::Object* upCast(SubscriberMetrics*);
/// \endcond
typedef ::IceInternal::Handle< SubscriberMetrics> SubscriberMetricsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::IceMX::SubscriberMetrics> SubscriberMetricsPrx;
typedef SubscriberMetricsPrx SubscriberMetricsPrxPtr;
/// \cond INTERNAL
ICESTORM_API void _icePatchObjectPtr(SubscriberMetricsPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace IceMX
{

}

namespace IceProxy
{

namespace IceMX
{

class ICE_CLASS(ICESTORM_API) TopicMetrics : public virtual ::Ice::Proxy<TopicMetrics, ::IceProxy::IceMX::Metrics>
{
public:

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    ICE_MEMBER(ICESTORM_API) static const ::std::string& ice_staticId();

protected:
    /// \cond INTERNAL

    ICE_MEMBER(ICESTORM_API) virtual ::IceProxy::Ice::Object* _newInstance() const;
    /// \endcond
};

class ICE_CLASS(ICESTORM_API) SubscriberMetrics : public virtual ::Ice::Proxy<SubscriberMetrics, ::IceProxy::IceMX::Metrics>
{
public:

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    ICE_MEMBER(ICESTORM_API) static const ::std::string& ice_staticId();

protected:
    /// \cond INTERNAL

    ICE_MEMBER(ICESTORM_API) virtual ::IceProxy::Ice::Object* _newInstance() const;
    /// \endcond
};

}

}

namespace IceMX
{

/**
 * Provides information on IceStorm topics.
 * \headerfile IceStorm/IceStorm.h
 */
class ICESTORM_API TopicMetrics : public Metrics
{
public:

    typedef TopicMetricsPrx ProxyType;
    typedef TopicMetricsPtr PointerType;

    virtual ~TopicMetrics();

    /** Default constructor that assigns default values to members as specified in the Slice definition. */
    TopicMetrics() :
        published(ICE_INT64(0)),
        forwarded(ICE_INT64(0))
    {
    }

    /**
     * One-shot constructor to initialize all data members.
     * @param id The metrics identifier.
     * @param total The total number of objects observed by this metrics.
     * @param current The number of objects currently observed by this metrics.
     * @param totalLifetime The sum of the lifetime of each observed objects.
     * @param failures The number of failures observed.
     * @param published Number of events published on the topic by publishers.
     * @param forwarded Number of events forwarded on the topic by IceStorm topic links.
     */
    TopicMetrics(const ::std::string& id, ::Ice::Long total, ::Ice::Int current, ::Ice::Long totalLifetime, ::Ice::Int failures, ::Ice::Long published, ::Ice::Long forwarded) :
        ::IceMX::Metrics(id, total, current, totalLifetime, failures),
        published(published),
        forwarded(forwarded)
    {
    }

    /**
     * Polymporphically clones this object.
     * @return A shallow copy of this object.
     */
    virtual ::Ice::ObjectPtr ice_clone() const;

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(const ::std::string& id, const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual const ::std::string& ice_id(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    /**
     * Obtains a value factory that instantiates this class.
     * @return The value factory.
     */
    static ::Ice::ValueFactoryPtr ice_factory();

protected:

    /// \cond STREAM
    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
    /// \endcond

public:

    /**
     * Number of events published on the topic by publishers.
     */
    ::Ice::Long published;
    /**
     * Number of events forwarded on the topic by IceStorm topic links.
     */
    ::Ice::Long forwarded;
};
/// \cond INTERNAL
static ::Ice::ValueFactoryPtr _iceS_TopicMetrics_init = ::IceMX::TopicMetrics::ice_factory();
/// \endcond

/// \cond INTERNAL
inline bool operator==(const TopicMetrics& lhs, const TopicMetrics& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const TopicMetrics& lhs, const TopicMetrics& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

/**
 * Provides information on IceStorm subscribers.
 * \headerfile IceStorm/IceStorm.h
 */
class ICESTORM_API SubscriberMetrics : public Metrics
{
public:

    typedef SubscriberMetricsPrx ProxyType;
    typedef SubscriberMetricsPtr PointerType;

    virtual ~SubscriberMetrics();

    /** Default constructor that assigns default values to members as specified in the Slice definition. */
    SubscriberMetrics() :
        queued(0),
        outstanding(0),
        delivered(ICE_INT64(0))
    {
    }

    /**
     * One-shot constructor to initialize all data members.
     * @param id The metrics identifier.
     * @param total The total number of objects observed by this metrics.
     * @param current The number of objects currently observed by this metrics.
     * @param totalLifetime The sum of the lifetime of each observed objects.
     * @param failures The number of failures observed.
     * @param queued Number of queued events.
     * @param outstanding Number of outstanding events.
     * @param delivered Number of forwarded events.
     */
    SubscriberMetrics(const ::std::string& id, ::Ice::Long total, ::Ice::Int current, ::Ice::Long totalLifetime, ::Ice::Int failures, ::Ice::Int queued, ::Ice::Int outstanding, ::Ice::Long delivered) :
        ::IceMX::Metrics(id, total, current, totalLifetime, failures),
        queued(queued),
        outstanding(outstanding),
        delivered(delivered)
    {
    }

    /**
     * Polymporphically clones this object.
     * @return A shallow copy of this object.
     */
    virtual ::Ice::ObjectPtr ice_clone() const;

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(const ::std::string& id, const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual const ::std::string& ice_id(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    /**
     * Obtains a value factory that instantiates this class.
     * @return The value factory.
     */
    static ::Ice::ValueFactoryPtr ice_factory();

protected:

    /// \cond STREAM
    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
    /// \endcond

public:

    /**
     * Number of queued events.
     */
    ::Ice::Int queued;
    /**
     * Number of outstanding events.
     */
    ::Ice::Int outstanding;
    /**
     * Number of forwarded events.
     */
    ::Ice::Long delivered;
};
/// \cond INTERNAL
static ::Ice::ValueFactoryPtr _iceS_SubscriberMetrics_init = ::IceMX::SubscriberMetrics::ice_factory();
/// \endcond

/// \cond INTERNAL
inline bool operator==(const SubscriberMetrics& lhs, const SubscriberMetrics& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const SubscriberMetrics& lhs, const SubscriberMetrics& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamWriter< ::IceMX::TopicMetrics, S>
{
    static void write(S* ostr, const ::IceMX::TopicMetrics& v)
    {
        ostr->write(v.published);
        ostr->write(v.forwarded);
    }
};

template<typename S>
struct StreamReader< ::IceMX::TopicMetrics, S>
{
    static void read(S* istr, ::IceMX::TopicMetrics& v)
    {
        istr->read(v.published);
        istr->read(v.forwarded);
    }
};

template<typename S>
struct StreamWriter< ::IceMX::SubscriberMetrics, S>
{
    static void write(S* ostr, const ::IceMX::SubscriberMetrics& v)
    {
        ostr->write(v.queued);
        ostr->write(v.outstanding);
        ostr->write(v.delivered);
    }
};

template<typename S>
struct StreamReader< ::IceMX::SubscriberMetrics, S>
{
    static void read(S* istr, ::IceMX::SubscriberMetrics& v)
    {
        istr->read(v.queued);
        istr->read(v.outstanding);
        istr->read(v.delivered);
    }
};

}
/// \endcond

namespace IceMX
{

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
