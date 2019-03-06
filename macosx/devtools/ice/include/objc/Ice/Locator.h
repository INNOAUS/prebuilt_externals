//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Locator.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/Identity.h>
#import <objc/Ice/Process.h>

#ifndef ICE_API
#   if defined(ICE_STATIC_LIBS)
#       define ICE_API /**/
#   elif defined(ICE_API_EXPORTS)
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICELocatorRegistry;
@protocol ICELocatorRegistry;

@class ICELocator;
@protocol ICELocator;

@class ICELocatorFinder;
@protocol ICELocatorFinder;

@class ICELocatorRegistryPrx;
@protocol ICELocatorRegistryPrx;

@class ICELocatorPrx;
@protocol ICELocatorPrx;

@class ICELocatorFinderPrx;
@protocol ICELocatorFinderPrx;

ICE_API @interface ICEAdapterNotFoundException : ICEUserException
-(NSString *) ice_id;
+(id) adapterNotFoundException;
@end

ICE_API @interface ICEInvalidReplicaGroupIdException : ICEUserException
-(NSString *) ice_id;
+(id) invalidReplicaGroupIdException;
@end

ICE_API @interface ICEAdapterAlreadyActiveException : ICEUserException
-(NSString *) ice_id;
+(id) adapterAlreadyActiveException;
@end

ICE_API @interface ICEObjectNotFoundException : ICEUserException
-(NSString *) ice_id;
+(id) objectNotFoundException;
@end

ICE_API @interface ICEServerNotFoundException : ICEUserException
-(NSString *) ice_id;
+(id) serverNotFoundException;
@end

ICE_API @protocol ICELocator <NSObject>
-(id<ICEObjectPrx>) findObjectById:(ICEIdentity*)id_ current:(ICECurrent *)current;
-(id<ICEObjectPrx>) findAdapterById:(NSMutableString*)id_ current:(ICECurrent *)current;
-(id<ICELocatorRegistryPrx>) getRegistry:(ICECurrent *)current;
@end

ICE_API @interface ICELocator : ICEServant
+(id) locator;
+(void) iceD_findObjectById:(id<ICELocator>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_findAdapterById:(id<ICELocator>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getRegistry:(id<ICELocator>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICELocatorRegistry <NSObject>
-(void) setAdapterDirectProxy:(NSMutableString*)id_ proxy:(id<ICEObjectPrx>)proxy current:(ICECurrent *)current;
-(void) setReplicatedAdapterDirectProxy:(NSMutableString*)adapterId replicaGroupId:(NSMutableString*)replicaGroupId p:(id<ICEObjectPrx>)p current:(ICECurrent *)current;
-(void) setServerProcessProxy:(NSMutableString*)id_ proxy:(id<ICEProcessPrx>)proxy current:(ICECurrent *)current;
@end

ICE_API @interface ICELocatorRegistry : ICEServant
+(id) locatorRegistry;
+(void) iceD_setAdapterDirectProxy:(id<ICELocatorRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_setReplicatedAdapterDirectProxy:(id<ICELocatorRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_setServerProcessProxy:(id<ICELocatorRegistry>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICELocatorFinder <NSObject>
-(id<ICELocatorPrx>) getLocator:(ICECurrent *)current;
@end

ICE_API @interface ICELocatorFinder : ICEServant
+(id) locatorFinder;
+(void) iceD_getLocator:(id<ICELocatorFinder>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICELocatorPrx <ICEObjectPrx>
-(id<ICEObjectPrx>) findObjectById:(ICEIdentity*)id_;
-(id<ICEObjectPrx>) findObjectById:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_findObjectById:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_findObjectById:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) findAdapterById:(NSString*)id_;
-(id<ICEObjectPrx>) findAdapterById:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_findAdapterById:(NSString*)id_;
-(id<ICEAsyncResult>) begin_findAdapterById:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_findAdapterById:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_findAdapterById:(NSString*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findAdapterById:(NSString*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_findAdapterById:(NSString*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_findAdapterById:(NSString*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICELocatorRegistryPrx>) getRegistry;
-(id<ICELocatorRegistryPrx>) getRegistry:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getRegistry;
-(id<ICEAsyncResult>) begin_getRegistry:(ICEContext *)context;
-(id<ICELocatorRegistryPrx>) end_getRegistry:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getRegistry:(void(^)(id<ICELocatorRegistryPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getRegistry:(ICEContext *)context response:(void(^)(id<ICELocatorRegistryPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getRegistry:(void(^)(id<ICELocatorRegistryPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getRegistry:(ICEContext *)context response:(void(^)(id<ICELocatorRegistryPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @protocol ICELocatorRegistryPrx <ICEObjectPrx>
-(void) setAdapterDirectProxy:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy;
-(void) setAdapterDirectProxy:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_setAdapterDirectProxy:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy;
-(id<ICEAsyncResult>) begin_setAdapterDirectProxy:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy context:(ICEContext *)context;
-(void) end_setAdapterDirectProxy:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_setAdapterDirectProxy:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setAdapterDirectProxy:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setAdapterDirectProxy:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_setAdapterDirectProxy:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) setReplicatedAdapterDirectProxy:(NSString*)adapterId replicaGroupId:(NSString*)replicaGroupId p:(id<ICEObjectPrx>)p;
-(void) setReplicatedAdapterDirectProxy:(NSString*)adapterId replicaGroupId:(NSString*)replicaGroupId p:(id<ICEObjectPrx>)p context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_setReplicatedAdapterDirectProxy:(NSString*)adapterId replicaGroupId:(NSString*)replicaGroupId p:(id<ICEObjectPrx>)p;
-(id<ICEAsyncResult>) begin_setReplicatedAdapterDirectProxy:(NSString*)adapterId replicaGroupId:(NSString*)replicaGroupId p:(id<ICEObjectPrx>)p context:(ICEContext *)context;
-(void) end_setReplicatedAdapterDirectProxy:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_setReplicatedAdapterDirectProxy:(NSString*)adapterId replicaGroupId:(NSString*)replicaGroupId p:(id<ICEObjectPrx>)p response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setReplicatedAdapterDirectProxy:(NSString*)adapterId replicaGroupId:(NSString*)replicaGroupId p:(id<ICEObjectPrx>)p context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setReplicatedAdapterDirectProxy:(NSString*)adapterId replicaGroupId:(NSString*)replicaGroupId p:(id<ICEObjectPrx>)p response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_setReplicatedAdapterDirectProxy:(NSString*)adapterId replicaGroupId:(NSString*)replicaGroupId p:(id<ICEObjectPrx>)p context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) setServerProcessProxy:(NSString*)id_ proxy:(id<ICEProcessPrx>)proxy;
-(void) setServerProcessProxy:(NSString*)id_ proxy:(id<ICEProcessPrx>)proxy context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_setServerProcessProxy:(NSString*)id_ proxy:(id<ICEProcessPrx>)proxy;
-(id<ICEAsyncResult>) begin_setServerProcessProxy:(NSString*)id_ proxy:(id<ICEProcessPrx>)proxy context:(ICEContext *)context;
-(void) end_setServerProcessProxy:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_setServerProcessProxy:(NSString*)id_ proxy:(id<ICEProcessPrx>)proxy response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setServerProcessProxy:(NSString*)id_ proxy:(id<ICEProcessPrx>)proxy context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setServerProcessProxy:(NSString*)id_ proxy:(id<ICEProcessPrx>)proxy response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_setServerProcessProxy:(NSString*)id_ proxy:(id<ICEProcessPrx>)proxy context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @protocol ICELocatorFinderPrx <ICEObjectPrx>
-(id<ICELocatorPrx>) getLocator;
-(id<ICELocatorPrx>) getLocator:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getLocator;
-(id<ICEAsyncResult>) begin_getLocator:(ICEContext *)context;
-(id<ICELocatorPrx>) end_getLocator:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getLocator:(void(^)(id<ICELocatorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLocator:(ICEContext *)context response:(void(^)(id<ICELocatorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLocator:(void(^)(id<ICELocatorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getLocator:(ICEContext *)context response:(void(^)(id<ICELocatorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @interface ICELocatorPrx : ICEObjectPrx <ICELocatorPrx>
+(NSString *) ice_staticId;
+(void) iceI_findObjectById_marshal:(ICEIdentity*)iceP_id os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_findObjectById_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_findAdapterById_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_findAdapterById_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<ICELocatorRegistryPrx>) iceI_getRegistry_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICE_API @interface ICELocatorRegistryPrx : ICEObjectPrx <ICELocatorRegistryPrx>
+(NSString *) ice_staticId;
+(void) iceI_setAdapterDirectProxy_marshal:(NSString*)iceP_id proxy:(id<ICEObjectPrx>)iceP_proxy os:(id<ICEOutputStream>)ostr;
+(void) iceI_setAdapterDirectProxy_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_setReplicatedAdapterDirectProxy_marshal:(NSString*)iceP_adapterId replicaGroupId:(NSString*)iceP_replicaGroupId p:(id<ICEObjectPrx>)iceP_p os:(id<ICEOutputStream>)ostr;
+(void) iceI_setReplicatedAdapterDirectProxy_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_setServerProcessProxy_marshal:(NSString*)iceP_id proxy:(id<ICEProcessPrx>)iceP_proxy os:(id<ICEOutputStream>)ostr;
+(void) iceI_setServerProcessProxy_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICE_API @interface ICELocatorFinderPrx : ICEObjectPrx <ICELocatorFinderPrx>
+(NSString *) ice_staticId;
+(id<ICELocatorPrx>) iceI_getLocator_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICE_API @interface ICELocatorPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICELocatorHelper;

ICE_API @interface ICELocatorRegistryPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICELocatorRegistryHelper;

ICE_API @interface ICELocatorFinderPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICELocatorFinderHelper;
