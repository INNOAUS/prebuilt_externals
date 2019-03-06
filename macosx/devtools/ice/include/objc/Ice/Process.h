//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Process.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
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

@class ICEProcess;
@protocol ICEProcess;

@class ICEProcessPrx;
@protocol ICEProcessPrx;

ICE_API @protocol ICEProcess <NSObject>
-(void) shutdown:(ICECurrent *)current;
-(void) writeMessage:(NSMutableString*)message fd:(ICEInt)fd current:(ICECurrent *)current;
@end

ICE_API @interface ICEProcess : ICEServant
+(id) process;
+(void) iceD_shutdown:(id<ICEProcess>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_writeMessage:(id<ICEProcess>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICEProcessPrx <ICEObjectPrx>
-(void) shutdown;
-(void) shutdown:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_shutdown;
-(id<ICEAsyncResult>) begin_shutdown:(ICEContext *)context;
-(void) end_shutdown:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_shutdown:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_shutdown:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_shutdown:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_shutdown:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) writeMessage:(NSString*)message fd:(ICEInt)fd;
-(void) writeMessage:(NSString*)message fd:(ICEInt)fd context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_writeMessage:(NSString*)message fd:(ICEInt)fd;
-(id<ICEAsyncResult>) begin_writeMessage:(NSString*)message fd:(ICEInt)fd context:(ICEContext *)context;
-(void) end_writeMessage:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_writeMessage:(NSString*)message fd:(ICEInt)fd response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_writeMessage:(NSString*)message fd:(ICEInt)fd context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_writeMessage:(NSString*)message fd:(ICEInt)fd response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_writeMessage:(NSString*)message fd:(ICEInt)fd context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @interface ICEProcessPrx : ICEObjectPrx <ICEProcessPrx>
+(NSString *) ice_staticId;
+(void) iceI_writeMessage_marshal:(NSString*)iceP_message fd:(ICEInt)iceP_fd os:(id<ICEOutputStream>)ostr;
@end

ICE_API @interface ICEProcessPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEProcessHelper;
