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

#ifndef ICESTORM_API
#   if defined(ICE_STATIC_LIBS)
#       define ICESTORM_API /**/
#   elif defined(ICESTORM_API_EXPORTS)
#       define ICESTORM_API ICE_DECLSPEC_EXPORT
#   else
#       define ICESTORM_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEMXTopicMetrics;
@protocol ICEMXTopicMetrics;

@class ICEMXSubscriberMetrics;
@protocol ICEMXSubscriberMetrics;

@class ICEMXTopicMetricsPrx;
@protocol ICEMXTopicMetricsPrx;

@class ICEMXSubscriberMetricsPrx;
@protocol ICEMXSubscriberMetricsPrx;

ICESTORM_API @protocol ICEMXTopicMetrics <ICEMXMetrics>
@end

ICESTORM_API @interface ICEMXTopicMetrics : ICEMXMetrics
{
    ICELong published;
    ICELong forwarded;
}

@property(nonatomic, assign) ICELong published;
@property(nonatomic, assign) ICELong forwarded;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures published:(ICELong)published forwarded:(ICELong)forwarded;
+(id) topicMetrics;
+(id) topicMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures published:(ICELong)published forwarded:(ICELong)forwarded;
// This class also overrides copyWithZone:
@end

ICESTORM_API @protocol ICEMXSubscriberMetrics <ICEMXMetrics>
@end

ICESTORM_API @interface ICEMXSubscriberMetrics : ICEMXMetrics
{
    ICEInt queued;
    ICEInt outstanding;
    ICELong delivered;
}

@property(nonatomic, assign) ICEInt queued;
@property(nonatomic, assign) ICEInt outstanding;
@property(nonatomic, assign) ICELong delivered;

-(id) init;
-(id) init:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures queued:(ICEInt)queued outstanding:(ICEInt)outstanding delivered:(ICELong)delivered;
+(id) subscriberMetrics;
+(id) subscriberMetrics:(NSString*)id_ total:(ICELong)total current:(ICEInt)current totalLifetime:(ICELong)totalLifetime failures:(ICEInt)failures queued:(ICEInt)queued outstanding:(ICEInt)outstanding delivered:(ICELong)delivered;
// This class also overrides copyWithZone:
@end

ICESTORM_API @protocol ICEMXTopicMetricsPrx <ICEMXMetricsPrx>
@end

ICESTORM_API @protocol ICEMXSubscriberMetricsPrx <ICEMXMetricsPrx>
@end

ICESTORM_API @interface ICEMXTopicMetricsPrx : ICEObjectPrx <ICEMXTopicMetricsPrx>
+(NSString *) ice_staticId;
@end

ICESTORM_API @interface ICEMXSubscriberMetricsPrx : ICEObjectPrx <ICEMXSubscriberMetricsPrx>
+(NSString *) ice_staticId;
@end

ICESTORM_API @interface ICEMXTopicMetricsPrxHelper : ICEProxyHelper
@end

ICESTORM_API @interface ICEMXTopicMetricsHelper : ICEObjectHelper
@end

ICESTORM_API @interface ICEMXSubscriberMetricsPrxHelper : ICEProxyHelper
@end

ICESTORM_API @interface ICEMXSubscriberMetricsHelper : ICEObjectHelper
@end
