//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Identity.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>

#ifndef ICE_API
#   if defined(ICE_STATIC_LIBS)
#       define ICE_API /**/
#   elif defined(ICE_API_EXPORTS)
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

ICE_API @interface ICEIdentity : NSObject <NSCopying>
{
    @private
        NSString *name;
        NSString *category;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, ICE_STRONG_ATTR) NSString *category;

-(id) init;
-(id) init:(NSString*)name category:(NSString*)category;
+(id) identity;
+(id) identity:(NSString*)name category:(NSString*)category;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSDictionary ICEObjectDict;
typedef NSMutableDictionary ICEMutableObjectDict;

typedef NSArray ICEIdentitySeq;
typedef NSMutableArray ICEMutableIdentitySeq;

ICE_API @interface ICEIdentityHelper : ICEStructHelper
@end

ICE_API @interface ICEIdentitySeqHelper : ICEArraySequenceHelper
@end
