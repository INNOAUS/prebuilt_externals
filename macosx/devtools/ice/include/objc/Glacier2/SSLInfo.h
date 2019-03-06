//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `SSLInfo.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/BuiltinSequences.h>

#ifndef GLACIER2_API
#   if defined(ICE_STATIC_LIBS)
#       define GLACIER2_API /**/
#   elif defined(GLACIER2_API_EXPORTS)
#       define GLACIER2_API ICE_DECLSPEC_EXPORT
#   else
#       define GLACIER2_API ICE_DECLSPEC_IMPORT
#   endif
#endif

GLACIER2_API @interface GLACIER2SSLInfo : NSObject <NSCopying>
{
    @private
        NSString *remoteHost;
        ICEInt remotePort;
        NSString *localHost;
        ICEInt localPort;
        NSString *cipher;
        ICEStringSeq *certs;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *remoteHost;
@property(nonatomic, assign) ICEInt remotePort;
@property(nonatomic, ICE_STRONG_ATTR) NSString *localHost;
@property(nonatomic, assign) ICEInt localPort;
@property(nonatomic, ICE_STRONG_ATTR) NSString *cipher;
@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *certs;

-(id) init;
-(id) init:(NSString*)remoteHost remotePort:(ICEInt)remotePort localHost:(NSString*)localHost localPort:(ICEInt)localPort cipher:(NSString*)cipher certs:(ICEStringSeq*)certs;
+(id) sslInfo;
+(id) sSLInfo ICE_DEPRECATED_API("use sslInfo instead");
+(id) sslInfo:(NSString*)remoteHost remotePort:(ICEInt)remotePort localHost:(NSString*)localHost localPort:(ICEInt)localPort cipher:(NSString*)cipher certs:(ICEStringSeq*)certs;
+(id) sSLInfo:(NSString*)remoteHost remotePort:(ICEInt)remotePort localHost:(NSString*)localHost localPort:(ICEInt)localPort cipher:(NSString*)cipher certs:(ICEStringSeq*)certs ICE_DEPRECATED_API("use sslInfo instead");
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

GLACIER2_API @interface GLACIER2SSLInfoHelper : ICEStructHelper
@end
