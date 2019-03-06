//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Descriptor.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/Identity.h>
#import <objc/Ice/BuiltinSequences.h>

#ifndef ICEGRID_API
#   if defined(ICE_STATIC_LIBS)
#       define ICEGRID_API /**/
#   elif defined(ICEGRID_API_EXPORTS)
#       define ICEGRID_API ICE_DECLSPEC_EXPORT
#   else
#       define ICEGRID_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEGRIDCommunicatorDescriptor;
@protocol ICEGRIDCommunicatorDescriptor;

@class ICEGRIDServerDescriptor;
@protocol ICEGRIDServerDescriptor;

@class ICEGRIDServiceDescriptor;
@protocol ICEGRIDServiceDescriptor;

@class ICEGRIDIceBoxDescriptor;
@protocol ICEGRIDIceBoxDescriptor;

@class ICEGRIDLoadBalancingPolicy;
@protocol ICEGRIDLoadBalancingPolicy;

@class ICEGRIDRandomLoadBalancingPolicy;
@protocol ICEGRIDRandomLoadBalancingPolicy;

@class ICEGRIDOrderedLoadBalancingPolicy;
@protocol ICEGRIDOrderedLoadBalancingPolicy;

@class ICEGRIDRoundRobinLoadBalancingPolicy;
@protocol ICEGRIDRoundRobinLoadBalancingPolicy;

@class ICEGRIDAdaptiveLoadBalancingPolicy;
@protocol ICEGRIDAdaptiveLoadBalancingPolicy;

@class ICEGRIDBoxedString;
@protocol ICEGRIDBoxedString;

@class ICEGRIDBoxedDistributionDescriptor;
@protocol ICEGRIDBoxedDistributionDescriptor;

@class ICEGRIDCommunicatorDescriptorPrx;
@protocol ICEGRIDCommunicatorDescriptorPrx;

@class ICEGRIDServerDescriptorPrx;
@protocol ICEGRIDServerDescriptorPrx;

@class ICEGRIDServiceDescriptorPrx;
@protocol ICEGRIDServiceDescriptorPrx;

@class ICEGRIDIceBoxDescriptorPrx;
@protocol ICEGRIDIceBoxDescriptorPrx;

@class ICEGRIDLoadBalancingPolicyPrx;
@protocol ICEGRIDLoadBalancingPolicyPrx;

@class ICEGRIDRandomLoadBalancingPolicyPrx;
@protocol ICEGRIDRandomLoadBalancingPolicyPrx;

@class ICEGRIDOrderedLoadBalancingPolicyPrx;
@protocol ICEGRIDOrderedLoadBalancingPolicyPrx;

@class ICEGRIDRoundRobinLoadBalancingPolicyPrx;
@protocol ICEGRIDRoundRobinLoadBalancingPolicyPrx;

@class ICEGRIDAdaptiveLoadBalancingPolicyPrx;
@protocol ICEGRIDAdaptiveLoadBalancingPolicyPrx;

@class ICEGRIDBoxedStringPrx;
@protocol ICEGRIDBoxedStringPrx;

@class ICEGRIDBoxedDistributionDescriptorPrx;
@protocol ICEGRIDBoxedDistributionDescriptorPrx;

typedef NSDictionary ICEGRIDStringStringDict;
typedef NSMutableDictionary ICEGRIDMutableStringStringDict;

ICEGRID_API @interface ICEGRIDPropertyDescriptor : NSObject <NSCopying>
{
    @private
        NSString *name;
        NSString *value;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) NSString *value;

-(id) init;
-(id) init:(NSString*)name value:(NSString*)value;
+(id) propertyDescriptor;
+(id) propertyDescriptor:(NSString*)name value:(NSString*)value;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDPropertyDescriptorSeq;
typedef NSMutableArray ICEGRIDMutablePropertyDescriptorSeq;

ICEGRID_API @interface ICEGRIDPropertySetDescriptor : NSObject <NSCopying>
{
    @private
        ICEStringSeq *references;
        ICEGRIDPropertyDescriptorSeq *properties;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *references;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertyDescriptorSeq *properties;

-(id) init:(ICEStringSeq*)references properties:(ICEGRIDPropertyDescriptorSeq*)properties;
+(id) propertySetDescriptor;
+(id) propertySetDescriptor:(ICEStringSeq*)references properties:(ICEGRIDPropertyDescriptorSeq*)properties;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSDictionary ICEGRIDPropertySetDescriptorDict;
typedef NSMutableDictionary ICEGRIDMutablePropertySetDescriptorDict;

ICEGRID_API @interface ICEGRIDObjectDescriptor : NSObject <NSCopying>
{
    @private
        ICEIdentity *id_;
        NSString *type;
        NSString *proxyOptions;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEIdentity *id_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *type;
@property(nonatomic, ICE_STRONG_ATTR) NSString *proxyOptions;

-(id) init;
-(id) init:(ICEIdentity*)id_ type:(NSString*)type proxyOptions:(NSString*)proxyOptions;
+(id) objectDescriptor;
+(id) objectDescriptor:(ICEIdentity*)id_ type:(NSString*)type proxyOptions:(NSString*)proxyOptions;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDObjectDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableObjectDescriptorSeq;

ICEGRID_API @interface ICEGRIDAdapterDescriptor : NSObject <NSCopying>
{
    @private
        NSString *name;
        NSString *description_;
        NSString *id_;
        NSString *replicaGroupId;
        NSString *priority;
        BOOL registerProcess;
        BOOL serverLifetime;
        ICEGRIDObjectDescriptorSeq *objects;
        ICEGRIDObjectDescriptorSeq *allocatables;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) NSString *description_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *replicaGroupId;
@property(nonatomic, ICE_STRONG_ATTR) NSString *priority;
@property(nonatomic, assign) BOOL registerProcess;
@property(nonatomic, assign) BOOL serverLifetime;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDObjectDescriptorSeq *objects;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDObjectDescriptorSeq *allocatables;

-(id) init;
-(id) init:(NSString*)name description:(NSString*)description id:(NSString*)id_ replicaGroupId:(NSString*)replicaGroupId priority:(NSString*)priority registerProcess:(BOOL)registerProcess serverLifetime:(BOOL)serverLifetime objects:(ICEGRIDObjectDescriptorSeq*)objects allocatables:(ICEGRIDObjectDescriptorSeq*)allocatables;
+(id) adapterDescriptor;
+(id) adapterDescriptor:(NSString*)name description:(NSString*)description id:(NSString*)id_ replicaGroupId:(NSString*)replicaGroupId priority:(NSString*)priority registerProcess:(BOOL)registerProcess serverLifetime:(BOOL)serverLifetime objects:(ICEGRIDObjectDescriptorSeq*)objects allocatables:(ICEGRIDObjectDescriptorSeq*)allocatables;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDAdapterDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableAdapterDescriptorSeq;

ICEGRID_API @interface ICEGRIDDbEnvDescriptor : NSObject <NSCopying>
{
    @private
        NSString *name;
        NSString *description_;
        NSString *dbHome;
        ICEGRIDPropertyDescriptorSeq *properties;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) NSString *description_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *dbHome;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertyDescriptorSeq *properties;

-(id) init;
-(id) init:(NSString*)name description:(NSString*)description dbHome:(NSString*)dbHome properties:(ICEGRIDPropertyDescriptorSeq*)properties;
+(id) dbEnvDescriptor;
+(id) dbEnvDescriptor:(NSString*)name description:(NSString*)description dbHome:(NSString*)dbHome properties:(ICEGRIDPropertyDescriptorSeq*)properties;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDDbEnvDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableDbEnvDescriptorSeq;

ICEGRID_API @protocol ICEGRIDCommunicatorDescriptor <NSObject>
@end

ICEGRID_API @interface ICEGRIDCommunicatorDescriptor : ICEServant
{
    ICEGRIDAdapterDescriptorSeq *adapters;
    ICEGRIDPropertySetDescriptor *propertySet;
    ICEGRIDDbEnvDescriptorSeq *dbEnvs;
    ICEStringSeq *logs;
    NSString *description_;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDAdapterDescriptorSeq *adapters;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertySetDescriptor *propertySet;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDDbEnvDescriptorSeq *dbEnvs;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *logs;
@property(nonatomic, ICE_STRONG_ATTR) NSString *description_;

-(id) init;
-(id) init:(ICEGRIDAdapterDescriptorSeq*)adapters propertySet:(ICEGRIDPropertySetDescriptor*)propertySet dbEnvs:(ICEGRIDDbEnvDescriptorSeq*)dbEnvs logs:(ICEStringSeq*)logs description:(NSString*)description;
+(id) communicatorDescriptor;
+(id) communicatorDescriptor:(ICEGRIDAdapterDescriptorSeq*)adapters propertySet:(ICEGRIDPropertySetDescriptor*)propertySet dbEnvs:(ICEGRIDDbEnvDescriptorSeq*)dbEnvs logs:(ICEStringSeq*)logs description:(NSString*)description;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDDistributionDescriptor : NSObject <NSCopying>
{
    @private
        NSString *icepatch;
        ICEStringSeq *directories;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *icepatch;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *directories;

-(id) init;
-(id) init:(NSString*)icepatch directories:(ICEStringSeq*)directories;
+(id) distributionDescriptor;
+(id) distributionDescriptor:(NSString*)icepatch directories:(ICEStringSeq*)directories;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICEGRID_API @protocol ICEGRIDServerDescriptor <ICEGRIDCommunicatorDescriptor>
@end

ICEGRID_API @interface ICEGRIDServerDescriptor : ICEGRIDCommunicatorDescriptor
{
    NSString *id_;
    NSString *exe;
    NSString *iceVersion;
    NSString *pwd;
    ICEStringSeq *options;
    ICEStringSeq *envs;
    NSString *activation;
    NSString *activationTimeout;
    NSString *deactivationTimeout;
    BOOL applicationDistrib;
    ICEGRIDDistributionDescriptor *distrib;
    BOOL allocatable;
    NSString *user;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *exe;
@property(nonatomic, ICE_STRONG_ATTR) NSString *iceVersion;
@property(nonatomic, ICE_STRONG_ATTR) NSString *pwd;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *options;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *envs;
@property(nonatomic, ICE_STRONG_ATTR) NSString *activation;
@property(nonatomic, ICE_STRONG_ATTR) NSString *activationTimeout;
@property(nonatomic, ICE_STRONG_ATTR) NSString *deactivationTimeout;
@property(nonatomic, assign) BOOL applicationDistrib;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDDistributionDescriptor *distrib;
@property(nonatomic, assign) BOOL allocatable;
@property(nonatomic, ICE_STRONG_ATTR) NSString *user;

-(id) init;
-(id) init:(ICEGRIDAdapterDescriptorSeq*)adapters propertySet:(ICEGRIDPropertySetDescriptor*)propertySet dbEnvs:(ICEGRIDDbEnvDescriptorSeq*)dbEnvs logs:(ICEStringSeq*)logs description:(NSString*)description id:(NSString*)id_ exe:(NSString*)exe iceVersion:(NSString*)iceVersion pwd:(NSString*)pwd options:(ICEStringSeq*)options envs:(ICEStringSeq*)envs activation:(NSString*)activation activationTimeout:(NSString*)activationTimeout deactivationTimeout:(NSString*)deactivationTimeout applicationDistrib:(BOOL)applicationDistrib distrib:(ICEGRIDDistributionDescriptor*)distrib allocatable:(BOOL)allocatable user:(NSString*)user;
+(id) serverDescriptor;
+(id) serverDescriptor:(ICEGRIDAdapterDescriptorSeq*)adapters propertySet:(ICEGRIDPropertySetDescriptor*)propertySet dbEnvs:(ICEGRIDDbEnvDescriptorSeq*)dbEnvs logs:(ICEStringSeq*)logs description:(NSString*)description id:(NSString*)id_ exe:(NSString*)exe iceVersion:(NSString*)iceVersion pwd:(NSString*)pwd options:(ICEStringSeq*)options envs:(ICEStringSeq*)envs activation:(NSString*)activation activationTimeout:(NSString*)activationTimeout deactivationTimeout:(NSString*)deactivationTimeout applicationDistrib:(BOOL)applicationDistrib distrib:(ICEGRIDDistributionDescriptor*)distrib allocatable:(BOOL)allocatable user:(NSString*)user;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

typedef NSArray ICEGRIDServerDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableServerDescriptorSeq;

ICEGRID_API @protocol ICEGRIDServiceDescriptor <ICEGRIDCommunicatorDescriptor>
@end

ICEGRID_API @interface ICEGRIDServiceDescriptor : ICEGRIDCommunicatorDescriptor
{
    NSString *name;
    NSString *entry;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) NSString *entry;

-(id) init;
-(id) init:(ICEGRIDAdapterDescriptorSeq*)adapters propertySet:(ICEGRIDPropertySetDescriptor*)propertySet dbEnvs:(ICEGRIDDbEnvDescriptorSeq*)dbEnvs logs:(ICEStringSeq*)logs description:(NSString*)description name:(NSString*)name entry:(NSString*)entry;
+(id) serviceDescriptor;
+(id) serviceDescriptor:(ICEGRIDAdapterDescriptorSeq*)adapters propertySet:(ICEGRIDPropertySetDescriptor*)propertySet dbEnvs:(ICEGRIDDbEnvDescriptorSeq*)dbEnvs logs:(ICEStringSeq*)logs description:(NSString*)description name:(NSString*)name entry:(NSString*)entry;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

typedef NSArray ICEGRIDServiceDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableServiceDescriptorSeq;

ICEGRID_API @interface ICEGRIDServerInstanceDescriptor : NSObject <NSCopying>
{
    @private
        NSString *template;
        ICEGRIDStringStringDict *parameterValues;
        ICEGRIDPropertySetDescriptor *propertySet;
        ICEGRIDPropertySetDescriptorDict *servicePropertySets;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *template;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDStringStringDict *parameterValues;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertySetDescriptor *propertySet;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertySetDescriptorDict *servicePropertySets;

-(id) init;
-(id) init:(NSString*)template parameterValues:(ICEGRIDStringStringDict*)parameterValues propertySet:(ICEGRIDPropertySetDescriptor*)propertySet servicePropertySets:(ICEGRIDPropertySetDescriptorDict*)servicePropertySets;
+(id) serverInstanceDescriptor;
+(id) serverInstanceDescriptor:(NSString*)template parameterValues:(ICEGRIDStringStringDict*)parameterValues propertySet:(ICEGRIDPropertySetDescriptor*)propertySet servicePropertySets:(ICEGRIDPropertySetDescriptorDict*)servicePropertySets;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDServerInstanceDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableServerInstanceDescriptorSeq;

ICEGRID_API @interface ICEGRIDTemplateDescriptor : NSObject <NSCopying>
{
    @private
        ICEGRIDCommunicatorDescriptor *descriptor;
        ICEStringSeq *parameters;
        ICEGRIDStringStringDict *parameterDefaults;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDCommunicatorDescriptor *descriptor;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *parameters;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDStringStringDict *parameterDefaults;

-(id) init:(ICEGRIDCommunicatorDescriptor*)descriptor parameters:(ICEStringSeq*)parameters parameterDefaults:(ICEGRIDStringStringDict*)parameterDefaults;
+(id) templateDescriptor;
+(id) templateDescriptor:(ICEGRIDCommunicatorDescriptor*)descriptor parameters:(ICEStringSeq*)parameters parameterDefaults:(ICEGRIDStringStringDict*)parameterDefaults;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSDictionary ICEGRIDTemplateDescriptorDict;
typedef NSMutableDictionary ICEGRIDMutableTemplateDescriptorDict;

ICEGRID_API @interface ICEGRIDServiceInstanceDescriptor : NSObject <NSCopying>
{
    @private
        NSString *template;
        ICEGRIDStringStringDict *parameterValues;
        ICEGRIDServiceDescriptor *descriptor;
        ICEGRIDPropertySetDescriptor *propertySet;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *template;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDStringStringDict *parameterValues;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDServiceDescriptor *descriptor;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertySetDescriptor *propertySet;

-(id) init;
-(id) init:(NSString*)template parameterValues:(ICEGRIDStringStringDict*)parameterValues descriptor:(ICEGRIDServiceDescriptor*)descriptor propertySet:(ICEGRIDPropertySetDescriptor*)propertySet;
+(id) serviceInstanceDescriptor;
+(id) serviceInstanceDescriptor:(NSString*)template parameterValues:(ICEGRIDStringStringDict*)parameterValues descriptor:(ICEGRIDServiceDescriptor*)descriptor propertySet:(ICEGRIDPropertySetDescriptor*)propertySet;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDServiceInstanceDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableServiceInstanceDescriptorSeq;

ICEGRID_API @protocol ICEGRIDIceBoxDescriptor <ICEGRIDServerDescriptor>
@end

ICEGRID_API @interface ICEGRIDIceBoxDescriptor : ICEGRIDServerDescriptor
{
    ICEGRIDServiceInstanceDescriptorSeq *services;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDServiceInstanceDescriptorSeq *services;

-(id) init:(ICEGRIDAdapterDescriptorSeq*)adapters propertySet:(ICEGRIDPropertySetDescriptor*)propertySet dbEnvs:(ICEGRIDDbEnvDescriptorSeq*)dbEnvs logs:(ICEStringSeq*)logs description:(NSString*)description id:(NSString*)id_ exe:(NSString*)exe iceVersion:(NSString*)iceVersion pwd:(NSString*)pwd options:(ICEStringSeq*)options envs:(ICEStringSeq*)envs activation:(NSString*)activation activationTimeout:(NSString*)activationTimeout deactivationTimeout:(NSString*)deactivationTimeout applicationDistrib:(BOOL)applicationDistrib distrib:(ICEGRIDDistributionDescriptor*)distrib allocatable:(BOOL)allocatable user:(NSString*)user services:(ICEGRIDServiceInstanceDescriptorSeq*)services;
+(id) iceBoxDescriptor;
+(id) iceBoxDescriptor:(ICEGRIDAdapterDescriptorSeq*)adapters propertySet:(ICEGRIDPropertySetDescriptor*)propertySet dbEnvs:(ICEGRIDDbEnvDescriptorSeq*)dbEnvs logs:(ICEStringSeq*)logs description:(NSString*)description id:(NSString*)id_ exe:(NSString*)exe iceVersion:(NSString*)iceVersion pwd:(NSString*)pwd options:(ICEStringSeq*)options envs:(ICEStringSeq*)envs activation:(NSString*)activation activationTimeout:(NSString*)activationTimeout deactivationTimeout:(NSString*)deactivationTimeout applicationDistrib:(BOOL)applicationDistrib distrib:(ICEGRIDDistributionDescriptor*)distrib allocatable:(BOOL)allocatable user:(NSString*)user services:(ICEGRIDServiceInstanceDescriptorSeq*)services;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDNodeDescriptor : NSObject <NSCopying>
{
    @private
        ICEGRIDStringStringDict *variables;
        ICEGRIDServerInstanceDescriptorSeq *serverInstances;
        ICEGRIDServerDescriptorSeq *servers;
        NSString *loadFactor;
        NSString *description_;
        ICEGRIDPropertySetDescriptorDict *propertySets;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDStringStringDict *variables;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDServerInstanceDescriptorSeq *serverInstances;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDServerDescriptorSeq *servers;
@property(nonatomic, ICE_STRONG_ATTR) NSString *loadFactor;
@property(nonatomic, ICE_STRONG_ATTR) NSString *description_;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertySetDescriptorDict *propertySets;

-(id) init;
-(id) init:(ICEGRIDStringStringDict*)variables serverInstances:(ICEGRIDServerInstanceDescriptorSeq*)serverInstances servers:(ICEGRIDServerDescriptorSeq*)servers loadFactor:(NSString*)loadFactor description:(NSString*)description propertySets:(ICEGRIDPropertySetDescriptorDict*)propertySets;
+(id) nodeDescriptor;
+(id) nodeDescriptor:(ICEGRIDStringStringDict*)variables serverInstances:(ICEGRIDServerInstanceDescriptorSeq*)serverInstances servers:(ICEGRIDServerDescriptorSeq*)servers loadFactor:(NSString*)loadFactor description:(NSString*)description propertySets:(ICEGRIDPropertySetDescriptorDict*)propertySets;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSDictionary ICEGRIDNodeDescriptorDict;
typedef NSMutableDictionary ICEGRIDMutableNodeDescriptorDict;

ICEGRID_API @protocol ICEGRIDLoadBalancingPolicy <NSObject>
@end

ICEGRID_API @interface ICEGRIDLoadBalancingPolicy : ICEServant
{
    NSString *nReplicas;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *nReplicas;

-(id) init;
-(id) init:(NSString*)nReplicas;
+(id) loadBalancingPolicy;
+(id) loadBalancingPolicy:(NSString*)nReplicas;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @protocol ICEGRIDRandomLoadBalancingPolicy <ICEGRIDLoadBalancingPolicy>
@end

ICEGRID_API @interface ICEGRIDRandomLoadBalancingPolicy : ICEGRIDLoadBalancingPolicy
+(id) randomLoadBalancingPolicy;
+(id) randomLoadBalancingPolicy:(NSString*)nReplicas;
// This class also overrides copyWithZone:
@end

ICEGRID_API @protocol ICEGRIDOrderedLoadBalancingPolicy <ICEGRIDLoadBalancingPolicy>
@end

ICEGRID_API @interface ICEGRIDOrderedLoadBalancingPolicy : ICEGRIDLoadBalancingPolicy
+(id) orderedLoadBalancingPolicy;
+(id) orderedLoadBalancingPolicy:(NSString*)nReplicas;
// This class also overrides copyWithZone:
@end

ICEGRID_API @protocol ICEGRIDRoundRobinLoadBalancingPolicy <ICEGRIDLoadBalancingPolicy>
@end

ICEGRID_API @interface ICEGRIDRoundRobinLoadBalancingPolicy : ICEGRIDLoadBalancingPolicy
+(id) roundRobinLoadBalancingPolicy;
+(id) roundRobinLoadBalancingPolicy:(NSString*)nReplicas;
// This class also overrides copyWithZone:
@end

ICEGRID_API @protocol ICEGRIDAdaptiveLoadBalancingPolicy <ICEGRIDLoadBalancingPolicy>
@end

ICEGRID_API @interface ICEGRIDAdaptiveLoadBalancingPolicy : ICEGRIDLoadBalancingPolicy
{
    NSString *loadSample;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *loadSample;

-(id) init;
-(id) init:(NSString*)nReplicas loadSample:(NSString*)loadSample;
+(id) adaptiveLoadBalancingPolicy;
+(id) adaptiveLoadBalancingPolicy:(NSString*)nReplicas loadSample:(NSString*)loadSample;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDReplicaGroupDescriptor : NSObject <NSCopying>
{
    @private
        NSString *id_;
        ICEGRIDLoadBalancingPolicy *loadBalancing;
        NSString *proxyOptions;
        ICEGRIDObjectDescriptorSeq *objects;
        NSString *description_;
        NSString *filter;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDLoadBalancingPolicy *loadBalancing;
@property(nonatomic, ICE_STRONG_ATTR) NSString *proxyOptions;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDObjectDescriptorSeq *objects;
@property(nonatomic, ICE_STRONG_ATTR) NSString *description_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *filter;

-(id) init;
-(id) init:(NSString*)id_ loadBalancing:(ICEGRIDLoadBalancingPolicy*)loadBalancing proxyOptions:(NSString*)proxyOptions objects:(ICEGRIDObjectDescriptorSeq*)objects description:(NSString*)description filter:(NSString*)filter;
+(id) replicaGroupDescriptor;
+(id) replicaGroupDescriptor:(NSString*)id_ loadBalancing:(ICEGRIDLoadBalancingPolicy*)loadBalancing proxyOptions:(NSString*)proxyOptions objects:(ICEGRIDObjectDescriptorSeq*)objects description:(NSString*)description filter:(NSString*)filter;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDReplicaGroupDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableReplicaGroupDescriptorSeq;

ICEGRID_API @interface ICEGRIDApplicationDescriptor : NSObject <NSCopying>
{
    @private
        NSString *name;
        ICEGRIDStringStringDict *variables;
        ICEGRIDReplicaGroupDescriptorSeq *replicaGroups;
        ICEGRIDTemplateDescriptorDict *serverTemplates;
        ICEGRIDTemplateDescriptorDict *serviceTemplates;
        ICEGRIDNodeDescriptorDict *nodes;
        ICEGRIDDistributionDescriptor *distrib;
        NSString *description_;
        ICEGRIDPropertySetDescriptorDict *propertySets;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDStringStringDict *variables;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDReplicaGroupDescriptorSeq *replicaGroups;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDTemplateDescriptorDict *serverTemplates;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDTemplateDescriptorDict *serviceTemplates;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDNodeDescriptorDict *nodes;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDDistributionDescriptor *distrib;
@property(nonatomic, ICE_STRONG_ATTR) NSString *description_;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertySetDescriptorDict *propertySets;

-(id) init;
-(id) init:(NSString*)name variables:(ICEGRIDStringStringDict*)variables replicaGroups:(ICEGRIDReplicaGroupDescriptorSeq*)replicaGroups serverTemplates:(ICEGRIDTemplateDescriptorDict*)serverTemplates serviceTemplates:(ICEGRIDTemplateDescriptorDict*)serviceTemplates nodes:(ICEGRIDNodeDescriptorDict*)nodes distrib:(ICEGRIDDistributionDescriptor*)distrib description:(NSString*)description propertySets:(ICEGRIDPropertySetDescriptorDict*)propertySets;
+(id) applicationDescriptor;
+(id) applicationDescriptor:(NSString*)name variables:(ICEGRIDStringStringDict*)variables replicaGroups:(ICEGRIDReplicaGroupDescriptorSeq*)replicaGroups serverTemplates:(ICEGRIDTemplateDescriptorDict*)serverTemplates serviceTemplates:(ICEGRIDTemplateDescriptorDict*)serviceTemplates nodes:(ICEGRIDNodeDescriptorDict*)nodes distrib:(ICEGRIDDistributionDescriptor*)distrib description:(NSString*)description propertySets:(ICEGRIDPropertySetDescriptorDict*)propertySets;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDApplicationDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableApplicationDescriptorSeq;

ICEGRID_API @protocol ICEGRIDBoxedString <NSObject>
@end

ICEGRID_API @interface ICEGRIDBoxedString : ICEServant
{
    NSString *value;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *value;

-(id) init;
-(id) init:(NSString*)value;
+(id) boxedString;
+(id) boxedString:(NSString*)value;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDNodeUpdateDescriptor : NSObject <NSCopying>
{
    @private
        NSString *name;
        ICEGRIDBoxedString *description_;
        ICEGRIDStringStringDict *variables;
        ICEStringSeq *removeVariables;
        ICEGRIDPropertySetDescriptorDict *propertySets;
        ICEStringSeq *removePropertySets;
        ICEGRIDServerInstanceDescriptorSeq *serverInstances;
        ICEGRIDServerDescriptorSeq *servers;
        ICEStringSeq *removeServers;
        ICEGRIDBoxedString *loadFactor;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDBoxedString *description_;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDStringStringDict *variables;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removeVariables;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertySetDescriptorDict *propertySets;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removePropertySets;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDServerInstanceDescriptorSeq *serverInstances;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDServerDescriptorSeq *servers;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removeServers;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDBoxedString *loadFactor;

-(id) init;
-(id) init:(NSString*)name description:(ICEGRIDBoxedString*)description variables:(ICEGRIDStringStringDict*)variables removeVariables:(ICEStringSeq*)removeVariables propertySets:(ICEGRIDPropertySetDescriptorDict*)propertySets removePropertySets:(ICEStringSeq*)removePropertySets serverInstances:(ICEGRIDServerInstanceDescriptorSeq*)serverInstances servers:(ICEGRIDServerDescriptorSeq*)servers removeServers:(ICEStringSeq*)removeServers loadFactor:(ICEGRIDBoxedString*)loadFactor;
+(id) nodeUpdateDescriptor;
+(id) nodeUpdateDescriptor:(NSString*)name description:(ICEGRIDBoxedString*)description variables:(ICEGRIDStringStringDict*)variables removeVariables:(ICEStringSeq*)removeVariables propertySets:(ICEGRIDPropertySetDescriptorDict*)propertySets removePropertySets:(ICEStringSeq*)removePropertySets serverInstances:(ICEGRIDServerInstanceDescriptorSeq*)serverInstances servers:(ICEGRIDServerDescriptorSeq*)servers removeServers:(ICEStringSeq*)removeServers loadFactor:(ICEGRIDBoxedString*)loadFactor;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICEGRIDNodeUpdateDescriptorSeq;
typedef NSMutableArray ICEGRIDMutableNodeUpdateDescriptorSeq;

ICEGRID_API @protocol ICEGRIDBoxedDistributionDescriptor <NSObject>
@end

ICEGRID_API @interface ICEGRIDBoxedDistributionDescriptor : ICEServant
{
    ICEGRIDDistributionDescriptor *value;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDDistributionDescriptor *value;

-(id) init;
-(id) init:(ICEGRIDDistributionDescriptor*)value;
+(id) boxedDistributionDescriptor;
+(id) boxedDistributionDescriptor:(ICEGRIDDistributionDescriptor*)value;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDApplicationUpdateDescriptor : NSObject <NSCopying>
{
    @private
        NSString *name;
        ICEGRIDBoxedString *description_;
        ICEGRIDBoxedDistributionDescriptor *distrib;
        ICEGRIDStringStringDict *variables;
        ICEStringSeq *removeVariables;
        ICEGRIDPropertySetDescriptorDict *propertySets;
        ICEStringSeq *removePropertySets;
        ICEGRIDReplicaGroupDescriptorSeq *replicaGroups;
        ICEStringSeq *removeReplicaGroups;
        ICEGRIDTemplateDescriptorDict *serverTemplates;
        ICEStringSeq *removeServerTemplates;
        ICEGRIDTemplateDescriptorDict *serviceTemplates;
        ICEStringSeq *removeServiceTemplates;
        ICEGRIDNodeUpdateDescriptorSeq *nodes;
        ICEStringSeq *removeNodes;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDBoxedString *description_;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDBoxedDistributionDescriptor *distrib;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDStringStringDict *variables;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removeVariables;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDPropertySetDescriptorDict *propertySets;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removePropertySets;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDReplicaGroupDescriptorSeq *replicaGroups;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removeReplicaGroups;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDTemplateDescriptorDict *serverTemplates;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removeServerTemplates;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDTemplateDescriptorDict *serviceTemplates;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removeServiceTemplates;
@property(nonatomic, ICE_STRONG_ATTR) ICEGRIDNodeUpdateDescriptorSeq *nodes;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *removeNodes;

-(id) init;
-(id) init:(NSString*)name description:(ICEGRIDBoxedString*)description distrib:(ICEGRIDBoxedDistributionDescriptor*)distrib variables:(ICEGRIDStringStringDict*)variables removeVariables:(ICEStringSeq*)removeVariables propertySets:(ICEGRIDPropertySetDescriptorDict*)propertySets removePropertySets:(ICEStringSeq*)removePropertySets replicaGroups:(ICEGRIDReplicaGroupDescriptorSeq*)replicaGroups removeReplicaGroups:(ICEStringSeq*)removeReplicaGroups serverTemplates:(ICEGRIDTemplateDescriptorDict*)serverTemplates removeServerTemplates:(ICEStringSeq*)removeServerTemplates serviceTemplates:(ICEGRIDTemplateDescriptorDict*)serviceTemplates removeServiceTemplates:(ICEStringSeq*)removeServiceTemplates nodes:(ICEGRIDNodeUpdateDescriptorSeq*)nodes removeNodes:(ICEStringSeq*)removeNodes;
+(id) applicationUpdateDescriptor;
+(id) applicationUpdateDescriptor:(NSString*)name description:(ICEGRIDBoxedString*)description distrib:(ICEGRIDBoxedDistributionDescriptor*)distrib variables:(ICEGRIDStringStringDict*)variables removeVariables:(ICEStringSeq*)removeVariables propertySets:(ICEGRIDPropertySetDescriptorDict*)propertySets removePropertySets:(ICEStringSeq*)removePropertySets replicaGroups:(ICEGRIDReplicaGroupDescriptorSeq*)replicaGroups removeReplicaGroups:(ICEStringSeq*)removeReplicaGroups serverTemplates:(ICEGRIDTemplateDescriptorDict*)serverTemplates removeServerTemplates:(ICEStringSeq*)removeServerTemplates serviceTemplates:(ICEGRIDTemplateDescriptorDict*)serviceTemplates removeServiceTemplates:(ICEStringSeq*)removeServiceTemplates nodes:(ICEGRIDNodeUpdateDescriptorSeq*)nodes removeNodes:(ICEStringSeq*)removeNodes;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICEGRID_API @protocol ICEGRIDCommunicatorDescriptorPrx <ICEObjectPrx>
@end

ICEGRID_API @protocol ICEGRIDServerDescriptorPrx <ICEGRIDCommunicatorDescriptorPrx>
@end

ICEGRID_API @protocol ICEGRIDServiceDescriptorPrx <ICEGRIDCommunicatorDescriptorPrx>
@end

ICEGRID_API @protocol ICEGRIDIceBoxDescriptorPrx <ICEGRIDServerDescriptorPrx>
@end

ICEGRID_API @protocol ICEGRIDLoadBalancingPolicyPrx <ICEObjectPrx>
@end

ICEGRID_API @protocol ICEGRIDRandomLoadBalancingPolicyPrx <ICEGRIDLoadBalancingPolicyPrx>
@end

ICEGRID_API @protocol ICEGRIDOrderedLoadBalancingPolicyPrx <ICEGRIDLoadBalancingPolicyPrx>
@end

ICEGRID_API @protocol ICEGRIDRoundRobinLoadBalancingPolicyPrx <ICEGRIDLoadBalancingPolicyPrx>
@end

ICEGRID_API @protocol ICEGRIDAdaptiveLoadBalancingPolicyPrx <ICEGRIDLoadBalancingPolicyPrx>
@end

ICEGRID_API @protocol ICEGRIDBoxedStringPrx <ICEObjectPrx>
@end

ICEGRID_API @protocol ICEGRIDBoxedDistributionDescriptorPrx <ICEObjectPrx>
@end

ICEGRID_API @interface ICEGRIDCommunicatorDescriptorPrx : ICEObjectPrx <ICEGRIDCommunicatorDescriptorPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDServerDescriptorPrx : ICEObjectPrx <ICEGRIDServerDescriptorPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDServiceDescriptorPrx : ICEObjectPrx <ICEGRIDServiceDescriptorPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDIceBoxDescriptorPrx : ICEObjectPrx <ICEGRIDIceBoxDescriptorPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDLoadBalancingPolicyPrx : ICEObjectPrx <ICEGRIDLoadBalancingPolicyPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDRandomLoadBalancingPolicyPrx : ICEObjectPrx <ICEGRIDRandomLoadBalancingPolicyPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDOrderedLoadBalancingPolicyPrx : ICEObjectPrx <ICEGRIDOrderedLoadBalancingPolicyPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDRoundRobinLoadBalancingPolicyPrx : ICEObjectPrx <ICEGRIDRoundRobinLoadBalancingPolicyPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDAdaptiveLoadBalancingPolicyPrx : ICEObjectPrx <ICEGRIDAdaptiveLoadBalancingPolicyPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDBoxedStringPrx : ICEObjectPrx <ICEGRIDBoxedStringPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDBoxedDistributionDescriptorPrx : ICEObjectPrx <ICEGRIDBoxedDistributionDescriptorPrx>
+(NSString *) ice_staticId;
@end

ICEGRID_API @interface ICEGRIDStringStringDictHelper : ICEDictionaryHelper
@end

ICEGRID_API @interface ICEGRIDPropertyDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDPropertyDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDPropertySetDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDPropertySetDescriptorDictHelper : ICEDictionaryHelper
@end

ICEGRID_API @interface ICEGRIDObjectDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDObjectDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDAdapterDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDAdapterDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDDbEnvDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDDbEnvDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDCommunicatorDescriptorPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDCommunicatorDescriptorHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDDistributionDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDServerDescriptorPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDServerDescriptorHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDServerDescriptorSeqHelper : ICEObjectSequenceHelper
@end

ICEGRID_API @interface ICEGRIDServiceDescriptorPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDServiceDescriptorHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDServiceDescriptorSeqHelper : ICEObjectSequenceHelper
@end

ICEGRID_API @interface ICEGRIDServerInstanceDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDServerInstanceDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDTemplateDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDTemplateDescriptorDictHelper : ICEDictionaryHelper
@end

ICEGRID_API @interface ICEGRIDServiceInstanceDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDServiceInstanceDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDIceBoxDescriptorPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDIceBoxDescriptorHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDNodeDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDNodeDescriptorDictHelper : ICEDictionaryHelper
@end

ICEGRID_API @interface ICEGRIDLoadBalancingPolicyPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDLoadBalancingPolicyHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDRandomLoadBalancingPolicyPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDRandomLoadBalancingPolicyHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDOrderedLoadBalancingPolicyPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDOrderedLoadBalancingPolicyHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDRoundRobinLoadBalancingPolicyPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDRoundRobinLoadBalancingPolicyHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDAdaptiveLoadBalancingPolicyPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDAdaptiveLoadBalancingPolicyHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDReplicaGroupDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDReplicaGroupDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDApplicationDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDApplicationDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDBoxedStringPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDBoxedStringHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDNodeUpdateDescriptorHelper : ICEStructHelper
@end

ICEGRID_API @interface ICEGRIDNodeUpdateDescriptorSeqHelper : ICEArraySequenceHelper
@end

ICEGRID_API @interface ICEGRIDBoxedDistributionDescriptorPrxHelper : ICEProxyHelper
@end

ICEGRID_API @interface ICEGRIDBoxedDistributionDescriptorHelper : ICEObjectHelper
@end

ICEGRID_API @interface ICEGRIDApplicationUpdateDescriptorHelper : ICEStructHelper
@end
