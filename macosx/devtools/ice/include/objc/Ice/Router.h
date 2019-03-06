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

@class ICERouter;
@protocol ICERouter;

@class ICERouterFinder;
@protocol ICERouterFinder;

@class ICERouterPrx;
@protocol ICERouterPrx;

@class ICERouterFinderPrx;
@protocol ICERouterFinderPrx;

ICE_API @protocol ICERouter <NSObject>
-(id<ICEObjectPrx>) getClientProxy:(id*)hasRoutingTable current:(ICECurrent *)current;
-(id<ICEObjectPrx>) getServerProxy:(ICECurrent *)current;
-(ICEObjectProxySeq*) addProxies:(ICEMutableObjectProxySeq*)proxies current:(ICECurrent *)current;
@end

ICE_API @interface ICERouter : ICEServant
+(id) router;
+(void) iceD_getClientProxy:(id<ICERouter>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getServerProxy:(id<ICERouter>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_addProxies:(id<ICERouter>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICERouterFinder <NSObject>
-(id<ICERouterPrx>) getRouter:(ICECurrent *)current;
@end

ICE_API @interface ICERouterFinder : ICEServant
+(id) routerFinder;
+(void) iceD_getRouter:(id<ICERouterFinder>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICERouterPrx <ICEObjectPrx>
-(id<ICEObjectPrx>) getClientProxy:(id ICE_AUTORELEASING_QUALIFIER*)hasRoutingTable;
-(id<ICEObjectPrx>) getClientProxy:(id ICE_AUTORELEASING_QUALIFIER*)hasRoutingTable context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getClientProxy;
-(id<ICEAsyncResult>) begin_getClientProxy:(ICEContext *)context;
-(id<ICEObjectPrx>) end_getClientProxy:(id ICE_AUTORELEASING_QUALIFIER*)hasRoutingTable result:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getClientProxy:(void(^)(id<ICEObjectPrx>, id))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getClientProxy:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>, id))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getClientProxy:(void(^)(id<ICEObjectPrx>, id))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getClientProxy:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>, id))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) getServerProxy;
-(id<ICEObjectPrx>) getServerProxy:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getServerProxy;
-(id<ICEAsyncResult>) begin_getServerProxy:(ICEContext *)context;
-(id<ICEObjectPrx>) end_getServerProxy:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getServerProxy:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerProxy:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerProxy:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getServerProxy:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableObjectProxySeq*) addProxies:(ICEObjectProxySeq*)proxies;
-(ICEMutableObjectProxySeq*) addProxies:(ICEObjectProxySeq*)proxies context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_addProxies:(ICEObjectProxySeq*)proxies;
-(id<ICEAsyncResult>) begin_addProxies:(ICEObjectProxySeq*)proxies context:(ICEContext *)context;
-(ICEMutableObjectProxySeq*) end_addProxies:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_addProxies:(ICEObjectProxySeq*)proxies response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_addProxies:(ICEObjectProxySeq*)proxies context:(ICEContext *)context response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_addProxies:(ICEObjectProxySeq*)proxies response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_addProxies:(ICEObjectProxySeq*)proxies context:(ICEContext *)context response:(void(^)(ICEMutableObjectProxySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @protocol ICERouterFinderPrx <ICEObjectPrx>
-(id<ICERouterPrx>) getRouter;
-(id<ICERouterPrx>) getRouter:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getRouter;
-(id<ICEAsyncResult>) begin_getRouter:(ICEContext *)context;
-(id<ICERouterPrx>) end_getRouter:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getRouter:(void(^)(id<ICERouterPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getRouter:(ICEContext *)context response:(void(^)(id<ICERouterPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getRouter:(void(^)(id<ICERouterPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getRouter:(ICEContext *)context response:(void(^)(id<ICERouterPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @interface ICERouterPrx : ICEObjectPrx <ICERouterPrx>
+(NSString *) ice_staticId;
+(id<ICEObjectPrx>) iceI_getClientProxy_unmarshal:(id ICE_AUTORELEASING_QUALIFIER*)iceP_hasRoutingTable is:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<ICEObjectPrx>) iceI_getServerProxy_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_addProxies_marshal:(ICEObjectProxySeq*)iceP_proxies os:(id<ICEOutputStream>)ostr;
+(ICEMutableObjectProxySeq*) iceI_addProxies_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICE_API @interface ICERouterFinderPrx : ICEObjectPrx <ICERouterFinderPrx>
+(NSString *) ice_staticId;
+(id<ICERouterPrx>) iceI_getRouter_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICE_API @interface ICERouterPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICERouterHelper;

ICE_API @interface ICERouterFinderPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICERouterFinderHelper;
