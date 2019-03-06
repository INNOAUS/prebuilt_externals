//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `RemoteLogger.ice'

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

@class ICERemoteLogger;
@protocol ICERemoteLogger;

@class ICELoggerAdmin;
@protocol ICELoggerAdmin;

@class ICERemoteLoggerPrx;
@protocol ICERemoteLoggerPrx;

@class ICELoggerAdminPrx;
@protocol ICELoggerAdminPrx;

typedef enum : ICEInt
{
    ICEPrintMessage,
    ICETraceMessage,
    ICEWarningMessage,
    ICEErrorMessage
} ICELogMessageType;

typedef NSData ICELogMessageTypeSeq;
typedef NSMutableData ICEMutableLogMessageTypeSeq;

ICE_API @interface ICELogMessage : NSObject <NSCopying>
{
    @private
        ICELogMessageType type;
        ICELong timestamp;
        NSString *traceCategory;
        NSString *message;
}

@property(nonatomic, assign) ICELogMessageType type;
@property(nonatomic, assign) ICELong timestamp;
@property(nonatomic, ICE_STRONG_ATTR) NSString *traceCategory;
@property(nonatomic, ICE_STRONG_ATTR) NSString *message;

-(id) init;
-(id) init:(ICELogMessageType)type timestamp:(ICELong)timestamp traceCategory:(NSString*)traceCategory message:(NSString*)message;
+(id) logMessage;
+(id) logMessage:(ICELogMessageType)type timestamp:(ICELong)timestamp traceCategory:(NSString*)traceCategory message:(NSString*)message;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICELogMessageSeq;
typedef NSMutableArray ICEMutableLogMessageSeq;

ICE_API @protocol ICERemoteLogger <NSObject>
-(void) init:(NSMutableString*)prefix logMessages:(ICEMutableLogMessageSeq*)logMessages current:(ICECurrent *)current;
-(void) log:(ICELogMessage*)message current:(ICECurrent *)current;
@end

ICE_API @interface ICERemoteLogger : ICEServant
+(id) remoteLogger;
+(void) iceD_init:(id<ICERemoteLogger>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_log:(id<ICERemoteLogger>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @interface ICERemoteLoggerAlreadyAttachedException : ICEUserException
-(NSString *) ice_id;
+(id) remoteLoggerAlreadyAttachedException;
@end

ICE_API @protocol ICELoggerAdmin <NSObject>
-(void) attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICEMutableLogMessageTypeSeq*)messageTypes traceCategories:(ICEMutableStringSeq*)traceCategories messageMax:(ICEInt)messageMax current:(ICECurrent *)current;
-(BOOL) detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx current:(ICECurrent *)current;
-(ICELogMessageSeq*) getLog:(ICEMutableLogMessageTypeSeq*)messageTypes traceCategories:(ICEMutableStringSeq*)traceCategories messageMax:(ICEInt)messageMax prefix:(NSString**)prefix current:(ICECurrent *)current;
@end

ICE_API @interface ICELoggerAdmin : ICEServant
+(id) loggerAdmin;
+(void) iceD_attachRemoteLogger:(id<ICELoggerAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_detachRemoteLogger:(id<ICELoggerAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getLog:(id<ICELoggerAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICERemoteLoggerPrx <ICEObjectPrx>
-(void) init:(NSString*)prefix logMessages:(ICELogMessageSeq*)logMessages;
-(void) init:(NSString*)prefix logMessages:(ICELogMessageSeq*)logMessages context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_init:(NSString*)prefix logMessages:(ICELogMessageSeq*)logMessages;
-(id<ICEAsyncResult>) begin_init:(NSString*)prefix logMessages:(ICELogMessageSeq*)logMessages context:(ICEContext *)context;
-(void) end_init:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_init:(NSString*)prefix logMessages:(ICELogMessageSeq*)logMessages response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_init:(NSString*)prefix logMessages:(ICELogMessageSeq*)logMessages context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_init:(NSString*)prefix logMessages:(ICELogMessageSeq*)logMessages response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_init:(NSString*)prefix logMessages:(ICELogMessageSeq*)logMessages context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) log:(ICELogMessage*)message;
-(void) log:(ICELogMessage*)message context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_log:(ICELogMessage*)message;
-(id<ICEAsyncResult>) begin_log:(ICELogMessage*)message context:(ICEContext *)context;
-(void) end_log:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_log:(ICELogMessage*)message response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_log:(ICELogMessage*)message context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_log:(ICELogMessage*)message response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_log:(ICELogMessage*)message context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @protocol ICELoggerAdminPrx <ICEObjectPrx>
-(void) attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax;
-(void) attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax;
-(id<ICEAsyncResult>) begin_attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax context:(ICEContext *)context;
-(void) end_attachRemoteLogger:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_attachRemoteLogger:(id<ICERemoteLoggerPrx>)prx messageTypes:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(BOOL) detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx;
-(BOOL) detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx;
-(id<ICEAsyncResult>) begin_detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx context:(ICEContext *)context;
-(BOOL) end_detachRemoteLogger:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx context:(ICEContext *)context response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_detachRemoteLogger:(id<ICERemoteLoggerPrx>)prx context:(ICEContext *)context response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableLogMessageSeq*) getLog:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax prefix:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)prefix;
-(ICEMutableLogMessageSeq*) getLog:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax prefix:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)prefix context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getLog:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax;
-(id<ICEAsyncResult>) begin_getLog:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax context:(ICEContext *)context;
-(ICEMutableLogMessageSeq*) end_getLog:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)prefix result:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getLog:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax response:(void(^)(ICEMutableLogMessageSeq*, NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLog:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax context:(ICEContext *)context response:(void(^)(ICEMutableLogMessageSeq*, NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLog:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax response:(void(^)(ICEMutableLogMessageSeq*, NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getLog:(ICELogMessageTypeSeq*)messageTypes traceCategories:(ICEStringSeq*)traceCategories messageMax:(ICEInt)messageMax context:(ICEContext *)context response:(void(^)(ICEMutableLogMessageSeq*, NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @interface ICERemoteLoggerPrx : ICEObjectPrx <ICERemoteLoggerPrx>
+(NSString *) ice_staticId;
+(void) iceI_init_marshal:(NSString*)iceP_prefix logMessages:(ICELogMessageSeq*)iceP_logMessages os:(id<ICEOutputStream>)ostr;
+(void) iceI_log_marshal:(ICELogMessage*)iceP_message os:(id<ICEOutputStream>)ostr;
@end

ICE_API @interface ICELoggerAdminPrx : ICEObjectPrx <ICELoggerAdminPrx>
+(NSString *) ice_staticId;
+(void) iceI_attachRemoteLogger_marshal:(id<ICERemoteLoggerPrx>)iceP_prx messageTypes:(ICELogMessageTypeSeq*)iceP_messageTypes traceCategories:(ICEStringSeq*)iceP_traceCategories messageMax:(ICEInt)iceP_messageMax os:(id<ICEOutputStream>)ostr;
+(void) iceI_attachRemoteLogger_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_detachRemoteLogger_marshal:(id<ICERemoteLoggerPrx>)iceP_prx os:(id<ICEOutputStream>)ostr;
+(BOOL) iceI_detachRemoteLogger_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getLog_marshal:(ICELogMessageTypeSeq*)iceP_messageTypes traceCategories:(ICEStringSeq*)iceP_traceCategories messageMax:(ICEInt)iceP_messageMax os:(id<ICEOutputStream>)ostr;
+(ICEMutableLogMessageSeq*) iceI_getLog_unmarshal:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)iceP_prefix is:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICE_API @interface ICELogMessageTypeHelper : ICEEnumHelper
@end

ICE_API @interface ICELogMessageTypeSeqHelper : ICEEnumSequenceHelper
@end

ICE_API @interface ICELogMessageHelper : ICEStructHelper
@end

ICE_API @interface ICELogMessageSeqHelper : ICEArraySequenceHelper
@end

ICE_API @interface ICERemoteLoggerPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICERemoteLoggerHelper;

ICE_API @interface ICELoggerAdminPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICELoggerAdminHelper;
