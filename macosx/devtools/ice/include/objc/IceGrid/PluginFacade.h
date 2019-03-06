//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `PluginFacade.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/SlicedData.h>
#import <objc/Ice/BuiltinSequences.h>
#import <objc/Ice/Current.h>
#import <objc/IceGrid/Admin.h>

#ifndef ICEGRID_API
#   if defined(ICE_STATIC_LIBS)
#       define ICEGRID_API /**/
#   elif defined(ICEGRID_API_EXPORTS)
#       define ICEGRID_API ICE_DECLSPEC_EXPORT
#   else
#       define ICEGRID_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@protocol ICEGRIDReplicaGroupFilter;

@protocol ICEGRIDTypeFilter;

@protocol ICEGRIDRegistryPluginFacade;

ICEGRID_API @protocol ICEGRIDReplicaGroupFilter <NSObject>
-(ICEMutableStringSeq*) filter:(NSString*)replicaGroupId adapterIds:(ICEStringSeq*)adapterIds con:(id<ICEConnection>)con ctx:(ICEContext*)ctx;
@end

ICEGRID_API @protocol ICEGRIDTypeFilter <NSObject>
-(ICEMutableObjectProxySeq*) filter:(NSString*)type proxies:(ICEObjectProxySeq*)proxies con:(id<ICEConnection>)con ctx:(ICEContext*)ctx;
@end

ICEGRID_API @protocol ICEGRIDRegistryPluginFacade <NSObject>
-(ICEGRIDApplicationInfo*) getApplicationInfo:(NSString*)name;
-(ICEGRIDServerInfo*) getServerInfo:(NSString*)id_;
-(NSMutableString*) getAdapterServer:(NSString*)adapterId;
-(NSMutableString*) getAdapterApplication:(NSString*)adapterId;
-(NSMutableString*) getAdapterNode:(NSString*)adapterId;
-(ICEGRIDMutableAdapterInfoSeq*) getAdapterInfo:(NSString*)id_;
-(ICEGRIDObjectInfo*) getObjectInfo:(ICEIdentity*)id_;
-(ICEGRIDNodeInfo*) getNodeInfo:(NSString*)name;
-(ICEGRIDLoadInfo*) getNodeLoad:(NSString*)name;
-(NSMutableString*) getPropertyForAdapter:(NSString*)adapterId name:(NSString*)name;
-(void) addReplicaGroupFilter:(NSString*)id_ filter:(id<ICEGRIDReplicaGroupFilter>)filter;
-(BOOL) removeReplicaGroupFilter:(NSString*)id_ filter:(id<ICEGRIDReplicaGroupFilter>)filter;
-(void) addTypeFilter:(NSString*)type filter:(id<ICEGRIDTypeFilter>)filter;
-(BOOL) removeTypeFilter:(NSString*)type filter:(id<ICEGRIDTypeFilter>)filter;
@end
