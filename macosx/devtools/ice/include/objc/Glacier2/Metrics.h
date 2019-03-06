//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Metrics.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/Metrics.h>

#ifndef GLACIER2_API
#   if defined(ICE_STATIC_LIBS)
#       define GLACIER2_API /**/
#   elif defined(GLACIER2_API_EXPORTS)
#       define GLACIER2_API ICE_DECLSPEC_EXPORT
#   else
#       define GLACIER2_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEMXSessionMetrics;
@protocol ICEMXSessionMetrics;

@class ICEMXSessionMetricsPrx;
@protocol ICEMXSessionMetricsPrx;

GLACIER2_API @protocol ICEMXSessionMetrics <ICEMXMetrics>
@end

GLACIER2_API @interface ICEMXSessionMetrics : ICEMXMetrics
{
    ICEInt forwardedClient;
    ICEInt forwardedServer;
    ICEInt routingTableSize;
    ICEInt queuedClient;
    ICEInt queuedServer;
    ICEInt overriddenClient;
    ICEInt overriddenServer;
}

@property(nonatomic, assign) ICEInt forwardedClient;
@property(nonatomic, assign) ICEInt forwardedServer;
@property(nonatomic, assign) ICEInt routingTableSize;
@property(nonatomic, assign) ICEInt queuedClient;
@property(nonatomic, assign) ICEInt queuedServer;
@property(nonatomic, assign) ICEInt overriddenClient;
@property(nonatomic, assign) ICEInt overriddenServer;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures forwardedClient:(ICEInt)forwardedClient forwardedServer:(ICEInt)forwardedServer routingTableSize:(ICEInt)routingTableSize queuedClient:(ICEInt)queuedClient queuedServer:(ICEInt)queuedServer overriddenClient:(ICEInt)overriddenClient overriddenServer:(ICEInt)overriddenServer;
+(id) sessionMetrics;
+(id) sessionMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures forwardedClient:(ICEInt)forwardedClient forwardedServer:(ICEInt)forwardedServer routingTableSize:(ICEInt)routingTableSize queuedClient:(ICEInt)queuedClient queuedServer:(ICEInt)queuedServer overriddenClient:(ICEInt)overriddenClient overriddenServer:(ICEInt)overriddenServer;
// This class also overrides copyWithZone:
@end

GLACIER2_API @protocol ICEMXSessionMetricsPrx <ICEMXMetricsPrx>
@end

GLACIER2_API @interface ICEMXSessionMetricsPrx : ICEObjectPrx <ICEMXSessionMetricsPrx>
+(NSString *) ice_staticId;
@end

GLACIER2_API @interface ICEMXSessionMetricsPrxHelper : ICEProxyHelper
@end

GLACIER2_API @interface ICEMXSessionMetricsHelper : ICEObjectHelper
@end
