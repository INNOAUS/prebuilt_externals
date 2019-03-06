//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Registry.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/SlicedData.h>
#import <objc/IceGrid/Exception.h>
#import <objc/IceGrid/Session.h>
#import <objc/IceGrid/Admin.h>
#import <objc/Ice/Locator.h>

#ifndef ICEGRID_API
#   if defined(ICE_STATIC_LIBS)
#       define ICEGRID_API /**/
#   elif defined(ICEGRID_API_EXPORTS)
#       define ICEGRID_API ICE_DECLSPEC_EXPORT
#   else
#       define ICEGRID_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEGRIDQuery;
@protocol ICEGRIDQuery;

@class ICEGRIDRegistry;
@protocol ICEGRIDRegistry;

@class ICEGRIDLocator;
@protocol ICEGRIDLocator;

@class ICEGRIDQueryPrx;
@protocol ICEGRIDQueryPrx;

@class ICEGRIDRegistryPrx;
@protocol ICEGRIDRegistryPrx;

@class ICEGRIDLocatorPrx;
@protocol ICEGRIDLocatorPrx;

typedef enum : ICEInt
{
    ICEGRIDLoadSample1,
    ICEGRIDLoadSample5,
    ICEGRIDLoadSample15
} ICEGRIDLoadSample;

ICEGRID_API @protocol ICEGRIDQuery <NSObject>
-(id<ICEObjectPrx>) findObjectById:(ICEIdentity*)id_ current:(ICECurrent *)current;
-(id<ICEObjectPrx>) findObjectByType:(NSMutableString*)type current:(ICECurrent *)current;
-(id<ICEObjectPrx>) findObjectByTypeOnLeastLoadedNode:(NSMutableString*)type sample:(ICEGRIDLoadSample)sample current:(ICECurrent *)current;
-(ICEObjectProxySeq*) findAllObjectsByType:(NSMutableString*)type current:(ICECurrent *)current;
-(ICEObjectProxySeq*) findAllReplicas:(id<ICEObjectPrx>)proxy current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDQuery : ICEServant
+(id) query;
+(void) iceD_findObjectById:(id<ICEGRIDQuery>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_findObjectByType:(id<ICEGRIDQuery>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_findObjectByTypeOnLeastLoadedNode:(id<ICEGRIDQuery>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_findAllObjectsByType:(id<ICEGRIDQuery>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_findAllReplicas:(id<ICEGRIDQuery>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDRegistry <NSObject>
-(id<ICEGRIDSessionPrx>) createSession:(NSMutableString*)userId password:(NSMutableString*)password current:(ICECurrent *)current;
-(id<ICEGRIDAdminSessionPrx>) createAdminSession:(NSMutableString*)userId password:(NSMutableString*)password current:(ICECurrent *)current;
-(id<ICEGRIDSessionPrx>) createSessionFromSecureConnection:(ICECurrent *)current;
-(id<ICEGRIDAdminSessionPrx>) createAdminSessionFromSecureConnection:(ICECurrent *)current;
-(ICEInt) getSessionTimeout:(ICECurrent *)current;
-(ICEInt) getACMTimeout:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDRegistry : ICEServant
+(id) registry;
+(void) iceD_createSession:(id<ICEGRIDRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_createAdminSession:(id<ICEGRIDRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_createSessionFromSecureConnection:(id<ICEGRIDRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_createAdminSessionFromSecureConnection:(id<ICEGRIDRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getSessionTimeout:(id<ICEGRIDRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getACMTimeout:(id<ICEGRIDRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDLocator <ICELocator>
-(id<ICEGRIDRegistryPrx>) getLocalRegistry:(ICECurrent *)current;
-(id<ICEGRIDQueryPrx>) getLocalQuery:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDLocator : ICEServant
+(id) locator;
+(void) iceD_getLocalRegistry:(id<ICEGRIDLocator>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getLocalQuery:(id<ICEGRIDLocator>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDQueryPrx <ICEObjectPrx>
-(id<ICEObjectPrx>) findObjectById:(ICEIdentity*)id_;
-(id<ICEObjectPrx>) findObjectById:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_findObjectById:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) findObjectByType:(NSString*)type;
-(id<ICEObjectPrx>) findObjectByType:(NSString*)type context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_findObjectByType:(NSString*)type;
-(id<ICEAsyncResult>) begin_findObjectByType:(NSString*)type context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_findObjectByType:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_findObjectByType:(NSString*)type response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findObjectByType:(NSString*)type context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findObjectByType:(NSString*)type response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_findObjectByType:(NSString*)type context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) findObjectByTypeOnLeastLoadedNode:(NSString*)type sample:(ICEGRIDLoadSample)sample;
-(id<ICEObjectPrx>) findObjectByTypeOnLeastLoadedNode:(NSString*)type sample:(ICEGRIDLoadSample)sample context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_findObjectByTypeOnLeastLoadedNode:(NSString*)type sample:(ICEGRIDLoadSample)sample;
-(id<ICEAsyncResult>) begin_findObjectByTypeOnLeastLoadedNode:(NSString*)type sample:(ICEGRIDLoadSample)sample context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_findObjectByTypeOnLeastLoadedNode:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_findObjectByTypeOnLeastLoadedNode:(NSString*)type sample:(ICEGRIDLoadSample)sample response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findObjectByTypeOnLeastLoadedNode:(NSString*)type sample:(ICEGRIDLoadSample)sample context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findObjectByTypeOnLeastLoadedNode:(NSString*)type sample:(ICEGRIDLoadSample)sample response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_findObjectByTypeOnLeastLoadedNode:(NSString*)type sample:(ICEGRIDLoadSample)sample context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableObjectProxySeq*) findAllObjectsByType:(NSString*)type;
-(ICEMutableObjectProxySeq*) findAllObjectsByType:(NSString*)type context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_findAllObjectsByType:(NSString*)type;
-(id<ICEAsyncResult>) begin_findAllObjectsByType:(NSString*)type context:(ICEContext *)context;
-(ICEMutableObjectProxySeq*) end_findAllObjectsByType:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_findAllObjectsByType:(NSString*)type response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findAllObjectsByType:(NSString*)type context:(ICEContext *)context response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findAllObjectsByType:(NSString*)type response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_findAllObjectsByType:(NSString*)type context:(ICEContext *)context response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableObjectProxySeq*) findAllReplicas:(id<ICEObjectPrx>)proxy;
-(ICEMutableObjectProxySeq*) findAllReplicas:(id<ICEObjectPrx>)proxy context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_findAllReplicas:(id<ICEObjectPrx>)proxy;
-(id<ICEAsyncResult>) begin_findAllReplicas:(id<ICEObjectPrx>)proxy context:(ICEContext *)context;
-(ICEMutableObjectProxySeq*) end_findAllReplicas:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_findAllReplicas:(id<ICEObjectPrx>)proxy response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findAllReplicas:(id<ICEObjectPrx>)proxy context:(ICEContext *)context response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findAllReplicas:(id<ICEObjectPrx>)proxy response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_findAllReplicas:(id<ICEObjectPrx>)proxy context:(ICEContext *)context response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @protocol ICEGRIDRegistryPrx <ICEObjectPrx>
-(id<ICEGRIDSessionPrx>) createSession:(NSString*)userId password:(NSString*)password;
-(id<ICEGRIDSessionPrx>) createSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context;
-(id<ICEGRIDSessionPrx>) end_createSession:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password response:(void(^)(id<ICEGRIDSessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context response:(void(^)(id<ICEGRIDSessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password response:(void(^)(id<ICEGRIDSessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_createSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context response:(void(^)(id<ICEGRIDSessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDAdminSessionPrx>) createAdminSession:(NSString*)userId password:(NSString*)password;
-(id<ICEGRIDAdminSessionPrx>) createAdminSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_createAdminSession:(NSString*)userId password:(NSString*)password;
-(id<ICEAsyncResult>) begin_createAdminSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context;
-(id<ICEGRIDAdminSessionPrx>) end_createAdminSession:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_createAdminSession:(NSString*)userId password:(NSString*)password response:(void(^)(id<ICEGRIDAdminSessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createAdminSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context response:(void(^)(id<ICEGRIDAdminSessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createAdminSession:(NSString*)userId password:(NSString*)password response:(void(^)(id<ICEGRIDAdminSessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_createAdminSession:(NSString*)userId password:(NSString*)password context:(ICEContext *)context response:(void(^)(id<ICEGRIDAdminSessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDSessionPrx>) createSessionFromSecureConnection;
-(id<ICEGRIDSessionPrx>) createSessionFromSecureConnection:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(ICEContext *)context;
-(id<ICEGRIDSessionPrx>) end_createSessionFromSecureConnection:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(void(^)(id<ICEGRIDSessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(ICEContext *)context response:(void(^)(id<ICEGRIDSessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(void(^)(id<ICEGRIDSessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_createSessionFromSecureConnection:(ICEContext *)context response:(void(^)(id<ICEGRIDSessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDAdminSessionPrx>) createAdminSessionFromSecureConnection;
-(id<ICEGRIDAdminSessionPrx>) createAdminSessionFromSecureConnection:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_createAdminSessionFromSecureConnection;
-(id<ICEAsyncResult>) begin_createAdminSessionFromSecureConnection:(ICEContext *)context;
-(id<ICEGRIDAdminSessionPrx>) end_createAdminSessionFromSecureConnection:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_createAdminSessionFromSecureConnection:(void(^)(id<ICEGRIDAdminSessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createAdminSessionFromSecureConnection:(ICEContext *)context response:(void(^)(id<ICEGRIDAdminSessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_createAdminSessionFromSecureConnection:(void(^)(id<ICEGRIDAdminSessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_createAdminSessionFromSecureConnection:(ICEContext *)context response:(void(^)(id<ICEGRIDAdminSessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEInt) getSessionTimeout;
-(ICEInt) getSessionTimeout:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getSessionTimeout;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context;
-(ICEInt) end_getSessionTimeout:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
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

ICEGRID_API @protocol ICEGRIDLocatorPrx <ICELocatorPrx>
-(id<ICEGRIDRegistryPrx>) getLocalRegistry;
-(id<ICEGRIDRegistryPrx>) getLocalRegistry:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getLocalRegistry;
-(id<ICEAsyncResult>) begin_getLocalRegistry:(ICEContext *)context;
-(id<ICEGRIDRegistryPrx>) end_getLocalRegistry:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getLocalRegistry:(void(^)(id<ICEGRIDRegistryPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLocalRegistry:(ICEContext *)context response:(void(^)(id<ICEGRIDRegistryPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLocalRegistry:(void(^)(id<ICEGRIDRegistryPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getLocalRegistry:(ICEContext *)context response:(void(^)(id<ICEGRIDRegistryPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDQueryPrx>) getLocalQuery;
-(id<ICEGRIDQueryPrx>) getLocalQuery:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getLocalQuery;
-(id<ICEAsyncResult>) begin_getLocalQuery:(ICEContext *)context;
-(id<ICEGRIDQueryPrx>) end_getLocalQuery:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getLocalQuery:(void(^)(id<ICEGRIDQueryPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLocalQuery:(ICEContext *)context response:(void(^)(id<ICEGRIDQueryPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLocalQuery:(void(^)(id<ICEGRIDQueryPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getLocalQuery:(ICEContext *)context response:(void(^)(id<ICEGRIDQueryPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @interface ICEGRIDQueryPrx : ICEObjectPrx <ICEGRIDQueryPrx>
+(NSString *) ice_staticId;
+(void) iceI_findObjectById_marshal:(ICEIdentity*)iceP_id os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_findObjectById_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_findObjectByType_marshal:(NSString*)iceP_type os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_findObjectByType_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_findObjectByTypeOnLeastLoadedNode_marshal:(NSString*)iceP_type sample:(ICEGRIDLoadSample)iceP_sample os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_findObjectByTypeOnLeastLoadedNode_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_findAllObjectsByType_marshal:(NSString*)iceP_type os:(id<ICEOutputStream>)ostr;
+(ICEMutableObjectProxySeq*) iceI_findAllObjectsByType_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_findAllReplicas_marshal:(id<ICEObjectPrx>)iceP_proxy os:(id<ICEOutputStream>)ostr;
+(ICEMutableObjectProxySeq*) iceI_findAllReplicas_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICEGRID_API @interface ICEGRIDRegistryPrx : ICEObjectPrx <ICEGRIDRegistryPrx>
+(NSString *) ice_staticId;
+(void) iceI_createSession_marshal:(NSString*)iceP_userId password:(NSString*)iceP_password os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDSessionPrx>) iceI_createSession_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_createAdminSession_marshal:(NSString*)iceP_userId password:(NSString*)iceP_password os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDAdminSessionPrx>) iceI_createAdminSession_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<ICEGRIDSessionPrx>) iceI_createSessionFromSecureConnection_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<ICEGRIDAdminSessionPrx>) iceI_createAdminSessionFromSecureConnection_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEInt) iceI_getSessionTimeout_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEInt) iceI_getACMTimeout_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICEGRID_API @interface ICEGRIDLocatorPrx : ICEObjectPrx <ICEGRIDLocatorPrx>
+(NSString *) ice_staticId;
+(id<ICEGRIDRegistryPrx>) iceI_getLocalRegistry_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<ICEGRIDQueryPrx>) iceI_getLocalQuery_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICEGRID_API @interface ICEGRIDLoadSampleHelper : ICEEnumHelper
@end

ICEGRID_API @interface ICEGRIDQueryPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDQueryHelper;

ICEGRID_API @interface ICEGRIDRegistryPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDRegistryHelper;

ICEGRID_API @interface ICEGRIDLocatorPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDLocatorHelper;
