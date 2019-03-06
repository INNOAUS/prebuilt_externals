//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Admin.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/SlicedData.h>
#import <objc/Ice/Identity.h>
#import <objc/Ice/BuiltinSequences.h>
#import <objc/Ice/Properties.h>
#import <objc/Ice/SliceChecksumDict.h>
#import <objc/Glacier2/Session.h>
#import <objc/IceGrid/Exception.h>
#import <objc/IceGrid/Descriptor.h>

#ifndef ICEGRID_API
#   if defined(ICE_STATIC_LIBS)
#       define ICEGRID_API /**/
#   elif defined(ICEGRID_API_EXPORTS)
#       define ICEGRID_API ICE_DECLSPEC_EXPORT
#   else
#       define ICEGRID_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEGRIDAdmin;
@protocol ICEGRIDAdmin;

@class ICEGRIDFileIterator;
@protocol ICEGRIDFileIterator;

@class ICEGRIDRegistryObserver;
@protocol ICEGRIDRegistryObserver;

@class ICEGRIDNodeObserver;
@protocol ICEGRIDNodeObserver;

@class ICEGRIDApplicationObserver;
@protocol ICEGRIDApplicationObserver;

@class ICEGRIDAdapterObserver;
@protocol ICEGRIDAdapterObserver;

@class ICEGRIDObjectObserver;
@protocol ICEGRIDObjectObserver;

@class ICEGRIDAdminSession;
@protocol ICEGRIDAdminSession;

@class ICEGRIDAdminPrx;
@protocol ICEGRIDAdminPrx;

@class ICEGRIDFileIteratorPrx;
@protocol ICEGRIDFileIteratorPrx;

@class ICEGRIDRegistryObserverPrx;
@protocol ICEGRIDRegistryObserverPrx;

@class ICEGRIDNodeObserverPrx;
@protocol ICEGRIDNodeObserverPrx;

@class ICEGRIDApplicationObserverPrx;
@protocol ICEGRIDApplicationObserverPrx;

@class ICEGRIDAdapterObserverPrx;
@protocol ICEGRIDAdapterObserverPrx;

@class ICEGRIDObjectObserverPrx;
@protocol ICEGRIDObjectObserverPrx;

@class ICEGRIDAdminSessionPrx;
@protocol ICEGRIDAdminSessionPrx;

typedef enum : ICEInt
{
    ICEGRIDInactive,
    ICEGRIDActivating,
    ICEGRIDActivationTimedOut,
    ICEGRIDActive,
    ICEGRIDDeactivating,
    ICEGRIDDestroying,
    ICEGRIDDestroyed
} ICEGRIDServerState;

typedef NSDictionary ICEGRIDStringObjectProxyDict;
typedef NSMutableDictionary ICEGRIDMutableStringObjectProxyDict;

ICEGRID_API @interface ICEGRIDObjectInfo : NSObject <NSCopying>
{
    @private
        id<ICEObjectPrx> proxy;
        NSString *type;
}

@property(nonatomic, ICE_STRONG_ATTR) id<ICEObjectPrx> proxy;
@property(nonatomic, ICE_STRONG_ATTR) NSString *type;

-(id) init;
-(id) init:(id<ICEObjectPrx>)proxy type:(NSString*)type;
+(id) objectInfo;
+(id) objectInfo:(id<ICEObjectPrx>)proxy type:(NSString*)type;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDObjectInfoSeq;
typedef NSMutableArray ICEGRIDMutableObjectInfoSeq;

ICEGRID_API @interface ICEGRIDAdapterInfo : NSObject <NSCopying>
{
    @private
        NSString *id_;
        id<ICEObjectPrx> proxy;
        NSString *replicaGroupId;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, ICE_STRONG_ATTR) id<ICEObjectPrx> proxy;
@property(nonatomic, ICE_STRONG_ATTR) NSString *replicaGroupId;

-(id) init;
-(id) init:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy replicaGroupId:(NSString*)replicaGroupId;
+(id) adapterInfo;
+(id) adapterInfo:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy replicaGroupId:(NSString*)replicaGroupId;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDAdapterInfoSeq;
typedef NSMutableArray ICEGRIDMutableAdapterInfoSeq;

ICEGRID_API @interface ICEGRIDServerInfo : NSObject <NSCopying>
{
    @private
        NSString *application;
        NSString *uuid;
        ICEInt revision;
        NSString *node;
        ICEGRIDServerDescriptor *descriptor;
        NSString *sessionId;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *application;
@property(nonatomic, ICE_STRONG_ATTR) NSString *uuid;
@property(nonatomic, assign) ICEInt revision;
@property(nonatomic, ICE_STRONG_ATTR) NSString *node;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDServerDescriptor *descriptor;
@property(nonatomic, ICE_STRONG_ATTR) NSString *sessionId;

-(id) init;
-(id) init:(NSString*)application uuid:(NSString*)uuid revision:(ICEInt)revision node:(NSString*)node descriptor:(ICEGRIDServerDescriptor*)descriptor sessionId:(NSString*)sessionId;
+(id) serverInfo;
+(id) serverInfo:(NSString*)application uuid:(NSString*)uuid revision:(ICEInt)revision node:(NSString*)node descriptor:(ICEGRIDServerDescriptor*)descriptor sessionId:(NSString*)sessionId;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICEGRID_API @interface ICEGRIDNodeInfo : NSObject <NSCopying>
{
    @private
        NSString *name;
        NSString *os;
        NSString *hostname;
        NSString *release_;
        NSString *version;
        NSString *machine;
        ICEInt nProcessors;
        NSString *dataDir;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) NSString *os;
@property(nonatomic, ICE_STRONG_ATTR) NSString *hostname;
@property(nonatomic, ICE_STRONG_ATTR) NSString *release_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *version;
@property(nonatomic, ICE_STRONG_ATTR) NSString *machine;
@property(nonatomic, assign) ICEInt nProcessors;
@property(nonatomic, ICE_STRONG_ATTR) NSString *dataDir;

-(id) init;
-(id) init:(NSString*)name os:(NSString*)os hostname:(NSString*)hostname release:(NSString*)release version:(NSString*)version machine:(NSString*)machine nProcessors:(ICEInt)nProcessors dataDir:(NSString*)dataDir;
+(id) nodeInfo;
+(id) nodeInfo:(NSString*)name os:(NSString*)os hostname:(NSString*)hostname release:(NSString*)release version:(NSString*)version machine:(NSString*)machine nProcessors:(ICEInt)nProcessors dataDir:(NSString*)dataDir;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICEGRID_API @interface ICEGRIDRegistryInfo : NSObject <NSCopying>
{
    @private
        NSString *name;
        NSString *hostname;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) NSString *hostname;

-(id) init;
-(id) init:(NSString*)name hostname:(NSString*)hostname;
+(id) registryInfo;
+(id) registryInfo:(NSString*)name hostname:(NSString*)hostname;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDRegistryInfoSeq;
typedef NSMutableArray ICEGRIDMutableRegistryInfoSeq;

ICEGRID_API @interface ICEGRIDLoadInfo : NSObject <NSCopying>
{
    @private
        ICEFloat avg1;
        ICEFloat avg5;
        ICEFloat avg15;
}

@property(nonatomic, assign) ICEFloat avg1;
@property(nonatomic, assign) ICEFloat avg5;
@property(nonatomic, assign) ICEFloat avg15;

-(id) init:(ICEFloat)avg1 avg5:(ICEFloat)avg5 avg15:(ICEFloat)avg15;
+(id) loadInfo;
+(id) loadInfo:(ICEFloat)avg1 avg5:(ICEFloat)avg5 avg15:(ICEFloat)avg15;
// This class also overrides copyWithZone:
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICEGRID_API @interface ICEGRIDApplicationInfo : NSObject <NSCopying>
{
    @private
        NSString *uuid;
        ICELong createTime;
        NSString *createUser;
        ICELong updateTime;
        NSString *updateUser;
        ICEInt revision;
        ICEGRIDApplicationDescriptor *descriptor;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *uuid;
@property(nonatomic, assign) ICELong createTime;
@property(nonatomic, ICE_STRONG_ATTR) NSString *createUser;
@property(nonatomic, assign) ICELong updateTime;
@property(nonatomic, ICE_STRONG_ATTR) NSString *updateUser;
@property(nonatomic, assign) ICEInt revision;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDApplicationDescriptor *descriptor;

-(id) init;
-(id) init:(NSString*)uuid createTime:(ICELong)createTime createUser:(NSString*)createUser updateTime:(ICELong)updateTime updateUser:(NSString*)updateUser revision:(ICEInt)revision descriptor:(ICEGRIDApplicationDescriptor*)descriptor;
+(id) applicationInfo;
+(id) applicationInfo:(NSString*)uuid createTime:(ICELong)createTime createUser:(NSString*)createUser updateTime:(ICELong)updateTime updateUser:(NSString*)updateUser revision:(ICEInt)revision descriptor:(ICEGRIDApplicationDescriptor*)descriptor;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDApplicationInfoSeq;
typedef NSMutableArray ICEGRIDMutableApplicationInfoSeq;

ICEGRID_API @interface ICEGRIDApplicationUpdateInfo : NSObject <NSCopying>
{
    @private
        ICELong updateTime;
        NSString *updateUser;
        ICEInt revision;
        ICEGRIDApplicationUpdateDescriptor *descriptor;
}

@property(nonatomic, assign) ICELong updateTime;
@property(nonatomic, ICE_STRONG_ATTR) NSString *updateUser;
@property(nonatomic, assign) ICEInt revision;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDApplicationUpdateDescriptor *descriptor;

-(id) init;
-(id) init:(ICELong)updateTime updateUser:(NSString*)updateUser revision:(ICEInt)revision descriptor:(ICEGRIDApplicationUpdateDescriptor*)descriptor;
+(id) applicationUpdateInfo;
+(id) applicationUpdateInfo:(ICELong)updateTime updateUser:(NSString*)updateUser revision:(ICEInt)revision descriptor:(ICEGRIDApplicationUpdateDescriptor*)descriptor;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICEGRID_API @protocol ICEGRIDAdmin <NSObject>
-(void) addApplication:(ICEGRIDApplicationDescriptor*)descriptor current:(ICECurrent *)current;
-(void) syncApplication:(ICEGRIDApplicationDescriptor*)descriptor current:(ICECurrent *)current;
-(void) updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor current:(ICECurrent *)current;
-(void) syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor current:(ICECurrent *)current;
-(void) updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor current:(ICECurrent *)current;
-(void) removeApplication:(NSMutableString*)name current:(ICECurrent *)current;
-(void) instantiateServer:(NSMutableString*)application node:(NSMutableString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc current:(ICECurrent *)current;
-(void) patchApplication:(NSMutableString*)name shutdown:(BOOL)shutdown current:(ICECurrent *)current;
-(ICEGRIDApplicationInfo*) getApplicationInfo:(NSMutableString*)name current:(ICECurrent *)current;
-(ICEGRIDApplicationDescriptor*) getDefaultApplicationDescriptor:(ICECurrent *)current;
-(ICEStringSeq*) getAllApplicationNames:(ICECurrent *)current;
-(ICEGRIDServerInfo*) getServerInfo:(NSMutableString*)id_ current:(ICECurrent *)current;
-(ICEGRIDServerState) getServerState:(NSMutableString*)id_ current:(ICECurrent *)current;
-(ICEInt) getServerPid:(NSMutableString*)id_ current:(ICECurrent *)current;
-(NSString*) getServerAdminCategory:(ICECurrent *)current;
-(id<ICEObjectPrx>) getServerAdmin:(NSMutableString*)id_ current:(ICECurrent *)current;
-(void) enableServer:(NSMutableString*)id_ enabled:(BOOL)enabled current:(ICECurrent *)current;
-(BOOL) isServerEnabled:(NSMutableString*)id_ current:(ICECurrent *)current;
-(void) startServer:(NSMutableString*)id_ current:(ICECurrent *)current;
-(void) stopServer:(NSMutableString*)id_ current:(ICECurrent *)current;
-(void) patchServer:(NSMutableString*)id_ shutdown:(BOOL)shutdown current:(ICECurrent *)current;
-(void) sendSignal:(NSMutableString*)id_ signal:(NSMutableString*)signal current:(ICECurrent *)current;
-(ICEStringSeq*) getAllServerIds:(ICECurrent *)current;
-(ICEGRIDAdapterInfoSeq*) getAdapterInfo:(NSMutableString*)id_ current:(ICECurrent *)current;
-(void) removeAdapter:(NSMutableString*)id_ current:(ICECurrent *)current;
-(ICEStringSeq*) getAllAdapterIds:(ICECurrent *)current;
-(void) addObject:(id<ICEObjectPrx>)obj current:(ICECurrent *)current;
-(void) updateObject:(id<ICEObjectPrx>)obj current:(ICECurrent *)current;
-(void) addObjectWithType:(id<ICEObjectPrx>)obj type:(NSMutableString*)type current:(ICECurrent *)current;
-(void) removeObject:(ICEIdentity*)id_ current:(ICECurrent *)current;
-(ICEGRIDObjectInfo*) getObjectInfo:(ICEIdentity*)id_ current:(ICECurrent *)current;
-(ICEGRIDObjectInfoSeq*) getObjectInfosByType:(NSMutableString*)type current:(ICECurrent *)current;
-(ICEGRIDObjectInfoSeq*) getAllObjectInfos:(NSMutableString*)expr current:(ICECurrent *)current;
-(BOOL) pingNode:(NSMutableString*)name current:(ICECurrent *)current;
-(ICEGRIDLoadInfo*) getNodeLoad:(NSMutableString*)name current:(ICECurrent *)current;
-(ICEGRIDNodeInfo*) getNodeInfo:(NSMutableString*)name current:(ICECurrent *)current;
-(id<ICEObjectPrx>) getNodeAdmin:(NSMutableString*)name current:(ICECurrent *)current;
-(ICEInt) getNodeProcessorSocketCount:(NSMutableString*)name current:(ICECurrent *)current;
-(void) shutdownNode:(NSMutableString*)name current:(ICECurrent *)current;
-(NSString*) getNodeHostname:(NSMutableString*)name current:(ICECurrent *)current;
-(ICEStringSeq*) getAllNodeNames:(ICECurrent *)current;
-(BOOL) pingRegistry:(NSMutableString*)name current:(ICECurrent *)current;
-(ICEGRIDRegistryInfo*) getRegistryInfo:(NSMutableString*)name current:(ICECurrent *)current;
-(id<ICEObjectPrx>) getRegistryAdmin:(NSMutableString*)name current:(ICECurrent *)current;
-(void) shutdownRegistry:(NSMutableString*)name current:(ICECurrent *)current;
-(ICEStringSeq*) getAllRegistryNames:(ICECurrent *)current;
-(void) shutdown:(ICECurrent *)current;
-(ICESliceChecksumDict*) getSliceChecksums:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDAdmin : ICEServant
+(id) admin;
+(void) iceD_addApplication:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_syncApplication:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_updateApplication:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_syncApplicationWithoutRestart:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_updateApplicationWithoutRestart:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_removeApplication:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_instantiateServer:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_patchApplication:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getApplicationInfo:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getDefaultApplicationDescriptor:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAllApplicationNames:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getServerInfo:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getServerState:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getServerPid:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getServerAdminCategory:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getServerAdmin:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_enableServer:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_isServerEnabled:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_startServer:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_stopServer:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_patchServer:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_sendSignal:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAllServerIds:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAdapterInfo:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_removeAdapter:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAllAdapterIds:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_addObject:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_updateObject:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_addObjectWithType:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_removeObject:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getObjectInfo:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getObjectInfosByType:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAllObjectInfos:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_pingNode:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getNodeLoad:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getNodeInfo:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getNodeAdmin:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getNodeProcessorSocketCount:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_shutdownNode:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getNodeHostname:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAllNodeNames:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_pingRegistry:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getRegistryInfo:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getRegistryAdmin:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_shutdownRegistry:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAllRegistryNames:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_shutdown:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getSliceChecksums:(id<ICEGRIDAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDFileIterator <NSObject>
-(BOOL) read:(ICEInt)size lines:(ICEStringSeq**)lines current:(ICECurrent *)current;
-(void) destroy:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDFileIterator : ICEServant
+(id) fileIterator;
+(void) iceD_read:(id<ICEGRIDFileIterator>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_destroy:(id<ICEGRIDFileIterator>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @interface ICEGRIDServerDynamicInfo : NSObject <NSCopying>
{
    @private
        NSString *id_;
        ICEGRIDServerState state;
        ICEInt pid;
        BOOL enabled;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, assign) ICEGRIDServerState state;
@property(nonatomic, assign) ICEInt pid;
@property(nonatomic, assign) BOOL enabled;

-(id) init;
-(id) init:(NSString*)id_ state:(ICEGRIDServerState)state pid:(ICEInt)pid enabled:(BOOL)enabled;
+(id) serverDynamicInfo;
+(id) serverDynamicInfo:(NSString*)id_ state:(ICEGRIDServerState)state pid:(ICEInt)pid enabled:(BOOL)enabled;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDServerDynamicInfoSeq;
typedef NSMutableArray ICEGRIDMutableServerDynamicInfoSeq;

ICEGRID_API @interface ICEGRIDAdapterDynamicInfo : NSObject <NSCopying>
{
    @private
        NSString *id_;
        id<ICEObjectPrx> proxy;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, ICE_STRONG_ATTR) id<ICEObjectPrx> proxy;

-(id) init;
-(id) init:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy;
+(id) adapterDynamicInfo;
+(id) adapterDynamicInfo:(NSString*)id_ proxy:(id<ICEObjectPrx>)proxy;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDAdapterDynamicInfoSeq;
typedef NSMutableArray ICEGRIDMutableAdapterDynamicInfoSeq;

ICEGRID_API @interface ICEGRIDNodeDynamicInfo : NSObject <NSCopying>
{
    @private
        ICEGRIDNodeInfo *info;
        ICEGRIDServerDynamicInfoSeq *servers;
        ICEGRIDAdapterDynamicInfoSeq *adapters;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDNodeInfo *info;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDServerDynamicInfoSeq *servers;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDAdapterDynamicInfoSeq *adapters;

-(id) init;
-(id) init:(ICEGRIDNodeInfo*)info servers:(ICEGRIDServerDynamicInfoSeq*)servers adapters:(ICEGRIDAdapterDynamicInfoSeq*)adapters;
+(id) nodeDynamicInfo;
+(id) nodeDynamicInfo:(ICEGRIDNodeInfo*)info servers:(ICEGRIDServerDynamicInfoSeq*)servers adapters:(ICEGRIDAdapterDynamicInfoSeq*)adapters;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICEGRID_API @protocol ICEGRIDRegistryObserver <NSObject>
-(void) registryInit:(ICEGRIDMutableRegistryInfoSeq*)registries current:(ICECurrent *)current;
-(void) registryUp:(ICEGRIDRegistryInfo*)node current:(ICECurrent *)current;
-(void) registryDown:(NSMutableString*)name current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDRegistryObserver : ICEServant
+(id) registryObserver;
+(void) iceD_registryInit:(id<ICEGRIDRegistryObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_registryUp:(id<ICEGRIDRegistryObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_registryDown:(id<ICEGRIDRegistryObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

typedef NSArray ICEGRIDNodeDynamicInfoSeq;
typedef NSMutableArray ICEGRIDMutableNodeDynamicInfoSeq;

ICEGRID_API @protocol ICEGRIDNodeObserver <NSObject>
-(void) nodeInit:(ICEGRIDMutableNodeDynamicInfoSeq*)nodes current:(ICECurrent *)current;
-(void) nodeUp:(ICEGRIDNodeDynamicInfo*)node current:(ICECurrent *)current;
-(void) nodeDown:(NSMutableString*)name current:(ICECurrent *)current;
-(void) updateServer:(NSMutableString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo current:(ICECurrent *)current;
-(void) updateAdapter:(NSMutableString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDNodeObserver : ICEServant
+(id) nodeObserver;
+(void) iceD_nodeInit:(id<ICEGRIDNodeObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_nodeUp:(id<ICEGRIDNodeObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_nodeDown:(id<ICEGRIDNodeObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_updateServer:(id<ICEGRIDNodeObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_updateAdapter:(id<ICEGRIDNodeObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDApplicationObserver <NSObject>
-(void) applicationInit:(ICEInt)serial applications:(ICEGRIDMutableApplicationInfoSeq*)applications current:(ICECurrent *)current;
-(void) applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc current:(ICECurrent *)current;
-(void) applicationRemoved:(ICEInt)serial name:(NSMutableString*)name current:(ICECurrent *)current;
-(void) applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDApplicationObserver : ICEServant
+(id) applicationObserver;
+(void) iceD_applicationInit:(id<ICEGRIDApplicationObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_applicationAdded:(id<ICEGRIDApplicationObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_applicationRemoved:(id<ICEGRIDApplicationObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_applicationUpdated:(id<ICEGRIDApplicationObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDAdapterObserver <NSObject>
-(void) adapterInit:(ICEGRIDMutableAdapterInfoSeq*)adpts current:(ICECurrent *)current;
-(void) adapterAdded:(ICEGRIDAdapterInfo*)info current:(ICECurrent *)current;
-(void) adapterUpdated:(ICEGRIDAdapterInfo*)info current:(ICECurrent *)current;
-(void) adapterRemoved:(NSMutableString*)id_ current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDAdapterObserver : ICEServant
+(id) adapterObserver;
+(void) iceD_adapterInit:(id<ICEGRIDAdapterObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_adapterAdded:(id<ICEGRIDAdapterObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_adapterUpdated:(id<ICEGRIDAdapterObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_adapterRemoved:(id<ICEGRIDAdapterObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDObjectObserver <NSObject>
-(void) objectInit:(ICEGRIDMutableObjectInfoSeq*)objects current:(ICECurrent *)current;
-(void) objectAdded:(ICEGRIDObjectInfo*)info current:(ICECurrent *)current;
-(void) objectUpdated:(ICEGRIDObjectInfo*)info current:(ICECurrent *)current;
-(void) objectRemoved:(ICEIdentity*)id_ current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDObjectObserver : ICEServant
+(id) objectObserver;
+(void) iceD_objectInit:(id<ICEGRIDObjectObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_objectAdded:(id<ICEGRIDObjectObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_objectUpdated:(id<ICEGRIDObjectObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_objectRemoved:(id<ICEGRIDObjectObserver>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDAdminSession <GLACIER2Session>
-(void) keepAlive:(ICECurrent *)current;
-(id<ICEGRIDAdminPrx>) getAdmin:(ICECurrent *)current;
-(id<ICEObjectPrx>) getAdminCallbackTemplate:(ICECurrent *)current;
-(void) setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs current:(ICECurrent *)current;
-(void) setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs current:(ICECurrent *)current;
-(ICEInt) startUpdate:(ICECurrent *)current;
-(void) finishUpdate:(ICECurrent *)current;
-(NSString*) getReplicaName:(ICECurrent *)current;
-(id<ICEGRIDFileIteratorPrx>) openServerLog:(NSMutableString*)id_ path:(NSMutableString*)path count:(ICEInt)count current:(ICECurrent *)current;
-(id<ICEGRIDFileIteratorPrx>) openServerStdErr:(NSMutableString*)id_ count:(ICEInt)count current:(ICECurrent *)current;
-(id<ICEGRIDFileIteratorPrx>) openServerStdOut:(NSMutableString*)id_ count:(ICEInt)count current:(ICECurrent *)current;
-(id<ICEGRIDFileIteratorPrx>) openNodeStdErr:(NSMutableString*)name count:(ICEInt)count current:(ICECurrent *)current;
-(id<ICEGRIDFileIteratorPrx>) openNodeStdOut:(NSMutableString*)name count:(ICEInt)count current:(ICECurrent *)current;
-(id<ICEGRIDFileIteratorPrx>) openRegistryStdErr:(NSMutableString*)name count:(ICEInt)count current:(ICECurrent *)current;
-(id<ICEGRIDFileIteratorPrx>) openRegistryStdOut:(NSMutableString*)name count:(ICEInt)count current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDAdminSession : ICEServant
+(id) adminSession;
+(void) iceD_keepAlive:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAdmin:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getAdminCallbackTemplate:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_setObservers:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_setObserversByIdentity:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_startUpdate:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_finishUpdate:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getReplicaName:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_openServerLog:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_openServerStdErr:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_openServerStdOut:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_openNodeStdErr:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_openNodeStdOut:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_openRegistryStdErr:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_openRegistryStdOut:(id<ICEGRIDAdminSession>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDAdminPrx <ICEObjectPrx>
-(void) addApplication:(ICEGRIDApplicationDescriptor*)descriptor;
-(void) addApplication:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_addApplication:(ICEGRIDApplicationDescriptor*)descriptor;
-(id<ICEAsyncResult>) begin_addApplication:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context;
-(void) end_addApplication:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_addApplication:(ICEGRIDApplicationDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_addApplication:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_addApplication:(ICEGRIDApplicationDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_addApplication:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) syncApplication:(ICEGRIDApplicationDescriptor*)descriptor;
-(void) syncApplication:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_syncApplication:(ICEGRIDApplicationDescriptor*)descriptor;
-(id<ICEAsyncResult>) begin_syncApplication:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context;
-(void) end_syncApplication:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_syncApplication:(ICEGRIDApplicationDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_syncApplication:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_syncApplication:(ICEGRIDApplicationDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_syncApplication:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor;
-(void) updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor;
-(id<ICEAsyncResult>) begin_updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor context:(ICEContext *)context;
-(void) end_updateApplication:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_updateApplication:(ICEGRIDApplicationUpdateDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor;
-(void) syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor;
-(id<ICEAsyncResult>) begin_syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context;
-(void) end_syncApplicationWithoutRestart:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_syncApplicationWithoutRestart:(ICEGRIDApplicationDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor;
-(void) updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor;
-(id<ICEAsyncResult>) begin_updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor context:(ICEContext *)context;
-(void) end_updateApplicationWithoutRestart:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_updateApplicationWithoutRestart:(ICEGRIDApplicationUpdateDescriptor*)descriptor context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) removeApplication:(NSString*)name;
-(void) removeApplication:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_removeApplication:(NSString*)name;
-(id<ICEAsyncResult>) begin_removeApplication:(NSString*)name context:(ICEContext *)context;
-(void) end_removeApplication:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_removeApplication:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_removeApplication:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_removeApplication:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_removeApplication:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) instantiateServer:(NSString*)application node:(NSString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc;
-(void) instantiateServer:(NSString*)application node:(NSString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_instantiateServer:(NSString*)application node:(NSString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc;
-(id<ICEAsyncResult>) begin_instantiateServer:(NSString*)application node:(NSString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc context:(ICEContext *)context;
-(void) end_instantiateServer:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_instantiateServer:(NSString*)application node:(NSString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_instantiateServer:(NSString*)application node:(NSString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_instantiateServer:(NSString*)application node:(NSString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_instantiateServer:(NSString*)application node:(NSString*)node desc:(ICEGRIDServerInstanceDescriptor*)desc context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) patchApplication:(NSString*)name shutdown:(BOOL)shutdown;
-(void) patchApplication:(NSString*)name shutdown:(BOOL)shutdown context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_patchApplication:(NSString*)name shutdown:(BOOL)shutdown;
-(id<ICEAsyncResult>) begin_patchApplication:(NSString*)name shutdown:(BOOL)shutdown context:(ICEContext *)context;
-(void) end_patchApplication:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_patchApplication:(NSString*)name shutdown:(BOOL)shutdown response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_patchApplication:(NSString*)name shutdown:(BOOL)shutdown context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_patchApplication:(NSString*)name shutdown:(BOOL)shutdown response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_patchApplication:(NSString*)name shutdown:(BOOL)shutdown context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDApplicationInfo*) getApplicationInfo:(NSString*)name;
-(ICEGRIDApplicationInfo*) getApplicationInfo:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getApplicationInfo:(NSString*)name;
-(id<ICEAsyncResult>) begin_getApplicationInfo:(NSString*)name context:(ICEContext *)context;
-(ICEGRIDApplicationInfo*) end_getApplicationInfo:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getApplicationInfo:(NSString*)name response:(void(^)(ICEGRIDApplicationInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getApplicationInfo:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEGRIDApplicationInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getApplicationInfo:(NSString*)name response:(void(^)(ICEGRIDApplicationInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getApplicationInfo:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEGRIDApplicationInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDApplicationDescriptor*) getDefaultApplicationDescriptor;
-(ICEGRIDApplicationDescriptor*) getDefaultApplicationDescriptor:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getDefaultApplicationDescriptor;
-(id<ICEAsyncResult>) begin_getDefaultApplicationDescriptor:(ICEContext *)context;
-(ICEGRIDApplicationDescriptor*) end_getDefaultApplicationDescriptor:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getDefaultApplicationDescriptor:(void(^)(ICEGRIDApplicationDescriptor*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getDefaultApplicationDescriptor:(ICEContext *)context response:(void(^)(ICEGRIDApplicationDescriptor*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getDefaultApplicationDescriptor:(void(^)(ICEGRIDApplicationDescriptor*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getDefaultApplicationDescriptor:(ICEContext *)context response:(void(^)(ICEGRIDApplicationDescriptor*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableStringSeq*) getAllApplicationNames;
-(ICEMutableStringSeq*) getAllApplicationNames:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAllApplicationNames;
-(id<ICEAsyncResult>) begin_getAllApplicationNames:(ICEContext *)context;
-(ICEMutableStringSeq*) end_getAllApplicationNames:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAllApplicationNames:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllApplicationNames:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllApplicationNames:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAllApplicationNames:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDServerInfo*) getServerInfo:(NSString*)id_;
-(ICEGRIDServerInfo*) getServerInfo:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getServerInfo:(NSString*)id_;
-(id<ICEAsyncResult>) begin_getServerInfo:(NSString*)id_ context:(ICEContext *)context;
-(ICEGRIDServerInfo*) end_getServerInfo:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getServerInfo:(NSString*)id_ response:(void(^)(ICEGRIDServerInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerInfo:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEGRIDServerInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerInfo:(NSString*)id_ response:(void(^)(ICEGRIDServerInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getServerInfo:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEGRIDServerInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDServerState) getServerState:(NSString*)id_;
-(ICEGRIDServerState) getServerState:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getServerState:(NSString*)id_;
-(id<ICEAsyncResult>) begin_getServerState:(NSString*)id_ context:(ICEContext *)context;
-(ICEGRIDServerState) end_getServerState:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getServerState:(NSString*)id_ response:(void(^)(ICEGRIDServerState))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerState:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEGRIDServerState))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerState:(NSString*)id_ response:(void(^)(ICEGRIDServerState))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getServerState:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEGRIDServerState))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEInt) getServerPid:(NSString*)id_;
-(ICEInt) getServerPid:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getServerPid:(NSString*)id_;
-(id<ICEAsyncResult>) begin_getServerPid:(NSString*)id_ context:(ICEContext *)context;
-(ICEInt) end_getServerPid:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getServerPid:(NSString*)id_ response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerPid:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerPid:(NSString*)id_ response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getServerPid:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(NSMutableString*) getServerAdminCategory;
-(NSMutableString*) getServerAdminCategory:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getServerAdminCategory;
-(id<ICEAsyncResult>) begin_getServerAdminCategory:(ICEContext *)context;
-(NSMutableString*) end_getServerAdminCategory:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getServerAdminCategory:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerAdminCategory:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerAdminCategory:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getServerAdminCategory:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) getServerAdmin:(NSString*)id_;
-(id<ICEObjectPrx>) getServerAdmin:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getServerAdmin:(NSString*)id_;
-(id<ICEAsyncResult>) begin_getServerAdmin:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_getServerAdmin:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getServerAdmin:(NSString*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerAdmin:(NSString*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getServerAdmin:(NSString*)id_ response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getServerAdmin:(NSString*)id_ context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) enableServer:(NSString*)id_ enabled:(BOOL)enabled;
-(void) enableServer:(NSString*)id_ enabled:(BOOL)enabled context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_enableServer:(NSString*)id_ enabled:(BOOL)enabled;
-(id<ICEAsyncResult>) begin_enableServer:(NSString*)id_ enabled:(BOOL)enabled context:(ICEContext *)context;
-(void) end_enableServer:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_enableServer:(NSString*)id_ enabled:(BOOL)enabled response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_enableServer:(NSString*)id_ enabled:(BOOL)enabled context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_enableServer:(NSString*)id_ enabled:(BOOL)enabled response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_enableServer:(NSString*)id_ enabled:(BOOL)enabled context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(BOOL) isServerEnabled:(NSString*)id_;
-(BOOL) isServerEnabled:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_isServerEnabled:(NSString*)id_;
-(id<ICEAsyncResult>) begin_isServerEnabled:(NSString*)id_ context:(ICEContext *)context;
-(BOOL) end_isServerEnabled:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_isServerEnabled:(NSString*)id_ response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_isServerEnabled:(NSString*)id_ context:(ICEContext *)context response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_isServerEnabled:(NSString*)id_ response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_isServerEnabled:(NSString*)id_ context:(ICEContext *)context response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) startServer:(NSString*)id_;
-(void) startServer:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_startServer:(NSString*)id_;
-(id<ICEAsyncResult>) begin_startServer:(NSString*)id_ context:(ICEContext *)context;
-(void) end_startServer:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_startServer:(NSString*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_startServer:(NSString*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_startServer:(NSString*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_startServer:(NSString*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) stopServer:(NSString*)id_;
-(void) stopServer:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_stopServer:(NSString*)id_;
-(id<ICEAsyncResult>) begin_stopServer:(NSString*)id_ context:(ICEContext *)context;
-(void) end_stopServer:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_stopServer:(NSString*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_stopServer:(NSString*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_stopServer:(NSString*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_stopServer:(NSString*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) patchServer:(NSString*)id_ shutdown:(BOOL)shutdown;
-(void) patchServer:(NSString*)id_ shutdown:(BOOL)shutdown context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_patchServer:(NSString*)id_ shutdown:(BOOL)shutdown;
-(id<ICEAsyncResult>) begin_patchServer:(NSString*)id_ shutdown:(BOOL)shutdown context:(ICEContext *)context;
-(void) end_patchServer:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_patchServer:(NSString*)id_ shutdown:(BOOL)shutdown response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_patchServer:(NSString*)id_ shutdown:(BOOL)shutdown context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_patchServer:(NSString*)id_ shutdown:(BOOL)shutdown response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_patchServer:(NSString*)id_ shutdown:(BOOL)shutdown context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) sendSignal:(NSString*)id_ signal:(NSString*)signal;
-(void) sendSignal:(NSString*)id_ signal:(NSString*)signal context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_sendSignal:(NSString*)id_ signal:(NSString*)signal;
-(id<ICEAsyncResult>) begin_sendSignal:(NSString*)id_ signal:(NSString*)signal context:(ICEContext *)context;
-(void) end_sendSignal:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_sendSignal:(NSString*)id_ signal:(NSString*)signal response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_sendSignal:(NSString*)id_ signal:(NSString*)signal context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_sendSignal:(NSString*)id_ signal:(NSString*)signal response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_sendSignal:(NSString*)id_ signal:(NSString*)signal context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableStringSeq*) getAllServerIds;
-(ICEMutableStringSeq*) getAllServerIds:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAllServerIds;
-(id<ICEAsyncResult>) begin_getAllServerIds:(ICEContext *)context;
-(ICEMutableStringSeq*) end_getAllServerIds:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAllServerIds:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllServerIds:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllServerIds:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAllServerIds:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDMutableAdapterInfoSeq*) getAdapterInfo:(NSString*)id_;
-(ICEGRIDMutableAdapterInfoSeq*) getAdapterInfo:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAdapterInfo:(NSString*)id_;
-(id<ICEAsyncResult>) begin_getAdapterInfo:(NSString*)id_ context:(ICEContext *)context;
-(ICEGRIDMutableAdapterInfoSeq*) end_getAdapterInfo:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAdapterInfo:(NSString*)id_ response:(void(^)(ICEGRIDMutableAdapterInfoSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAdapterInfo:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEGRIDMutableAdapterInfoSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAdapterInfo:(NSString*)id_ response:(void(^)(ICEGRIDMutableAdapterInfoSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAdapterInfo:(NSString*)id_ context:(ICEContext *)context response:(void(^)(ICEGRIDMutableAdapterInfoSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) removeAdapter:(NSString*)id_;
-(void) removeAdapter:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_removeAdapter:(NSString*)id_;
-(id<ICEAsyncResult>) begin_removeAdapter:(NSString*)id_ context:(ICEContext *)context;
-(void) end_removeAdapter:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_removeAdapter:(NSString*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_removeAdapter:(NSString*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_removeAdapter:(NSString*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_removeAdapter:(NSString*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableStringSeq*) getAllAdapterIds;
-(ICEMutableStringSeq*) getAllAdapterIds:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAllAdapterIds;
-(id<ICEAsyncResult>) begin_getAllAdapterIds:(ICEContext *)context;
-(ICEMutableStringSeq*) end_getAllAdapterIds:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAllAdapterIds:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllAdapterIds:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllAdapterIds:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAllAdapterIds:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) addObject:(id<ICEObjectPrx>)obj;
-(void) addObject:(id<ICEObjectPrx>)obj context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_addObject:(id<ICEObjectPrx>)obj;
-(id<ICEAsyncResult>) begin_addObject:(id<ICEObjectPrx>)obj context:(ICEContext *)context;
-(void) end_addObject:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_addObject:(id<ICEObjectPrx>)obj response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_addObject:(id<ICEObjectPrx>)obj context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_addObject:(id<ICEObjectPrx>)obj response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_addObject:(id<ICEObjectPrx>)obj context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) updateObject:(id<ICEObjectPrx>)obj;
-(void) updateObject:(id<ICEObjectPrx>)obj context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_updateObject:(id<ICEObjectPrx>)obj;
-(id<ICEAsyncResult>) begin_updateObject:(id<ICEObjectPrx>)obj context:(ICEContext *)context;
-(void) end_updateObject:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_updateObject:(id<ICEObjectPrx>)obj response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateObject:(id<ICEObjectPrx>)obj context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateObject:(id<ICEObjectPrx>)obj response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_updateObject:(id<ICEObjectPrx>)obj context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) addObjectWithType:(id<ICEObjectPrx>)obj type:(NSString*)type;
-(void) addObjectWithType:(id<ICEObjectPrx>)obj type:(NSString*)type context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_addObjectWithType:(id<ICEObjectPrx>)obj type:(NSString*)type;
-(id<ICEAsyncResult>) begin_addObjectWithType:(id<ICEObjectPrx>)obj type:(NSString*)type context:(ICEContext *)context;
-(void) end_addObjectWithType:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_addObjectWithType:(id<ICEObjectPrx>)obj type:(NSString*)type response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_addObjectWithType:(id<ICEObjectPrx>)obj type:(NSString*)type context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_addObjectWithType:(id<ICEObjectPrx>)obj type:(NSString*)type response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_addObjectWithType:(id<ICEObjectPrx>)obj type:(NSString*)type context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) removeObject:(ICEIdentity*)id_;
-(void) removeObject:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_removeObject:(ICEIdentity*)id_;
-(id<ICEAsyncResult>) begin_removeObject:(ICEIdentity*)id_ context:(ICEContext *)context;
-(void) end_removeObject:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_removeObject:(ICEIdentity*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_removeObject:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_removeObject:(ICEIdentity*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_removeObject:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDObjectInfo*) getObjectInfo:(ICEIdentity*)id_;
-(ICEGRIDObjectInfo*) getObjectInfo:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getObjectInfo:(ICEIdentity*)id_;
-(id<ICEAsyncResult>) begin_getObjectInfo:(ICEIdentity*)id_ context:(ICEContext *)context;
-(ICEGRIDObjectInfo*) end_getObjectInfo:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getObjectInfo:(ICEIdentity*)id_ response:(void(^)(ICEGRIDObjectInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getObjectInfo:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(ICEGRIDObjectInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getObjectInfo:(ICEIdentity*)id_ response:(void(^)(ICEGRIDObjectInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getObjectInfo:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(ICEGRIDObjectInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDMutableObjectInfoSeq*) getObjectInfosByType:(NSString*)type;
-(ICEGRIDMutableObjectInfoSeq*) getObjectInfosByType:(NSString*)type context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getObjectInfosByType:(NSString*)type;
-(id<ICEAsyncResult>) begin_getObjectInfosByType:(NSString*)type context:(ICEContext *)context;
-(ICEGRIDMutableObjectInfoSeq*) end_getObjectInfosByType:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getObjectInfosByType:(NSString*)type response:(void(^)(ICEGRIDMutableObjectInfoSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getObjectInfosByType:(NSString*)type context:(ICEContext *)context response:(void(^)(ICEGRIDMutableObjectInfoSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getObjectInfosByType:(NSString*)type response:(void(^)(ICEGRIDMutableObjectInfoSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getObjectInfosByType:(NSString*)type context:(ICEContext *)context response:(void(^)(ICEGRIDMutableObjectInfoSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDMutableObjectInfoSeq*) getAllObjectInfos:(NSString*)expr;
-(ICEGRIDMutableObjectInfoSeq*) getAllObjectInfos:(NSString*)expr context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAllObjectInfos:(NSString*)expr;
-(id<ICEAsyncResult>) begin_getAllObjectInfos:(NSString*)expr context:(ICEContext *)context;
-(ICEGRIDMutableObjectInfoSeq*) end_getAllObjectInfos:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAllObjectInfos:(NSString*)expr response:(void(^)(ICEGRIDMutableObjectInfoSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllObjectInfos:(NSString*)expr context:(ICEContext *)context response:(void(^)(ICEGRIDMutableObjectInfoSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllObjectInfos:(NSString*)expr response:(void(^)(ICEGRIDMutableObjectInfoSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAllObjectInfos:(NSString*)expr context:(ICEContext *)context response:(void(^)(ICEGRIDMutableObjectInfoSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(BOOL) pingNode:(NSString*)name;
-(BOOL) pingNode:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_pingNode:(NSString*)name;
-(id<ICEAsyncResult>) begin_pingNode:(NSString*)name context:(ICEContext *)context;
-(BOOL) end_pingNode:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_pingNode:(NSString*)name response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_pingNode:(NSString*)name context:(ICEContext *)context response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_pingNode:(NSString*)name response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_pingNode:(NSString*)name context:(ICEContext *)context response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDLoadInfo*) getNodeLoad:(NSString*)name;
-(ICEGRIDLoadInfo*) getNodeLoad:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getNodeLoad:(NSString*)name;
-(id<ICEAsyncResult>) begin_getNodeLoad:(NSString*)name context:(ICEContext *)context;
-(ICEGRIDLoadInfo*) end_getNodeLoad:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getNodeLoad:(NSString*)name response:(void(^)(ICEGRIDLoadInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeLoad:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEGRIDLoadInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeLoad:(NSString*)name response:(void(^)(ICEGRIDLoadInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getNodeLoad:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEGRIDLoadInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDNodeInfo*) getNodeInfo:(NSString*)name;
-(ICEGRIDNodeInfo*) getNodeInfo:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getNodeInfo:(NSString*)name;
-(id<ICEAsyncResult>) begin_getNodeInfo:(NSString*)name context:(ICEContext *)context;
-(ICEGRIDNodeInfo*) end_getNodeInfo:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getNodeInfo:(NSString*)name response:(void(^)(ICEGRIDNodeInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeInfo:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEGRIDNodeInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeInfo:(NSString*)name response:(void(^)(ICEGRIDNodeInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getNodeInfo:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEGRIDNodeInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) getNodeAdmin:(NSString*)name;
-(id<ICEObjectPrx>) getNodeAdmin:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getNodeAdmin:(NSString*)name;
-(id<ICEAsyncResult>) begin_getNodeAdmin:(NSString*)name context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_getNodeAdmin:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getNodeAdmin:(NSString*)name response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeAdmin:(NSString*)name context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeAdmin:(NSString*)name response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getNodeAdmin:(NSString*)name context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEInt) getNodeProcessorSocketCount:(NSString*)name;
-(ICEInt) getNodeProcessorSocketCount:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getNodeProcessorSocketCount:(NSString*)name;
-(id<ICEAsyncResult>) begin_getNodeProcessorSocketCount:(NSString*)name context:(ICEContext *)context;
-(ICEInt) end_getNodeProcessorSocketCount:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getNodeProcessorSocketCount:(NSString*)name response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeProcessorSocketCount:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeProcessorSocketCount:(NSString*)name response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getNodeProcessorSocketCount:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) shutdownNode:(NSString*)name;
-(void) shutdownNode:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_shutdownNode:(NSString*)name;
-(id<ICEAsyncResult>) begin_shutdownNode:(NSString*)name context:(ICEContext *)context;
-(void) end_shutdownNode:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_shutdownNode:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_shutdownNode:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_shutdownNode:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_shutdownNode:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(NSMutableString*) getNodeHostname:(NSString*)name;
-(NSMutableString*) getNodeHostname:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getNodeHostname:(NSString*)name;
-(id<ICEAsyncResult>) begin_getNodeHostname:(NSString*)name context:(ICEContext *)context;
-(NSMutableString*) end_getNodeHostname:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getNodeHostname:(NSString*)name response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeHostname:(NSString*)name context:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNodeHostname:(NSString*)name response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getNodeHostname:(NSString*)name context:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableStringSeq*) getAllNodeNames;
-(ICEMutableStringSeq*) getAllNodeNames:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAllNodeNames;
-(id<ICEAsyncResult>) begin_getAllNodeNames:(ICEContext *)context;
-(ICEMutableStringSeq*) end_getAllNodeNames:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAllNodeNames:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllNodeNames:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllNodeNames:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAllNodeNames:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(BOOL) pingRegistry:(NSString*)name;
-(BOOL) pingRegistry:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_pingRegistry:(NSString*)name;
-(id<ICEAsyncResult>) begin_pingRegistry:(NSString*)name context:(ICEContext *)context;
-(BOOL) end_pingRegistry:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_pingRegistry:(NSString*)name response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_pingRegistry:(NSString*)name context:(ICEContext *)context response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_pingRegistry:(NSString*)name response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_pingRegistry:(NSString*)name context:(ICEContext *)context response:(void(^)(BOOL))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEGRIDRegistryInfo*) getRegistryInfo:(NSString*)name;
-(ICEGRIDRegistryInfo*) getRegistryInfo:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getRegistryInfo:(NSString*)name;
-(id<ICEAsyncResult>) begin_getRegistryInfo:(NSString*)name context:(ICEContext *)context;
-(ICEGRIDRegistryInfo*) end_getRegistryInfo:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getRegistryInfo:(NSString*)name response:(void(^)(ICEGRIDRegistryInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getRegistryInfo:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEGRIDRegistryInfo*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getRegistryInfo:(NSString*)name response:(void(^)(ICEGRIDRegistryInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getRegistryInfo:(NSString*)name context:(ICEContext *)context response:(void(^)(ICEGRIDRegistryInfo*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) getRegistryAdmin:(NSString*)name;
-(id<ICEObjectPrx>) getRegistryAdmin:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getRegistryAdmin:(NSString*)name;
-(id<ICEAsyncResult>) begin_getRegistryAdmin:(NSString*)name context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_getRegistryAdmin:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getRegistryAdmin:(NSString*)name response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getRegistryAdmin:(NSString*)name context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getRegistryAdmin:(NSString*)name response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getRegistryAdmin:(NSString*)name context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) shutdownRegistry:(NSString*)name;
-(void) shutdownRegistry:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_shutdownRegistry:(NSString*)name;
-(id<ICEAsyncResult>) begin_shutdownRegistry:(NSString*)name context:(ICEContext *)context;
-(void) end_shutdownRegistry:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_shutdownRegistry:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_shutdownRegistry:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_shutdownRegistry:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_shutdownRegistry:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableStringSeq*) getAllRegistryNames;
-(ICEMutableStringSeq*) getAllRegistryNames:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAllRegistryNames;
-(id<ICEAsyncResult>) begin_getAllRegistryNames:(ICEContext *)context;
-(ICEMutableStringSeq*) end_getAllRegistryNames:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAllRegistryNames:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllRegistryNames:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAllRegistryNames:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAllRegistryNames:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) shutdown;
-(void) shutdown:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_shutdown;
-(id<ICEAsyncResult>) begin_shutdown:(ICEContext *)context;
-(void) end_shutdown:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_shutdown:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_shutdown:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_shutdown:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_shutdown:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableSliceChecksumDict*) getSliceChecksums;
-(ICEMutableSliceChecksumDict*) getSliceChecksums:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getSliceChecksums;
-(id<ICEAsyncResult>) begin_getSliceChecksums:(ICEContext *)context;
-(ICEMutableSliceChecksumDict*) end_getSliceChecksums:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getSliceChecksums:(void(^)(ICEMutableSliceChecksumDict*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSliceChecksums:(ICEContext *)context response:(void(^)(ICEMutableSliceChecksumDict*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSliceChecksums:(void(^)(ICEMutableSliceChecksumDict*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getSliceChecksums:(ICEContext *)context response:(void(^)(ICEMutableSliceChecksumDict*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @protocol ICEGRIDFileIteratorPrx <ICEObjectPrx>
-(BOOL) read:(ICEInt)size lines:(ICEMutableStringSeq* ICE_AUTORELEASING_QUALIFIER*)lines;
-(BOOL) read:(ICEInt)size lines:(ICEMutableStringSeq* ICE_AUTORELEASING_QUALIFIER*)lines context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_read:(ICEInt)size;
-(id<ICEAsyncResult>) begin_read:(ICEInt)size context:(ICEContext *)context;
-(BOOL) end_read:(ICEMutableStringSeq* ICE_AUTORELEASING_QUALIFIER*)lines result:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_read:(ICEInt)size response:(void(^)(BOOL, ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_read:(ICEInt)size context:(ICEContext *)context response:(void(^)(BOOL, ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_read:(ICEInt)size response:(void(^)(BOOL, ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_read:(ICEInt)size context:(ICEContext *)context response:(void(^)(BOOL, ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) destroy;
-(void) destroy:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_destroy;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context;
-(void) end_destroy:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_destroy:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_destroy:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @protocol ICEGRIDRegistryObserverPrx <ICEObjectPrx>
-(void) registryInit:(ICEGRIDRegistryInfoSeq*)registries;
-(void) registryInit:(ICEGRIDRegistryInfoSeq*)registries context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_registryInit:(ICEGRIDRegistryInfoSeq*)registries;
-(id<ICEAsyncResult>) begin_registryInit:(ICEGRIDRegistryInfoSeq*)registries context:(ICEContext *)context;
-(void) end_registryInit:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_registryInit:(ICEGRIDRegistryInfoSeq*)registries response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_registryInit:(ICEGRIDRegistryInfoSeq*)registries context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_registryInit:(ICEGRIDRegistryInfoSeq*)registries response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_registryInit:(ICEGRIDRegistryInfoSeq*)registries context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) registryUp:(ICEGRIDRegistryInfo*)node;
-(void) registryUp:(ICEGRIDRegistryInfo*)node context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_registryUp:(ICEGRIDRegistryInfo*)node;
-(id<ICEAsyncResult>) begin_registryUp:(ICEGRIDRegistryInfo*)node context:(ICEContext *)context;
-(void) end_registryUp:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_registryUp:(ICEGRIDRegistryInfo*)node response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_registryUp:(ICEGRIDRegistryInfo*)node context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_registryUp:(ICEGRIDRegistryInfo*)node response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_registryUp:(ICEGRIDRegistryInfo*)node context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) registryDown:(NSString*)name;
-(void) registryDown:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_registryDown:(NSString*)name;
-(id<ICEAsyncResult>) begin_registryDown:(NSString*)name context:(ICEContext *)context;
-(void) end_registryDown:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_registryDown:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_registryDown:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_registryDown:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_registryDown:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @protocol ICEGRIDNodeObserverPrx <ICEObjectPrx>
-(void) nodeInit:(ICEGRIDNodeDynamicInfoSeq*)nodes;
-(void) nodeInit:(ICEGRIDNodeDynamicInfoSeq*)nodes context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_nodeInit:(ICEGRIDNodeDynamicInfoSeq*)nodes;
-(id<ICEAsyncResult>) begin_nodeInit:(ICEGRIDNodeDynamicInfoSeq*)nodes context:(ICEContext *)context;
-(void) end_nodeInit:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_nodeInit:(ICEGRIDNodeDynamicInfoSeq*)nodes response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_nodeInit:(ICEGRIDNodeDynamicInfoSeq*)nodes context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_nodeInit:(ICEGRIDNodeDynamicInfoSeq*)nodes response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_nodeInit:(ICEGRIDNodeDynamicInfoSeq*)nodes context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) nodeUp:(ICEGRIDNodeDynamicInfo*)node;
-(void) nodeUp:(ICEGRIDNodeDynamicInfo*)node context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_nodeUp:(ICEGRIDNodeDynamicInfo*)node;
-(id<ICEAsyncResult>) begin_nodeUp:(ICEGRIDNodeDynamicInfo*)node context:(ICEContext *)context;
-(void) end_nodeUp:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_nodeUp:(ICEGRIDNodeDynamicInfo*)node response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_nodeUp:(ICEGRIDNodeDynamicInfo*)node context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_nodeUp:(ICEGRIDNodeDynamicInfo*)node response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_nodeUp:(ICEGRIDNodeDynamicInfo*)node context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) nodeDown:(NSString*)name;
-(void) nodeDown:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_nodeDown:(NSString*)name;
-(id<ICEAsyncResult>) begin_nodeDown:(NSString*)name context:(ICEContext *)context;
-(void) end_nodeDown:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_nodeDown:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_nodeDown:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_nodeDown:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_nodeDown:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) updateServer:(NSString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo;
-(void) updateServer:(NSString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_updateServer:(NSString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo;
-(id<ICEAsyncResult>) begin_updateServer:(NSString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo context:(ICEContext *)context;
-(void) end_updateServer:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_updateServer:(NSString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateServer:(NSString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateServer:(NSString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_updateServer:(NSString*)node updatedInfo:(ICEGRIDServerDynamicInfo*)updatedInfo context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) updateAdapter:(NSString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo;
-(void) updateAdapter:(NSString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_updateAdapter:(NSString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo;
-(id<ICEAsyncResult>) begin_updateAdapter:(NSString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo context:(ICEContext *)context;
-(void) end_updateAdapter:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_updateAdapter:(NSString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateAdapter:(NSString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_updateAdapter:(NSString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_updateAdapter:(NSString*)node updatedInfo:(ICEGRIDAdapterDynamicInfo*)updatedInfo context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @protocol ICEGRIDApplicationObserverPrx <ICEObjectPrx>
-(void) applicationInit:(ICEInt)serial applications:(ICEGRIDApplicationInfoSeq*)applications;
-(void) applicationInit:(ICEInt)serial applications:(ICEGRIDApplicationInfoSeq*)applications context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_applicationInit:(ICEInt)serial applications:(ICEGRIDApplicationInfoSeq*)applications;
-(id<ICEAsyncResult>) begin_applicationInit:(ICEInt)serial applications:(ICEGRIDApplicationInfoSeq*)applications context:(ICEContext *)context;
-(void) end_applicationInit:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_applicationInit:(ICEInt)serial applications:(ICEGRIDApplicationInfoSeq*)applications response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_applicationInit:(ICEInt)serial applications:(ICEGRIDApplicationInfoSeq*)applications context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_applicationInit:(ICEInt)serial applications:(ICEGRIDApplicationInfoSeq*)applications response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_applicationInit:(ICEInt)serial applications:(ICEGRIDApplicationInfoSeq*)applications context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc;
-(void) applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc;
-(id<ICEAsyncResult>) begin_applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc context:(ICEContext *)context;
-(void) end_applicationAdded:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_applicationAdded:(ICEInt)serial desc:(ICEGRIDApplicationInfo*)desc context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) applicationRemoved:(ICEInt)serial name:(NSString*)name;
-(void) applicationRemoved:(ICEInt)serial name:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_applicationRemoved:(ICEInt)serial name:(NSString*)name;
-(id<ICEAsyncResult>) begin_applicationRemoved:(ICEInt)serial name:(NSString*)name context:(ICEContext *)context;
-(void) end_applicationRemoved:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_applicationRemoved:(ICEInt)serial name:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_applicationRemoved:(ICEInt)serial name:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_applicationRemoved:(ICEInt)serial name:(NSString*)name response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_applicationRemoved:(ICEInt)serial name:(NSString*)name context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc;
-(void) applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc;
-(id<ICEAsyncResult>) begin_applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc context:(ICEContext *)context;
-(void) end_applicationUpdated:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_applicationUpdated:(ICEInt)serial desc:(ICEGRIDApplicationUpdateInfo*)desc context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @protocol ICEGRIDAdapterObserverPrx <ICEObjectPrx>
-(void) adapterInit:(ICEGRIDAdapterInfoSeq*)adpts;
-(void) adapterInit:(ICEGRIDAdapterInfoSeq*)adpts context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_adapterInit:(ICEGRIDAdapterInfoSeq*)adpts;
-(id<ICEAsyncResult>) begin_adapterInit:(ICEGRIDAdapterInfoSeq*)adpts context:(ICEContext *)context;
-(void) end_adapterInit:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_adapterInit:(ICEGRIDAdapterInfoSeq*)adpts response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterInit:(ICEGRIDAdapterInfoSeq*)adpts context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterInit:(ICEGRIDAdapterInfoSeq*)adpts response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_adapterInit:(ICEGRIDAdapterInfoSeq*)adpts context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) adapterAdded:(ICEGRIDAdapterInfo*)info;
-(void) adapterAdded:(ICEGRIDAdapterInfo*)info context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_adapterAdded:(ICEGRIDAdapterInfo*)info;
-(id<ICEAsyncResult>) begin_adapterAdded:(ICEGRIDAdapterInfo*)info context:(ICEContext *)context;
-(void) end_adapterAdded:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_adapterAdded:(ICEGRIDAdapterInfo*)info response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterAdded:(ICEGRIDAdapterInfo*)info context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterAdded:(ICEGRIDAdapterInfo*)info response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_adapterAdded:(ICEGRIDAdapterInfo*)info context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) adapterUpdated:(ICEGRIDAdapterInfo*)info;
-(void) adapterUpdated:(ICEGRIDAdapterInfo*)info context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_adapterUpdated:(ICEGRIDAdapterInfo*)info;
-(id<ICEAsyncResult>) begin_adapterUpdated:(ICEGRIDAdapterInfo*)info context:(ICEContext *)context;
-(void) end_adapterUpdated:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_adapterUpdated:(ICEGRIDAdapterInfo*)info response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterUpdated:(ICEGRIDAdapterInfo*)info context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterUpdated:(ICEGRIDAdapterInfo*)info response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_adapterUpdated:(ICEGRIDAdapterInfo*)info context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) adapterRemoved:(NSString*)id_;
-(void) adapterRemoved:(NSString*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_adapterRemoved:(NSString*)id_;
-(id<ICEAsyncResult>) begin_adapterRemoved:(NSString*)id_ context:(ICEContext *)context;
-(void) end_adapterRemoved:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_adapterRemoved:(NSString*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterRemoved:(NSString*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterRemoved:(NSString*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_adapterRemoved:(NSString*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @protocol ICEGRIDObjectObserverPrx <ICEObjectPrx>
-(void) objectInit:(ICEGRIDObjectInfoSeq*)objects;
-(void) objectInit:(ICEGRIDObjectInfoSeq*)objects context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_objectInit:(ICEGRIDObjectInfoSeq*)objects;
-(id<ICEAsyncResult>) begin_objectInit:(ICEGRIDObjectInfoSeq*)objects context:(ICEContext *)context;
-(void) end_objectInit:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_objectInit:(ICEGRIDObjectInfoSeq*)objects response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_objectInit:(ICEGRIDObjectInfoSeq*)objects context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_objectInit:(ICEGRIDObjectInfoSeq*)objects response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_objectInit:(ICEGRIDObjectInfoSeq*)objects context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) objectAdded:(ICEGRIDObjectInfo*)info;
-(void) objectAdded:(ICEGRIDObjectInfo*)info context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_objectAdded:(ICEGRIDObjectInfo*)info;
-(id<ICEAsyncResult>) begin_objectAdded:(ICEGRIDObjectInfo*)info context:(ICEContext *)context;
-(void) end_objectAdded:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_objectAdded:(ICEGRIDObjectInfo*)info response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_objectAdded:(ICEGRIDObjectInfo*)info context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_objectAdded:(ICEGRIDObjectInfo*)info response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_objectAdded:(ICEGRIDObjectInfo*)info context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) objectUpdated:(ICEGRIDObjectInfo*)info;
-(void) objectUpdated:(ICEGRIDObjectInfo*)info context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_objectUpdated:(ICEGRIDObjectInfo*)info;
-(id<ICEAsyncResult>) begin_objectUpdated:(ICEGRIDObjectInfo*)info context:(ICEContext *)context;
-(void) end_objectUpdated:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_objectUpdated:(ICEGRIDObjectInfo*)info response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_objectUpdated:(ICEGRIDObjectInfo*)info context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_objectUpdated:(ICEGRIDObjectInfo*)info response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_objectUpdated:(ICEGRIDObjectInfo*)info context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) objectRemoved:(ICEIdentity*)id_;
-(void) objectRemoved:(ICEIdentity*)id_ context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_objectRemoved:(ICEIdentity*)id_;
-(id<ICEAsyncResult>) begin_objectRemoved:(ICEIdentity*)id_ context:(ICEContext *)context;
-(void) end_objectRemoved:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_objectRemoved:(ICEIdentity*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_objectRemoved:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_objectRemoved:(ICEIdentity*)id_ response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_objectRemoved:(ICEIdentity*)id_ context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @protocol ICEGRIDAdminSessionPrx <GLACIER2SessionPrx>
-(void) keepAlive;
-(void) keepAlive:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_keepAlive;
-(id<ICEAsyncResult>) begin_keepAlive:(ICEContext *)context;
-(void) end_keepAlive:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_keepAlive:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_keepAlive:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_keepAlive:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_keepAlive:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDAdminPrx>) getAdmin;
-(id<ICEGRIDAdminPrx>) getAdmin:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAdmin;
-(id<ICEAsyncResult>) begin_getAdmin:(ICEContext *)context;
-(id<ICEGRIDAdminPrx>) end_getAdmin:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAdmin:(void(^)(id<ICEGRIDAdminPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAdmin:(ICEContext *)context response:(void(^)(id<ICEGRIDAdminPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAdmin:(void(^)(id<ICEGRIDAdminPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAdmin:(ICEContext *)context response:(void(^)(id<ICEGRIDAdminPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) getAdminCallbackTemplate;
-(id<ICEObjectPrx>) getAdminCallbackTemplate:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getAdminCallbackTemplate;
-(id<ICEAsyncResult>) begin_getAdminCallbackTemplate:(ICEContext *)context;
-(id<ICEObjectPrx>) end_getAdminCallbackTemplate:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getAdminCallbackTemplate:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAdminCallbackTemplate:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getAdminCallbackTemplate:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getAdminCallbackTemplate:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs;
-(void) setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs;
-(id<ICEAsyncResult>) begin_setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs context:(ICEContext *)context;
-(void) end_setObservers:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_setObservers:(id<ICEGRIDRegistryObserverPrx>)registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)adptObs objObs:(id<ICEGRIDObjectObserverPrx>)objObs context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs;
-(void) setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs;
-(id<ICEAsyncResult>) begin_setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs context:(ICEContext *)context;
-(void) end_setObserversByIdentity:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_setObserversByIdentity:(ICEIdentity*)registryObs nodeObs:(ICEIdentity*)nodeObs appObs:(ICEIdentity*)appObs adptObs:(ICEIdentity*)adptObs objObs:(ICEIdentity*)objObs context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEInt) startUpdate;
-(ICEInt) startUpdate:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_startUpdate;
-(id<ICEAsyncResult>) begin_startUpdate:(ICEContext *)context;
-(ICEInt) end_startUpdate:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_startUpdate:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_startUpdate:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_startUpdate:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_startUpdate:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) finishUpdate;
-(void) finishUpdate:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_finishUpdate;
-(id<ICEAsyncResult>) begin_finishUpdate:(ICEContext *)context;
-(void) end_finishUpdate:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_finishUpdate:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_finishUpdate:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_finishUpdate:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_finishUpdate:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(NSMutableString*) getReplicaName;
-(NSMutableString*) getReplicaName:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getReplicaName;
-(id<ICEAsyncResult>) begin_getReplicaName:(ICEContext *)context;
-(NSMutableString*) end_getReplicaName:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getReplicaName:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getReplicaName:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getReplicaName:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getReplicaName:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDFileIteratorPrx>) openServerLog:(NSString*)id_ path:(NSString*)path count:(ICEInt)count;
-(id<ICEGRIDFileIteratorPrx>) openServerLog:(NSString*)id_ path:(NSString*)path count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_openServerLog:(NSString*)id_ path:(NSString*)path count:(ICEInt)count;
-(id<ICEAsyncResult>) begin_openServerLog:(NSString*)id_ path:(NSString*)path count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEGRIDFileIteratorPrx>) end_openServerLog:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_openServerLog:(NSString*)id_ path:(NSString*)path count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openServerLog:(NSString*)id_ path:(NSString*)path count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openServerLog:(NSString*)id_ path:(NSString*)path count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_openServerLog:(NSString*)id_ path:(NSString*)path count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDFileIteratorPrx>) openServerStdErr:(NSString*)id_ count:(ICEInt)count;
-(id<ICEGRIDFileIteratorPrx>) openServerStdErr:(NSString*)id_ count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_openServerStdErr:(NSString*)id_ count:(ICEInt)count;
-(id<ICEAsyncResult>) begin_openServerStdErr:(NSString*)id_ count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEGRIDFileIteratorPrx>) end_openServerStdErr:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_openServerStdErr:(NSString*)id_ count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openServerStdErr:(NSString*)id_ count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openServerStdErr:(NSString*)id_ count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_openServerStdErr:(NSString*)id_ count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDFileIteratorPrx>) openServerStdOut:(NSString*)id_ count:(ICEInt)count;
-(id<ICEGRIDFileIteratorPrx>) openServerStdOut:(NSString*)id_ count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_openServerStdOut:(NSString*)id_ count:(ICEInt)count;
-(id<ICEAsyncResult>) begin_openServerStdOut:(NSString*)id_ count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEGRIDFileIteratorPrx>) end_openServerStdOut:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_openServerStdOut:(NSString*)id_ count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openServerStdOut:(NSString*)id_ count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openServerStdOut:(NSString*)id_ count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_openServerStdOut:(NSString*)id_ count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDFileIteratorPrx>) openNodeStdErr:(NSString*)name count:(ICEInt)count;
-(id<ICEGRIDFileIteratorPrx>) openNodeStdErr:(NSString*)name count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_openNodeStdErr:(NSString*)name count:(ICEInt)count;
-(id<ICEAsyncResult>) begin_openNodeStdErr:(NSString*)name count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEGRIDFileIteratorPrx>) end_openNodeStdErr:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_openNodeStdErr:(NSString*)name count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openNodeStdErr:(NSString*)name count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openNodeStdErr:(NSString*)name count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_openNodeStdErr:(NSString*)name count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDFileIteratorPrx>) openNodeStdOut:(NSString*)name count:(ICEInt)count;
-(id<ICEGRIDFileIteratorPrx>) openNodeStdOut:(NSString*)name count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_openNodeStdOut:(NSString*)name count:(ICEInt)count;
-(id<ICEAsyncResult>) begin_openNodeStdOut:(NSString*)name count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEGRIDFileIteratorPrx>) end_openNodeStdOut:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_openNodeStdOut:(NSString*)name count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openNodeStdOut:(NSString*)name count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openNodeStdOut:(NSString*)name count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_openNodeStdOut:(NSString*)name count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDFileIteratorPrx>) openRegistryStdErr:(NSString*)name count:(ICEInt)count;
-(id<ICEGRIDFileIteratorPrx>) openRegistryStdErr:(NSString*)name count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_openRegistryStdErr:(NSString*)name count:(ICEInt)count;
-(id<ICEAsyncResult>) begin_openRegistryStdErr:(NSString*)name count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEGRIDFileIteratorPrx>) end_openRegistryStdErr:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_openRegistryStdErr:(NSString*)name count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openRegistryStdErr:(NSString*)name count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openRegistryStdErr:(NSString*)name count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_openRegistryStdErr:(NSString*)name count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEGRIDFileIteratorPrx>) openRegistryStdOut:(NSString*)name count:(ICEInt)count;
-(id<ICEGRIDFileIteratorPrx>) openRegistryStdOut:(NSString*)name count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_openRegistryStdOut:(NSString*)name count:(ICEInt)count;
-(id<ICEAsyncResult>) begin_openRegistryStdOut:(NSString*)name count:(ICEInt)count context:(ICEContext *)context;
-(id<ICEGRIDFileIteratorPrx>) end_openRegistryStdOut:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_openRegistryStdOut:(NSString*)name count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openRegistryStdOut:(NSString*)name count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_openRegistryStdOut:(NSString*)name count:(ICEInt)count response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_openRegistryStdOut:(NSString*)name count:(ICEInt)count context:(ICEContext *)context response:(void(^)(id<ICEGRIDFileIteratorPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @interface ICEGRIDAdminPrx : ICEObjectPrx <ICEGRIDAdminPrx>
+(NSString *) ice_staticId;
+(void) iceI_addApplication_marshal:(ICEGRIDApplicationDescriptor*)iceP_descriptor os:(id<ICEOutputStream>)ostr;
+(void) iceI_addApplication_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_syncApplication_marshal:(ICEGRIDApplicationDescriptor*)iceP_descriptor os:(id<ICEOutputStream>)ostr;
+(void) iceI_syncApplication_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_updateApplication_marshal:(ICEGRIDApplicationUpdateDescriptor*)iceP_descriptor os:(id<ICEOutputStream>)ostr;
+(void) iceI_updateApplication_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_syncApplicationWithoutRestart_marshal:(ICEGRIDApplicationDescriptor*)iceP_descriptor os:(id<ICEOutputStream>)ostr;
+(void) iceI_syncApplicationWithoutRestart_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_updateApplicationWithoutRestart_marshal:(ICEGRIDApplicationUpdateDescriptor*)iceP_descriptor os:(id<ICEOutputStream>)ostr;
+(void) iceI_updateApplicationWithoutRestart_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_removeApplication_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(void) iceI_removeApplication_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_instantiateServer_marshal:(NSString*)iceP_application node:(NSString*)iceP_node desc:(ICEGRIDServerInstanceDescriptor*)iceP_desc os:(id<ICEOutputStream>)ostr;
+(void) iceI_instantiateServer_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_patchApplication_marshal:(NSString*)iceP_name shutdown:(BOOL)iceP_shutdown os:(id<ICEOutputStream>)ostr;
+(void) iceI_patchApplication_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getApplicationInfo_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(ICEGRIDApplicationInfo*) iceI_getApplicationInfo_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEGRIDApplicationDescriptor*) iceI_getDefaultApplicationDescriptor_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEMutableStringSeq*) iceI_getAllApplicationNames_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getServerInfo_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(ICEGRIDServerInfo*) iceI_getServerInfo_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getServerState_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(ICEGRIDServerState) iceI_getServerState_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getServerPid_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(ICEInt) iceI_getServerPid_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(NSMutableString*) iceI_getServerAdminCategory_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getServerAdmin_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_getServerAdmin_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_enableServer_marshal:(NSString*)iceP_id enabled:(BOOL)iceP_enabled os:(id<ICEOutputStream>)ostr;
+(void) iceI_enableServer_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_isServerEnabled_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(BOOL) iceI_isServerEnabled_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_startServer_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(void) iceI_startServer_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_stopServer_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(void) iceI_stopServer_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_patchServer_marshal:(NSString*)iceP_id shutdown:(BOOL)iceP_shutdown os:(id<ICEOutputStream>)ostr;
+(void) iceI_patchServer_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_sendSignal_marshal:(NSString*)iceP_id signal:(NSString*)iceP_signal os:(id<ICEOutputStream>)ostr;
+(void) iceI_sendSignal_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEMutableStringSeq*) iceI_getAllServerIds_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getAdapterInfo_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(ICEGRIDMutableAdapterInfoSeq*) iceI_getAdapterInfo_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_removeAdapter_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
+(void) iceI_removeAdapter_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEMutableStringSeq*) iceI_getAllAdapterIds_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_addObject_marshal:(id<ICEObjectPrx>)iceP_obj os:(id<ICEOutputStream>)ostr;
+(void) iceI_addObject_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_updateObject_marshal:(id<ICEObjectPrx>)iceP_obj os:(id<ICEOutputStream>)ostr;
+(void) iceI_updateObject_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_addObjectWithType_marshal:(id<ICEObjectPrx>)iceP_obj type:(NSString*)iceP_type os:(id<ICEOutputStream>)ostr;
+(void) iceI_addObjectWithType_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_removeObject_marshal:(ICEIdentity*)iceP_id os:(id<ICEOutputStream>)ostr;
+(void) iceI_removeObject_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getObjectInfo_marshal:(ICEIdentity*)iceP_id os:(id<ICEOutputStream>)ostr;
+(ICEGRIDObjectInfo*) iceI_getObjectInfo_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getObjectInfosByType_marshal:(NSString*)iceP_type os:(id<ICEOutputStream>)ostr;
+(ICEGRIDMutableObjectInfoSeq*) iceI_getObjectInfosByType_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getAllObjectInfos_marshal:(NSString*)iceP_expr os:(id<ICEOutputStream>)ostr;
+(ICEGRIDMutableObjectInfoSeq*) iceI_getAllObjectInfos_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_pingNode_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(BOOL) iceI_pingNode_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getNodeLoad_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(ICEGRIDLoadInfo*) iceI_getNodeLoad_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getNodeInfo_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(ICEGRIDNodeInfo*) iceI_getNodeInfo_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getNodeAdmin_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_getNodeAdmin_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getNodeProcessorSocketCount_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(ICEInt) iceI_getNodeProcessorSocketCount_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_shutdownNode_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(void) iceI_shutdownNode_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getNodeHostname_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(NSMutableString*) iceI_getNodeHostname_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEMutableStringSeq*) iceI_getAllNodeNames_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_pingRegistry_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(BOOL) iceI_pingRegistry_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getRegistryInfo_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(ICEGRIDRegistryInfo*) iceI_getRegistryInfo_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getRegistryAdmin_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_getRegistryAdmin_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_shutdownRegistry_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(void) iceI_shutdownRegistry_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEMutableStringSeq*) iceI_getAllRegistryNames_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEMutableSliceChecksumDict*) iceI_getSliceChecksums_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICEGRID_API @interface ICEGRIDFileIteratorPrx : ICEObjectPrx <ICEGRIDFileIteratorPrx>
+(NSString *) ice_staticId;
+(void) iceI_read_marshal:(ICEInt)iceP_size os:(id<ICEOutputStream>)ostr;
+(BOOL) iceI_read_unmarshal:(ICEMutableStringSeq* ICE_AUTORELEASING_QUALIFIER*)iceP_lines is:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICEGRID_API @interface ICEGRIDRegistryObserverPrx : ICEObjectPrx <ICEGRIDRegistryObserverPrx>
+(NSString *) ice_staticId;
+(void) iceI_registryInit_marshal:(ICEGRIDRegistryInfoSeq*)iceP_registries os:(id<ICEOutputStream>)ostr;
+(void) iceI_registryUp_marshal:(ICEGRIDRegistryInfo*)iceP_node os:(id<ICEOutputStream>)ostr;
+(void) iceI_registryDown_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @interface ICEGRIDNodeObserverPrx : ICEObjectPrx <ICEGRIDNodeObserverPrx>
+(NSString *) ice_staticId;
+(void) iceI_nodeInit_marshal:(ICEGRIDNodeDynamicInfoSeq*)iceP_nodes os:(id<ICEOutputStream>)ostr;
+(void) iceI_nodeUp_marshal:(ICEGRIDNodeDynamicInfo*)iceP_node os:(id<ICEOutputStream>)ostr;
+(void) iceI_nodeDown_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(void) iceI_updateServer_marshal:(NSString*)iceP_node updatedInfo:(ICEGRIDServerDynamicInfo*)iceP_updatedInfo os:(id<ICEOutputStream>)ostr;
+(void) iceI_updateAdapter_marshal:(NSString*)iceP_node updatedInfo:(ICEGRIDAdapterDynamicInfo*)iceP_updatedInfo os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @interface ICEGRIDApplicationObserverPrx : ICEObjectPrx <ICEGRIDApplicationObserverPrx>
+(NSString *) ice_staticId;
+(void) iceI_applicationInit_marshal:(ICEInt)iceP_serial applications:(ICEGRIDApplicationInfoSeq*)iceP_applications os:(id<ICEOutputStream>)ostr;
+(void) iceI_applicationAdded_marshal:(ICEInt)iceP_serial desc:(ICEGRIDApplicationInfo*)iceP_desc os:(id<ICEOutputStream>)ostr;
+(void) iceI_applicationRemoved_marshal:(ICEInt)iceP_serial name:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(void) iceI_applicationUpdated_marshal:(ICEInt)iceP_serial desc:(ICEGRIDApplicationUpdateInfo*)iceP_desc os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @interface ICEGRIDAdapterObserverPrx : ICEObjectPrx <ICEGRIDAdapterObserverPrx>
+(NSString *) ice_staticId;
+(void) iceI_adapterInit_marshal:(ICEGRIDAdapterInfoSeq*)iceP_adpts os:(id<ICEOutputStream>)ostr;
+(void) iceI_adapterAdded_marshal:(ICEGRIDAdapterInfo*)iceP_info os:(id<ICEOutputStream>)ostr;
+(void) iceI_adapterUpdated_marshal:(ICEGRIDAdapterInfo*)iceP_info os:(id<ICEOutputStream>)ostr;
+(void) iceI_adapterRemoved_marshal:(NSString*)iceP_id os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @interface ICEGRIDObjectObserverPrx : ICEObjectPrx <ICEGRIDObjectObserverPrx>
+(NSString *) ice_staticId;
+(void) iceI_objectInit_marshal:(ICEGRIDObjectInfoSeq*)iceP_objects os:(id<ICEOutputStream>)ostr;
+(void) iceI_objectAdded_marshal:(ICEGRIDObjectInfo*)iceP_info os:(id<ICEOutputStream>)ostr;
+(void) iceI_objectUpdated_marshal:(ICEGRIDObjectInfo*)iceP_info os:(id<ICEOutputStream>)ostr;
+(void) iceI_objectRemoved_marshal:(ICEIdentity*)iceP_id os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @interface ICEGRIDAdminSessionPrx : ICEObjectPrx <ICEGRIDAdminSessionPrx>
+(NSString *) ice_staticId;
+(id<ICEGRIDAdminPrx>) iceI_getAdmin_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<ICEObjectPrx>) iceI_getAdminCallbackTemplate_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_setObservers_marshal:(id<ICEGRIDRegistryObserverPrx>)iceP_registryObs nodeObs:(id<ICEGRIDNodeObserverPrx>)iceP_nodeObs appObs:(id<ICEGRIDApplicationObserverPrx>)iceP_appObs adptObs:(id<ICEGRIDAdapterObserverPrx>)iceP_adptObs objObs:(id<ICEGRIDObjectObserverPrx>)iceP_objObs os:(id<ICEOutputStream>)ostr;
+(void) iceI_setObservers_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_setObserversByIdentity_marshal:(ICEIdentity*)iceP_registryObs nodeObs:(ICEIdentity*)iceP_nodeObs appObs:(ICEIdentity*)iceP_appObs adptObs:(ICEIdentity*)iceP_adptObs objObs:(ICEIdentity*)iceP_objObs os:(id<ICEOutputStream>)ostr;
+(void) iceI_setObserversByIdentity_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEInt) iceI_startUpdate_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_finishUpdate_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(NSMutableString*) iceI_getReplicaName_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_openServerLog_marshal:(NSString*)iceP_id path:(NSString*)iceP_path count:(ICEInt)iceP_count os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDFileIteratorPrx>) iceI_openServerLog_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_openServerStdErr_marshal:(NSString*)iceP_id count:(ICEInt)iceP_count os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDFileIteratorPrx>) iceI_openServerStdErr_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_openServerStdOut_marshal:(NSString*)iceP_id count:(ICEInt)iceP_count os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDFileIteratorPrx>) iceI_openServerStdOut_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_openNodeStdErr_marshal:(NSString*)iceP_name count:(ICEInt)iceP_count os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDFileIteratorPrx>) iceI_openNodeStdErr_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_openNodeStdOut_marshal:(NSString*)iceP_name count:(ICEInt)iceP_count os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDFileIteratorPrx>) iceI_openNodeStdOut_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_openRegistryStdErr_marshal:(NSString*)iceP_name count:(ICEInt)iceP_count os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDFileIteratorPrx>) iceI_openRegistryStdErr_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_openRegistryStdOut_marshal:(NSString*)iceP_name count:(ICEInt)iceP_count os:(id<ICEOutputStream>)ostr;
+(id<ICEGRIDFileIteratorPrx>) iceI_openRegistryStdOut_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICEGRID_API @interface ICEGRIDServerStateHelper : ICEEnumHelper
@end

ICEGRID_API @interface ICEGRIDStringObjectProxyDictHelper : ICEDictionaryHelper
@end

ICEGRID_API @interface ICEGRIDObjectInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDObjectInfoSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDAdapterInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDAdapterInfoSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDServerInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDNodeInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDRegistryInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDRegistryInfoSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDLoadInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDApplicationInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDApplicationInfoSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDApplicationUpdateInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDAdminPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDAdminHelper;

ICEGRID_API @interface ICEGRIDFileIteratorPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDFileIteratorHelper;

ICEGRID_API @interface ICEGRIDServerDynamicInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDServerDynamicInfoSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDAdapterDynamicInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDAdapterDynamicInfoSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDNodeDynamicInfoHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDRegistryObserverPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDRegistryObserverHelper;

ICEGRID_API @interface ICEGRIDNodeDynamicInfoSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDNodeObserverPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDNodeObserverHelper;

ICEGRID_API @interface ICEGRIDApplicationObserverPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDApplicationObserverHelper;

ICEGRID_API @interface ICEGRIDAdapterObserverPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDAdapterObserverHelper;

ICEGRID_API @interface ICEGRIDObjectObserverPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDObjectObserverHelper;

ICEGRID_API @interface ICEGRIDAdminSessionPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDAdminSessionHelper;
