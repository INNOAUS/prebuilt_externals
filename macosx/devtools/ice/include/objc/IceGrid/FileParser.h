//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `FileParser.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/SlicedData.h>
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

@class ICEGRIDFileParser;
@protocol ICEGRIDFileParser;

@class ICEGRIDFileParserPrx;
@protocol ICEGRIDFileParserPrx;

ICEGRID_API @interface ICEGRIDParseException : ICEUserException
{
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) parseException;
+(id) parseException:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @protocol ICEGRIDFileParser <NSObject>
-(ICEGRIDApplicationDescriptor*) parse:(NSMutableString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDFileParser : ICEServant
+(id) fileParser;
+(void) iceD_parse:(id<ICEGRIDFileParser>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDFileParserPrx <ICEObjectPrx>
-(ICEGRIDApplicationDescriptor*) parse:(NSString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy;
-(ICEGRIDApplicationDescriptor*) parse:(NSString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_parse:(NSString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy;
-(id<ICEAsyncResult>) begin_parse:(NSString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy context:(ICEContext *)context;
-(ICEGRIDApplicationDescriptor*) end_parse:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_parse:(NSString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy response:(void(^)(ICEGRIDApplicationDescriptor*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_parse:(NSString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy context:(ICEContext *)context response:(void(^)(ICEGRIDApplicationDescriptor*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_parse:(NSString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy response:(void(^)(ICEGRIDApplicationDescriptor*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_parse:(NSString*)xmlFile adminProxy:(id<ICEGRIDAdminPrx>)adminProxy context:(ICEContext *)context response:(void(^)(ICEGRIDApplicationDescriptor*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @interface ICEGRIDFileParserPrx : ICEObjectPrx <ICEGRIDFileParserPrx>
+(NSString *) ice_staticId;
+(void) iceI_parse_marshal:(NSString*)iceP_xmlFile adminProxy:(id<ICEGRIDAdminPrx>)iceP_adminProxy os:(id<ICEOutputStream>)ostr;
+(ICEGRIDApplicationDescriptor*) iceI_parse_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICEGRID_API @interface ICEGRIDFileParserPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDFileParserHelper;
