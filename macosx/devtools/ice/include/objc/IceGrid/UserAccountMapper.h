//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `UserAccountMapper.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>

#ifndef ICEGRID_API
#   if defined(ICE_STATIC_LIBS)
#       define ICEGRID_API /**/
#   elif defined(ICEGRID_API_EXPORTS)
#       define ICEGRID_API ICE_DECLSPEC_EXPORT
#   else
#       define ICEGRID_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEGRIDUserAccountMapper;
@protocol ICEGRIDUserAccountMapper;

@class ICEGRIDUserAccountMapperPrx;
@protocol ICEGRIDUserAccountMapperPrx;

ICEGRID_API @interface ICEGRIDUserAccountNotFoundException : ICEUserException
-(NSString *) ice_id;
+(id) userAccountNotFoundException;
@end

ICEGRID_API @protocol ICEGRIDUserAccountMapper <NSObject>
-(NSString*) getUserAccount:(NSMutableString*)user current:(ICECurrent *)current;
@end

ICEGRID_API @interface ICEGRIDUserAccountMapper : ICEServant
+(id) userAccountMapper;
+(void) iceD_getUserAccount:(id<ICEGRIDUserAccountMapper>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICEGRID_API @protocol ICEGRIDUserAccountMapperPrx <ICEObjectPrx>
-(NSMutableString*) getUserAccount:(NSString*)user;
-(NSMutableString*) getUserAccount:(NSString*)user context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getUserAccount:(NSString*)user;
-(id<ICEAsyncResult>) begin_getUserAccount:(NSString*)user context:(ICEContext *)context;
-(NSMutableString*) end_getUserAccount:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getUserAccount:(NSString*)user response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getUserAccount:(NSString*)user context:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getUserAccount:(NSString*)user response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getUserAccount:(NSString*)user context:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICEGRID_API @interface ICEGRIDUserAccountMapperPrx : ICEObjectPrx <ICEGRIDUserAccountMapperPrx>
+(NSString *) ice_staticId;
+(void) iceI_getUserAccount_marshal:(NSString*)iceP_user os:(id<ICEOutputStream>)ostr;
+(NSMutableString*) iceI_getUserAccount_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICEGRID_API @interface ICEGRIDUserAccountMapperPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEGRIDUserAccountMapperHelper;
