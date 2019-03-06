//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Session.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/SlicedData.h>
#import <objc/Glacier2/Session.h>
#import <objc/IceGrid/Exception.h>

#ifndef ICEGRID_API
#   if defined(ICE_STATIC_LIBS)
#       define ICEGRID_API /**/
#   elif defined(ICEGRID_API_EXPORTS)
#       define ICEGRID_API ICE_DECLSPEC_EXPORT
#   else
#       define ICEGRID_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEGRIDSession;
@protocol ICEGRIDSession;

@class ICEGRIDSessionPrx;
@protocol ICEGRIDSessionPrx;

ICEGRID_API @protocol ICEGRIDSession <GLACIER2Session>
-(void) keepAlive:(ICECurrent *)current;
-(id<ICEObjectPrx>) allocateObjectById:(ICEIdentity*)id_ current:(ICECurrent *)current;
-(id<ICEObjectPrx>) allocateObjectByType:(NSMutableString*)type current:(ICECurrent *)current;
-(void) releaseObject:(ICEIdentity*)id_ current:(ICECurrent *)current;
-(void) setAllocationTimeout:(ICEInt)timeout current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDSession : ICEServant
+(id) session;
+(void) iceD_keepAlive:(id<ICEGRIDSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_allocateObjectById:(id<ICEGRIDSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_allocateObjectByType:(id<ICEGRIDSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_releaseObject:(id<ICEGRIDSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_setAllocationTimeout:(id<ICEGRIDSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDSessionPrx <GLACIER2SessionPrx>
-(void) keepAlive;
-(void) keepAlive:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_keepAlive;
-(id<ICEAsyncResult>) begin_keepAlive:(ICEContext *)context;
-(void) end_keepAlive:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_keepAlive:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_keepAlive:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_keepAlive:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_keepAlive:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) allocateObjectById:(ICEIdentity*)id_;
-(id<ICEObjectPrx>) allocateObjectById:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_allocateObjectById:(ICEIdentity*)id_;
-(id<ICEAsyncResult>) begin_allocateObjectById:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_allocateObjectById:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_allocateObjectById:(ICEIdentity*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_allocateObjectById:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_allocateObjectById:(ICEIdentity*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_allocateObjectById:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) allocateObjectByType:(NSString*)type;
-(id<ICEObjectPrx>) allocateObjectByType:(NSString*)type context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_allocateObjectByType:(NSString*)type;
-(id<ICEAsyncResult>) begin_allocateObjectByType:(NSString*)type context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_allocateObjectByType:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_allocateObjectByType:(NSString*)type response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_allocateObjectByType:(NSString*)type context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_allocateObjectByType:(NSString*)type response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_allocateObjectByType:(NSString*)type context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) releaseObject:(ICEIdentity*)id_;
-(void) releaseObject:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_releaseObject:(ICEIdentity*)id_;
-(id<ICEAsyncResult>) begin_releaseObject:(ICEIdentity*)id_ context:(ICEContext *)context;
-(void) end_releaseObject:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_releaseObject:(ICEIdentity*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_releaseObject:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_releaseObject:(ICEIdentity*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_releaseObject:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) setAllocationTimeout:(ICEInt)timeout;
-(void) setAllocationTimeout:(ICEInt)timeout context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_setAllocationTimeout:(ICEInt)timeout;
-(id<ICEAsyncResult>) begin_setAllocationTimeout:(ICEInt)timeout context:(ICEContext *)context;
-(void) end_setAllocationTimeout:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_setAllocationTimeout:(ICEInt)timeout response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setAllocationTimeout:(ICEInt)timeout context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setAllocationTimeout:(ICEInt)timeout response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_setAllocationTimeout:(ICEInt)timeout context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @interface ICEGRIDSessionPrx : ICEObjectPrx <ICEGRIDSessionPrx>
+(NSString *) ice_staticId;
+(void) iceI_allocateObjectById_marshal:(ICEIdentity*)iceP_id os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_allocateObjectById_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_allocateObjectByType_marshal:(NSString*)iceP_type os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_allocateObjectByType_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_releaseObject_marshal:(ICEIdentity*)iceP_id os:(id<ICEOutputStream>)ostr;
+(void) iceI_releaseObject_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_setAllocationTimeout_marshal:(ICEInt)iceP_timeout os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @interface ICEGRIDSessionPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDSessionHelper;
