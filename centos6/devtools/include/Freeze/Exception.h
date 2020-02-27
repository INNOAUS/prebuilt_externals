// **********************************************************************
//
// Copyright (c) 2003-2018 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.5
//
// <auto-generated>
//
// Generated from file `Exception.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Freeze_Exception_h__
#define __Freeze_Exception_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 306
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 5
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef FREEZE_API
#   ifdef FREEZE_API_EXPORTS
#       define FREEZE_API ICE_DECLSPEC_EXPORT
#   elif defined(ICE_STATIC_LIBS)
#       define FREEZE_API /**/
#   else
#       define FREEZE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace Freeze
{

class Transaction;
FREEZE_API ::Ice::LocalObject* upCast(::Freeze::Transaction*);
typedef ::IceInternal::Handle< ::Freeze::Transaction> TransactionPtr;

}

namespace Freeze
{

class FREEZE_API DatabaseException : public ::Ice::LocalException
{
public:

    DatabaseException(const char*, int);
    DatabaseException(const char*, int, const ::std::string&);
    virtual ~DatabaseException() throw();

    virtual ::std::string ice_name() const;
    virtual void ice_print(::std::ostream&) const;
    virtual DatabaseException* ice_clone() const;
    virtual void ice_throw() const;

    ::std::string message;
};

class FREEZE_API NotFoundException : public ::Freeze::DatabaseException
{
public:

    NotFoundException(const char*, int);
    NotFoundException(const char*, int, const ::std::string&);
    virtual ~NotFoundException() throw();

    virtual ::std::string ice_name() const;
    virtual void ice_print(::std::ostream&) const;
    virtual NotFoundException* ice_clone() const;
    virtual void ice_throw() const;
};

class FREEZE_API DeadlockException : public ::Freeze::DatabaseException
{
public:

    DeadlockException(const char*, int);
    DeadlockException(const char*, int, const ::std::string&, const ::Freeze::TransactionPtr&);
    virtual ~DeadlockException() throw();

    virtual ::std::string ice_name() const;
    virtual void ice_print(::std::ostream&) const;
    virtual DeadlockException* ice_clone() const;
    virtual void ice_throw() const;

    ::Freeze::TransactionPtr tx;
};

class FREEZE_API InvalidPositionException : public ::Ice::LocalException
{
public:

    InvalidPositionException(const char*, int);
    virtual ~InvalidPositionException() throw();

    virtual ::std::string ice_name() const;
    virtual InvalidPositionException* ice_clone() const;
    virtual void ice_throw() const;
};

class FREEZE_API IndexNotFoundException : public ::Ice::LocalException
{
public:

    IndexNotFoundException(const char*, int);
    IndexNotFoundException(const char*, int, const ::std::string&, const ::std::string&);
    virtual ~IndexNotFoundException() throw();

    virtual ::std::string ice_name() const;
    virtual void ice_print(::std::ostream&) const;
    virtual IndexNotFoundException* ice_clone() const;
    virtual void ice_throw() const;

    ::std::string mapName;
    ::std::string indexName;
};

}

namespace Ice
{
}

#include <IceUtil/PopDisableWarnings.h>
#endif