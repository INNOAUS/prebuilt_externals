//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `BuiltinSequences.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>

#ifndef ICE_API
#   if defined(ICE_STATIC_LIBS)
#       define ICE_API /**/
#   elif defined(ICE_API_EXPORTS)
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

typedef NSData ICEBoolSeq;
typedef NSMutableData ICEMutableBoolSeq;

typedef NSData ICEByteSeq;
typedef NSMutableData ICEMutableByteSeq;

typedef NSData ICEShortSeq;
typedef NSMutableData ICEMutableShortSeq;

typedef NSData ICEIntSeq;
typedef NSMutableData ICEMutableIntSeq;

typedef NSData ICELongSeq;
typedef NSMutableData ICEMutableLongSeq;

typedef NSData ICEFloatSeq;
typedef NSMutableData ICEMutableFloatSeq;

typedef NSData ICEDoubleSeq;
typedef NSMutableData ICEMutableDoubleSeq;

typedef NSArray ICEStringSeq;
typedef NSMutableArray ICEMutableStringSeq;

typedef NSArray ICEObjectSeq;
typedef NSMutableArray ICEMutableObjectSeq;

typedef NSArray ICEObjectProxySeq;
typedef NSMutableArray ICEMutableObjectProxySeq;

typedef ICEBoolSequenceHelper ICEBoolSeqHelper;

typedef ICEByteSequenceHelper ICEByteSeqHelper;

typedef ICEShortSequenceHelper ICEShortSeqHelper;

typedef ICEIntSequenceHelper ICEIntSeqHelper;

typedef ICELongSequenceHelper ICELongSeqHelper;

typedef ICEFloatSequenceHelper ICEFloatSeqHelper;

typedef ICEDoubleSequenceHelper ICEDoubleSeqHelper;

typedef ICEStringSequenceHelper ICEStringSeqHelper;

typedef ICEObjectSequenceHelper ICEObjectSeqHelper;

typedef ICEProxySequenceHelper ICEObjectProxySeqHelper;
