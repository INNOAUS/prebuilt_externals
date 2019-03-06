//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Version.ice'

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

ICE_API @interface ICEProtocolVersion : NSObject <NSCopying>
{
    @private
        ICEByte major;
        ICEByte minor;
}

@property(nonatomic, assign) ICEByte major;
@property(nonatomic, assign) ICEByte minor;

-(id) init:(ICEByte)major minor:(ICEByte)minor;
+(id) protocolVersion;
+(id) protocolVersion:(ICEByte)major minor:(ICEByte)minor;
// This class also overrides copyWithZone:
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICE_API @interface ICEEncodingVersion : NSObject <NSCopying>
{
    @private
        ICEByte major;
        ICEByte minor;
}

@property(nonatomic, assign) ICEByte major;
@property(nonatomic, assign) ICEByte minor;

-(id) init:(ICEByte)major minor:(ICEByte)minor;
+(id) encodingVersion;
+(id) encodingVersion:(ICEByte)major minor:(ICEByte)minor;
// This class also overrides copyWithZone:
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

ICE_API @interface ICEProtocolVersionHelper : ICEStructHelper
@end

ICE_API @interface ICEEncodingVersionHelper : ICEStructHelper
@end
