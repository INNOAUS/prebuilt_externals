//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Router.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/SlicedData.h>
#import <objc/Ice/Router.h>
#import <objc/Glacier2/Session.h>
#import <objc/Glacier2/PermissionsVerifier.h>

#ifndef GLACIER2_API
#   if defined(ICE_STATIC_LIBS)
#       define GLACIER2_API /**/
#   elif defined(GLACIER2_API_EXPORTS)
#       define GLACIER2_API ICE_DECLSPEC_EXPORT
#   else
#       define GLACIER2_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class GLACIER2Router;
@protocol GLACIER2Router;

@class GLACIER2RouterPrx;
@protocol GLACIER2RouterPrx;

GLACIER2_API @interface GLACIER2SessionNotExistException : ICEUserException
-(NSString *) ice_id;
+(id) sessionNotExistException;
@end

GLACIER2_API @protocol GLACIER2Router <ICERouter>
-(NSString*) getCategoryForClient:(ICECurrent *)current;
-(id<GLACIER2SessionPrx>) createSession:(NSMutableString*)userId password:(NSMutableString*)password current:(ICECurrent *)current;
-(id<GLACIER2SessionPrx>) createSessionFromSecureConnection:(ICECurrent *)current;
-(void) refreshSession:(ICECurrent *)current;
-(void) destroySession:(ICECurrent *)current;
-(ICELong) getSessionTimeout:(ICECurrent *)current;
-(ICEInt) getACMTimeout:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2Router : ICEServant
+(id) router;
+(void) iceD_getCategoryForClient:(id<GLACIER2Router>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_createSession:(id<GLACIER2Router>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_createSessionFromSecureConnection:(id<GLACIER2Router>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_refreshSession:(id<GLACIER2Router>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_destroySession:(id<GLACIER2Router>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getSessionTimeout:(id<GLACIER2Router>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getACMTimeout:(id<GLACIER2Router>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2RouterPrx <ICERouterPrx>
-(NSMutableString*) getCategoryForClient;
-(NSMutableString*) getCategoryForClient:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getCategoryForClient;
-(id<ICEAsyncResult>) begin_getCategoryForClient:(ICEContext *)context;
-(NSMutableString*) end_getCategoryForClient:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getCategoryForClient:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getCategoryForClient:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getCategoryForClient:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getCategoryForClient:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<GLACIER2SessionPrx>) createSession:(NSString*)userId password:(NSString*)password;
-(id<GLACIER2SessionPrx>) createSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context;
-(id<GLACIER2SessionPrx>) end_createSession:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<GLACIER2SessionPrx>) createSessionFromSecureConnection;
-(id<GLACIER2SessionPrx>) createSessionFromSecureConnection:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(ICEContext *)context;
-(id<GLACIER2SessionPrx>) end_createSessionFromSecureConnection:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(ICEContext *)context response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(ICEContext *)context response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) refreshSession;
-(void) refreshSession:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_refreshSession;
-(id<ICEAsyncResult>) begin_refreshSession:(ICEContext *)context;
-(void) end_refreshSession:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_refreshSession:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_refreshSession:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_refreshSession:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_refreshSession:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) destroySession;
-(void) destroySession:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_destroySession;
-(id<ICEAsyncResult>) begin_destroySession:(ICEContext *)context;
-(void) end_destroySession:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_destroySession:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_destroySession:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_destroySession:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_destroySession:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICELong) getSessionTimeout;
-(ICELong) getSessionTimeout:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getSessionTimeout;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context;
-(ICELong) end_getSessionTimeout:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(void(^)(ICELong))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context response:(void(^)(ICELong))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(void(^)(ICELong))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context response:(void(^)(ICELong))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEInt) getACMTimeout;
-(ICEInt) getACMTimeout:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getACMTimeout;
-(id<ICEAsyncResult>) begin_getACMTimeout:(ICEContext *)context;
-(ICEInt) end_getACMTimeout:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getACMTimeout:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getACMTimeout:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getACMTimeout:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getACMTimeout:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @interface GLACIER2RouterPrx : ICEObjectPrx <GLACIER2RouterPrx>
+(NSString *) ice_staticId;
+(NSMutableString*) iceI_getCategoryForClient_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_createSession_marshal:(NSString*)iceP_userId password:(NSString*)iceP_password os:(id<ICEOutputStream>)ostr;
+(id<GLACIER2SessionPrx>) iceI_createSession_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<GLACIER2SessionPrx>) iceI_createSessionFromSecureConnection_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_refreshSession_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_destroySession_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICELong) iceI_getSessionTimeout_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEInt) iceI_getACMTimeout_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

GLACIER2_API @interface GLACIER2RouterPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2RouterHelper;
