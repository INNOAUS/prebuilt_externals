//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Metrics.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/BuiltinSequences.h>

#ifndef ICE_API
#   if defined(ICE_STATIC_LIBS)
#       define ICE_API /**/
#   elif defined(ICE_API_EXPORTS)
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEMXMetrics;
@protocol ICEMXMetrics;

@class ICEMXMetricsAdmin;
@protocol ICEMXMetricsAdmin;

@class ICEMXThreadMetrics;
@protocol ICEMXThreadMetrics;

@class ICEMXDispatchMetrics;
@protocol ICEMXDispatchMetrics;

@class ICEMXChildInvocationMetrics;
@protocol ICEMXChildInvocationMetrics;

@class ICEMXCollocatedMetrics;
@protocol ICEMXCollocatedMetrics;

@class ICEMXRemoteMetrics;
@protocol ICEMXRemoteMetrics;

@class ICEMXInvocationMetrics;
@protocol ICEMXInvocationMetrics;

@class ICEMXConnectionMetrics;
@protocol ICEMXConnectionMetrics;

@class ICEMXMetricsPrx;
@protocol ICEMXMetricsPrx;

@class ICEMXMetricsAdminPrx;
@protocol ICEMXMetricsAdminPrx;

@class ICEMXThreadMetricsPrx;
@protocol ICEMXThreadMetricsPrx;

@class ICEMXDispatchMetricsPrx;
@protocol ICEMXDispatchMetricsPrx;

@class ICEMXChildInvocationMetricsPrx;
@protocol ICEMXChildInvocationMetricsPrx;

@class ICEMXCollocatedMetricsPrx;
@protocol ICEMXCollocatedMetricsPrx;

@class ICEMXRemoteMetricsPrx;
@protocol ICEMXRemoteMetricsPrx;

@class ICEMXInvocationMetricsPrx;
@protocol ICEMXInvocationMetricsPrx;

@class ICEMXConnectionMetricsPrx;
@protocol ICEMXConnectionMetricsPrx;

typedef NSDictionary ICEMXStringIntDict;
typedef NSMutableDictionary ICEMXMutableStringIntDict;

ICE_API @protocol ICEMXMetrics <NSObject>
@end

ICE_API @interface ICEMXMetrics : ICEServant
{
    NSString *id_;
    ICELong total;
    ICEInt current;
    ICELong totalLifetime;
    ICEInt failures;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, assign) ICELong total;
@property(nonatomic, assign) ICEInt current;
@property(nonatomic, assign) ICELong totalLifetime;
@property(nonatomic, assign) ICEInt failures;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures;
+(id) metrics;
+(id) metrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICE_API @interface ICEMXMetricsFailures : NSObject <NSCopying>
{
    @private
        NSString *id_;
        ICEMXStringIntDict *failures;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, ICE_STRONG_ATTR) ICEMXStringIntDict *failures;

-(id) init;
-(id) init:(NSString*)id_ failures:(ICEMXStringIntDict*)failures;
+(id) metricsFailures;
+(id) metricsFailures:(NSString*)id_ failures:(ICEMXStringIntDict*)failures;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEMXMetricsFailuresSeq;
typedef NSMutableArray ICEMXMutableMetricsFailuresSeq;

typedef NSArray ICEMXMetricsMap;
typedef NSMutableArray ICEMXMutableMetricsMap;

typedef NSDictionary ICEMXMetricsView;
typedef NSMutableDictionary ICEMXMutableMetricsView;

ICE_API @interface ICEMXUnknownMetricsView : ICEUserException
-(NSString *) ice_id;
+(id) unknownMetricsView;
@end

ICE_API @protocol ICEMXMetricsAdmin <NSObject>
-(ICEStringSeq*) getMetricsViewNames:(ICEStringSeq**)disabledViews current:(ICECurrent *)current;
-(void) enableMetricsView:(NSMutableString*)name current:(ICECurrent *)current;
-(void) disableMetricsView:(NSMutableString*)name current:(ICECurrent *)current;
-(ICEMXMetricsView*) getMetricsView:(NSMutableString*)view timestamp:(ICELong*)timestamp current:(ICECurrent *)current;
-(ICEMXMetricsFailuresSeq*) getMapMetricsFailures:(NSMutableString*)view map:(NSMutableString*)map current:(ICECurrent *)current;
-(ICEMXMetricsFailures*) getMetricsFailures:(NSMutableString*)view map:(NSMutableString*)map id:(NSMutableString*)id_ current:(ICECurrent *)current;
@end

ICE_API @interface ICEMXMetricsAdmin : ICEServant
+(id) metricsAdmin;
+(void) iceD_getMetricsViewNames:(id<ICEMXMetricsAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_enableMetricsView:(id<ICEMXMetricsAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_disableMetricsView:(id<ICEMXMetricsAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getMetricsView:(id<ICEMXMetricsAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getMapMetricsFailures:(id<ICEMXMetricsAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getMetricsFailures:(id<ICEMXMetricsAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICEMXThreadMetrics <ICEMXMetrics>
@end

ICE_API @interface ICEMXThreadMetrics : ICEMXMetrics
{
    ICEInt inUseForIO;
    ICEInt inUseForUser;
    ICEInt inUseForOther;
}

@property(nonatomic, assign) ICEInt inUseForIO;
@property(nonatomic, assign) ICEInt inUseForUser;
@property(nonatomic, assign) ICEInt inUseForOther;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures inUseForIO:(ICEInt)inUseForIO inUseForUser:(ICEInt)inUseForUser inUseForOther:(ICEInt)inUseForOther;
+(id) threadMetrics;
+(id) threadMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures inUseForIO:(ICEInt)inUseForIO inUseForUser:(ICEInt)inUseForUser inUseForOther:(ICEInt)inUseForOther;
// This class also overrides copyWithZone:
@end

ICE_API @protocol ICEMXDispatchMetrics <ICEMXMetrics>
@end

ICE_API @interface ICEMXDispatchMetrics : ICEMXMetrics
{
    ICEInt userException;
    ICELong size;
    ICELong replySize;
}

@property(nonatomic, assign) ICEInt userException;
@property(nonatomic, assign) ICELong size;
@property(nonatomic, assign) ICELong replySize;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures userException:(ICEInt)userException size:(ICELong)size replySize:(ICELong)replySize;
+(id) dispatchMetrics;
+(id) dispatchMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures userException:(ICEInt)userException size:(ICELong)size replySize:(ICELong)replySize;
// This class also overrides copyWithZone:
@end

ICE_API @protocol ICEMXChildInvocationMetrics <ICEMXMetrics>
@end

ICE_API @interface ICEMXChildInvocationMetrics : ICEMXMetrics
{
    ICELong size;
    ICELong replySize;
}

@property(nonatomic, assign) ICELong size;
@property(nonatomic, assign) ICELong replySize;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures size:(ICELong)size replySize:(ICELong)replySize;
+(id) childInvocationMetrics;
+(id) childInvocationMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures size:(ICELong)size replySize:(ICELong)replySize;
// This class also overrides copyWithZone:
@end

ICE_API @protocol ICEMXCollocatedMetrics <ICEMXChildInvocationMetrics>
@end

ICE_API @interface ICEMXCollocatedMetrics : ICEMXChildInvocationMetrics
+(id) collocatedMetrics;
+(id) collocatedMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures size:(ICELong)size replySize:(ICELong)replySize;
// This class also overrides copyWithZone:
@end

ICE_API @protocol ICEMXRemoteMetrics <ICEMXChildInvocationMetrics>
@end

ICE_API @interface ICEMXRemoteMetrics : ICEMXChildInvocationMetrics
+(id) remoteMetrics;
+(id) remoteMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures size:(ICELong)size replySize:(ICELong)replySize;
// This class also overrides copyWithZone:
@end

ICE_API @protocol ICEMXInvocationMetrics <ICEMXMetrics>
@end

ICE_API @interface ICEMXInvocationMetrics : ICEMXMetrics
{
    ICEInt retry;
    ICEInt userException;
    ICEMXMetricsMap *remotes;
    ICEMXMetricsMap *collocated;
}

@property(nonatomic, assign) ICEInt retry;
@property(nonatomic, assign) ICEInt userException;
@property(nonatomic, ICE_STRONG_ATTR) ICEMXMetricsMap *remotes;
@property(nonatomic, ICE_STRONG_ATTR) ICEMXMetricsMap *collocated;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures retry:(ICEInt)retry userException:(ICEInt)userException remotes:(ICEMXMetricsMap*)remotes collocated:(ICEMXMetricsMap*)collocated;
+(id) invocationMetrics;
+(id) invocationMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures retry:(ICEInt)retry userException:(ICEInt)userException remotes:(ICEMXMetricsMap*)remotes collocated:(ICEMXMetricsMap*)collocated;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICE_API @protocol ICEMXConnectionMetrics <ICEMXMetrics>
@end

ICE_API @interface ICEMXConnectionMetrics : ICEMXMetrics
{
    ICELong receivedBytes;
    ICELong sentBytes;
}

@property(nonatomic, assign) ICELong receivedBytes;
@property(nonatomic, assign) ICELong sentBytes;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures receivedBytes:(ICELong)receivedBytes sentBytes:(ICELong)sentBytes;
+(id) connectionMetrics;
+(id) connectionMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures receivedBytes:(ICELong)receivedBytes sentBytes:(ICELong)sentBytes;
// This class also overrides copyWithZone:
@end

ICE_API @protocol ICEMXMetricsPrx <ICEObjectPrx>
@end

ICE_API @protocol ICEMXMetricsAdminPrx <ICEObjectPrx>
-(ICEMutableStringSeq*) getMetricsViewNames:(ICEMutableStringSeq* ICE_AUTORELEASING_QUALIFIER*)disabledViews;
-(ICEMutableStringSeq*) getMetricsViewNames:(ICEMutableStringSeq* ICE_AUTORELEASING_QUALIFIER*)disabledViews context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getMetricsViewNames;
-(id<ICEAsyncResult>) begin_getMetricsViewNames:(ICEContext *)context;
-(ICEMutableStringSeq*) end_getMetricsViewNames:(ICEMutableStringSeq* ICE_AUTORELEASING_QUALIFIER*)disabledViews result:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getMetricsViewNames:(void(^)(ICEMutableStringSeq*, ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getMetricsViewNames:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*, ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getMetricsViewNames:(void(^)(ICEMutableStringSeq*, ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getMetricsViewNames:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*, ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) enableMetricsView:(NSString*)name;
-(void) enableMetricsView:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_enableMetricsView:(NSString*)name;
-(id<ICEAsyncResult>) begin_enableMetricsView:(NSString*)name context:(ICEContext *)context;
-(void) end_enableMetricsView:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_enableMetricsView:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_enableMetricsView:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_enableMetricsView:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_enableMetricsView:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) disableMetricsView:(NSString*)name;
-(void) disableMetricsView:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_disableMetricsView:(NSString*)name;
-(id<ICEAsyncResult>) begin_disableMetricsView:(NSString*)name context:(ICEContext *)context;
-(void) end_disableMetricsView:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_disableMetricsView:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_disableMetricsView:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_disableMetricsView:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_disableMetricsView:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMXMutableMetricsView*) getMetricsView:(NSString*)view timestamp:(ICELong*)timestamp;
-(ICEMXMutableMetricsView*) getMetricsView:(NSString*)view timestamp:(ICELong*)timestamp context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getMetricsView:(NSString*)view;
-(id<ICEAsyncResult>) begin_getMetricsView:(NSString*)view context:(ICEContext *)context;
-(ICEMXMutableMetricsView*) end_getMetricsView:(ICELong*)timestamp result:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getMetricsView:(NSString*)view response:(void(^)(ICEMXMutableMetricsView*, ICELong))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getMetricsView:(NSString*)view context:(ICEContext *)context response:(void(^)(ICEMXMutableMetricsView*, ICELong))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getMetricsView:(NSString*)view response:(void(^)(ICEMXMutableMetricsView*, ICELong))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getMetricsView:(NSString*)view context:(ICEContext *)context response:(void(^)(ICEMXMutableMetricsView*, ICELong))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMXMutableMetricsFailuresSeq*) getMapMetricsFailures:(NSString*)view map:(NSString*)map;
-(ICEMXMutableMetricsFailuresSeq*) getMapMetricsFailures:(NSString*)view map:(NSString*)map context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getMapMetricsFailures:(NSString*)view map:(NSString*)map;
-(id<ICEAsyncResult>) begin_getMapMetricsFailures:(NSString*)view map:(NSString*)map context:(ICEContext *)context;
-(ICEMXMutableMetricsFailuresSeq*) end_getMapMetricsFailures:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getMapMetricsFailures:(NSString*)view map:(NSString*)map response:(void(^)(ICEMXMutableMetricsFailuresSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getMapMetricsFailures:(NSString*)view map:(NSString*)map context:(ICEContext *)context response:(void(^)(ICEMXMutableMetricsFailuresSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getMapMetricsFailures:(NSString*)view map:(NSString*)map response:(void(^)(ICEMXMutableMetricsFailuresSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getMapMetricsFailures:(NSString*)view map:(NSString*)map context:(ICEContext *)context response:(void(^)(ICEMXMutableMetricsFailuresSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMXMetricsFailures*) getMetricsFailures:(NSString*)view map:(NSString*)map id:(NSString*)id_;
-(ICEMXMetricsFailures*) getMetricsFailures:(NSString*)view map:(NSString*)map id:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getMetricsFailures:(NSString*)view map:(NSString*)map id:(NSString*)id_;
-(id<ICEAsyncResult>) begin_getMetricsFailures:(NSString*)view map:(NSString*)map id:(NSString*)id_ context:(ICEContext *)context;
-(ICEMXMetricsFailures*) end_getMetricsFailures:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getMetricsFailures:(NSString*)view map:(NSString*)map id:(NSString*)id_ response:(void(^)(ICEMXMetricsFailures*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getMetricsFailures:(NSString*)view map:(NSString*)map id:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEMXMetricsFailures*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getMetricsFailures:(NSString*)view map:(NSString*)map id:(NSString*)id_ response:(void(^)(ICEMXMetricsFailures*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getMetricsFailures:(NSString*)view map:(NSString*)map id:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEMXMetricsFailures*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @protocol ICEMXThreadMetricsPrx <ICEMXMetricsPrx>
@end

ICE_API @protocol ICEMXDispatchMetricsPrx <ICEMXMetricsPrx>
@end

ICE_API @protocol ICEMXChildInvocationMetricsPrx <ICEMXMetricsPrx>
@end

ICE_API @protocol ICEMXCollocatedMetricsPrx <ICEMXChildInvocationMetricsPrx>
@end

ICE_API @protocol ICEMXRemoteMetricsPrx <ICEMXChildInvocationMetricsPrx>
@end

ICE_API @protocol ICEMXInvocationMetricsPrx <ICEMXMetricsPrx>
@end

ICE_API @protocol ICEMXConnectionMetricsPrx <ICEMXMetricsPrx>
@end

ICE_API @interface ICEMXMetricsPrx : ICEObjectPrx <ICEMXMetricsPrx>
+(NSString *) ice_staticId;
@end

ICE_API @interface ICEMXMetricsAdminPrx : ICEObjectPrx <ICEMXMetricsAdminPrx>
+(NSString *) ice_staticId;
+(ICEMutableStringSeq*) iceI_getMetricsViewNames_unmarshal:(ICEMutableStringSeq* ICE_AUTORELEASING_QUALIFIER*)iceP_disabledViews is:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_enableMetricsView_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(void) iceI_enableMetricsView_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_disableMetricsView_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(void) iceI_disableMetricsView_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getMetricsView_marshal:(NSString*)iceP_view os:(id<ICEOutputStream>)ostr;
+(ICEMXMutableMetricsView*) iceI_getMetricsView_unmarshal:(ICELong*)iceP_timestamp is:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getMapMetricsFailures_marshal:(NSString*)iceP_view map:(NSString*)iceP_map os:(id<ICEOutputStream>)ostr;
+(ICEMXMutableMetricsFailuresSeq*) iceI_getMapMetricsFailures_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getMetricsFailures_marshal:(NSString*)iceP_view map:(NSString*)iceP_map id:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(ICEMXMetricsFailures*) iceI_getMetricsFailures_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICE_API @interface ICEMXThreadMetricsPrx : ICEObjectPrx <ICEMXThreadMetricsPrx>
+(NSString *) ice_staticId;
@end

ICE_API @interface ICEMXDispatchMetricsPrx : ICEObjectPrx <ICEMXDispatchMetricsPrx>
+(NSString *) ice_staticId;
@end

ICE_API @interface ICEMXChildInvocationMetricsPrx : ICEObjectPrx <ICEMXChildInvocationMetricsPrx>
+(NSString *) ice_staticId;
@end

ICE_API @interface ICEMXCollocatedMetricsPrx : ICEObjectPrx <ICEMXCollocatedMetricsPrx>
+(NSString *) ice_staticId;
@end

ICE_API @interface ICEMXRemoteMetricsPrx : ICEObjectPrx <ICEMXRemoteMetricsPrx>
+(NSString *) ice_staticId;
@end

ICE_API @interface ICEMXInvocationMetricsPrx : ICEObjectPrx <ICEMXInvocationMetricsPrx>
+(NSString *) ice_staticId;
@end

ICE_API @interface ICEMXConnectionMetricsPrx : ICEObjectPrx <ICEMXConnectionMetricsPrx>
+(NSString *) ice_staticId;
@end

ICE_API @interface ICEMXStringIntDictHelper : ICEDictionaryHelper
@end

ICE_API @interface ICEMXMetricsPrxHelper : ICEProxyHelper
@end

ICE_API @interface ICEMXMetricsHelper : ICEObjectHelper
@end

ICE_API @interface ICEMXMetricsFailuresHelper : ICEStructHelper
@end

ICE_API @interface ICEMXMetricsFailuresSeqHelper : ICEArraySequenceHelper
@end

ICE_API @interface ICEMXMetricsMapHelper : ICEObjectSequenceHelper
@end

ICE_API @interface ICEMXMetricsViewHelper : ICEDictionaryHelper
@end

ICE_API @interface ICEMXMetricsAdminPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEMXMetricsAdminHelper;

ICE_API @interface ICEMXThreadMetricsPrxHelper : ICEProxyHelper
@end

ICE_API @interface ICEMXThreadMetricsHelper : ICEObjectHelper
@end

ICE_API @interface ICEMXDispatchMetricsPrxHelper : ICEProxyHelper
@end

ICE_API @interface ICEMXDispatchMetricsHelper : ICEObjectHelper
@end

ICE_API @interface ICEMXChildInvocationMetricsPrxHelper : ICEProxyHelper
@end

ICE_API @interface ICEMXChildInvocationMetricsHelper : ICEObjectHelper
@end

ICE_API @interface ICEMXCollocatedMetricsPrxHelper : ICEProxyHelper
@end

ICE_API @interface ICEMXCollocatedMetricsHelper : ICEObjectHelper
@end

ICE_API @interface ICEMXRemoteMetricsPrxHelper : ICEProxyHelper
@end

ICE_API @interface ICEMXRemoteMetricsHelper : ICEObjectHelper
@end

ICE_API @interface ICEMXInvocationMetricsPrxHelper : ICEProxyHelper
@end

ICE_API @interface ICEMXInvocationMetricsHelper : ICEObjectHelper
@end

ICE_API @interface ICEMXConnectionMetricsPrxHelper : ICEProxyHelper
@end

ICE_API @interface ICEMXConnectionMetricsHelper : ICEObjectHelper
@end
