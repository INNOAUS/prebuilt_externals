//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `IceStorm.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/Identity.h>
#import <objc/Ice/SliceChecksumDict.h>
#import <objc/IceStorm/Metrics.h>

#ifndef ICESTORM_API
#   if defined(ICE_STATIC_LIBS)
#       define ICESTORM_API /**/
#   elif defined(ICESTORM_API_EXPORTS)
#       define ICESTORM_API ICE_DECLSPEC_EXPORT
#   else
#       define ICESTORM_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICESTORMTopic;
@protocol ICESTORMTopic;

@class ICESTORMTopicManager;
@protocol ICESTORMTopicManager;

@class ICESTORMFinder;
@protocol ICESTORMFinder;

@class ICESTORMTopicPrx;
@protocol ICESTORMTopicPrx;

@class ICESTORMTopicManagerPrx;
@protocol ICESTORMTopicManagerPrx;

@class ICESTORMFinderPrx;
@protocol ICESTORMFinderPrx;

ICESTORM_API @interface ICESTORMLinkInfo : NSObject <NSCopying>
{
    @private
        id<ICESTORMTopicPrx> theTopic;
        NSString *name;
        ICEInt cost;
}

@property(nonatomic, ICE_STRONG_ATTR) id<ICESTORMTopicPrx> theTopic;
@property(nonatomic, ICE_STRONG_ATTR) NSString *name;
@property(nonatomic, assign) ICEInt cost;

-(id) init;
-(id) init:(id<ICESTORMTopicPrx>)theTopic name:(NSString*)name cost:(ICEInt)cost;
+(id) linkInfo;
+(id) linkInfo:(id<ICESTORMTopicPrx>)theTopic name:(NSString*)name cost:(ICEInt)cost;
// This class also overrides copyWithZone:
// This class also overrides dealloc
// This class also overrides hash, and isEqual:
-(void) iceWrite:(id<ICEOutputStream>)ostr;
-(void) iceRead:(id<ICEInputStream>)istr;
@end

typedef NSArray ICESTORMLinkInfoSeq;
typedef NSMutableArray ICESTORMMutableLinkInfoSeq;

typedef NSDictionary ICESTORMQoS;
typedef NSMutableDictionary ICESTORMMutableQoS;

ICESTORM_API @interface ICESTORMLinkExists : ICEUserException
{
    NSString *name_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name;
+(id) linkExists;
+(id) linkExists:(NSString*)name;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICESTORM_API @interface ICESTORMNoSuchLink : ICEUserException
{
    NSString *name_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name;
+(id) noSuchLink;
+(id) noSuchLink:(NSString*)name;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICESTORM_API @interface ICESTORMAlreadySubscribed : ICEUserException
-(NSString *) ice_id;
+(id) alreadySubscribed;
@end

ICESTORM_API @interface ICESTORMInvalidSubscriber : ICEUserException
{
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) invalidSubscriber;
+(id) invalidSubscriber:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICESTORM_API @interface ICESTORMBadQoS : ICEUserException
{
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) badQoS;
+(id) badQoS:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICESTORM_API @protocol ICESTORMTopic <NSObject>
-(NSString*) getName:(ICECurrent *)current;
-(id<ICEObjectPrx>) getPublisher:(ICECurrent *)current;
-(id<ICEObjectPrx>) getNonReplicatedPublisher:(ICECurrent *)current;
-(id<ICEObjectPrx>) subscribeAndGetPublisher:(ICESTORMMutableQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber current:(ICECurrent *)current;
-(void) unsubscribe:(id<ICEObjectPrx>)subscriber current:(ICECurrent *)current;
-(void) link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost current:(ICECurrent *)current;
-(void) unlink:(id<ICESTORMTopicPrx>)linkTo current:(ICECurrent *)current;
-(ICESTORMLinkInfoSeq*) getLinkInfoSeq:(ICECurrent *)current;
-(ICEIdentitySeq*) getSubscribers:(ICECurrent *)current;
-(void) destroy:(ICECurrent *)current;
@end

ICESTORM_API @interface ICESTORMTopic : ICEServant
+(id) topic;
+(void) iceD_getName:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getPublisher:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getNonReplicatedPublisher:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_subscribeAndGetPublisher:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_unsubscribe:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_link:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_unlink:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getLinkInfoSeq:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getSubscribers:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_destroy:(id<ICESTORMTopic>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

typedef NSDictionary ICESTORMTopicDict;
typedef NSMutableDictionary ICESTORMMutableTopicDict;

ICESTORM_API @interface ICESTORMTopicExists : ICEUserException
{
    NSString *name_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name;
+(id) topicExists;
+(id) topicExists:(NSString*)name;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICESTORM_API @interface ICESTORMNoSuchTopic : ICEUserException
{
    NSString *name_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name;
+(id) noSuchTopic;
+(id) noSuchTopic:(NSString*)name;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICESTORM_API @protocol ICESTORMTopicManager <NSObject>
-(id<ICESTORMTopicPrx>) create:(NSMutableString*)name current:(ICECurrent *)current;
-(id<ICESTORMTopicPrx>) retrieve:(NSMutableString*)name current:(ICECurrent *)current;
-(ICESTORMTopicDict*) retrieveAll:(ICECurrent *)current;
-(ICESliceChecksumDict*) getSliceChecksums:(ICECurrent *)current;
@end

ICESTORM_API @interface ICESTORMTopicManager : ICEServant
+(id) topicManager;
+(void) iceD_create:(id<ICESTORMTopicManager>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_retrieve:(id<ICESTORMTopicManager>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_retrieveAll:(id<ICESTORMTopicManager>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getSliceChecksums:(id<ICESTORMTopicManager>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICESTORM_API @protocol ICESTORMFinder <NSObject>
-(id<ICESTORMTopicManagerPrx>) getTopicManager:(ICECurrent *)current;
@end

ICESTORM_API @interface ICESTORMFinder : ICEServant
+(id) finder;
+(void) iceD_getTopicManager:(id<ICESTORMFinder>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICESTORM_API @protocol ICESTORMTopicPrx <ICEObjectPrx>
-(NSMutableString*) getName;
-(NSMutableString*) getName:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getName;
-(id<ICEAsyncResult>) begin_getName:(ICEContext *)context;
-(NSMutableString*) end_getName:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getName:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getName:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getName:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getName:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) getPublisher;
-(id<ICEObjectPrx>) getPublisher:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getPublisher;
-(id<ICEAsyncResult>) begin_getPublisher:(ICEContext *)context;
-(id<ICEObjectPrx>) end_getPublisher:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getPublisher:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getPublisher:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getPublisher:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getPublisher:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) getNonReplicatedPublisher;
-(id<ICEObjectPrx>) getNonReplicatedPublisher:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getNonReplicatedPublisher;
-(id<ICEAsyncResult>) begin_getNonReplicatedPublisher:(ICEContext *)context;
-(id<ICEObjectPrx>) end_getNonReplicatedPublisher:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getNonReplicatedPublisher:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNonReplicatedPublisher:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getNonReplicatedPublisher:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getNonReplicatedPublisher:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEObjectPrx>) subscribeAndGetPublisher:(ICESTORMQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber;
-(id<ICEObjectPrx>) subscribeAndGetPublisher:(ICESTORMQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_subscribeAndGetPublisher:(ICESTORMQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber;
-(id<ICEAsyncResult>) begin_subscribeAndGetPublisher:(ICESTORMQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber context:(ICEContext *)context;
-(id<ICEObjectPrx>) end_subscribeAndGetPublisher:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_subscribeAndGetPublisher:(ICESTORMQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_subscribeAndGetPublisher:(ICESTORMQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_subscribeAndGetPublisher:(ICESTORMQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_subscribeAndGetPublisher:(ICESTORMQoS*)theQoS subscriber:(id<ICEObjectPrx>)subscriber context:(ICEContext *)context response:(void(^)(id<ICEObjectPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) unsubscribe:(id<ICEObjectPrx>)subscriber;
-(void) unsubscribe:(id<ICEObjectPrx>)subscriber context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_unsubscribe:(id<ICEObjectPrx>)subscriber;
-(id<ICEAsyncResult>) begin_unsubscribe:(id<ICEObjectPrx>)subscriber context:(ICEContext *)context;
-(void) end_unsubscribe:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_unsubscribe:(id<ICEObjectPrx>)subscriber response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_unsubscribe:(id<ICEObjectPrx>)subscriber context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_unsubscribe:(id<ICEObjectPrx>)subscriber response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_unsubscribe:(id<ICEObjectPrx>)subscriber context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost;
-(void) link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost;
-(id<ICEAsyncResult>) begin_link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost context:(ICEContext *)context;
-(void) end_link:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_link:(id<ICESTORMTopicPrx>)linkTo cost:(ICEInt)cost context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) unlink:(id<ICESTORMTopicPrx>)linkTo;
-(void) unlink:(id<ICESTORMTopicPrx>)linkTo context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_unlink:(id<ICESTORMTopicPrx>)linkTo;
-(id<ICEAsyncResult>) begin_unlink:(id<ICESTORMTopicPrx>)linkTo context:(ICEContext *)context;
-(void) end_unlink:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_unlink:(id<ICESTORMTopicPrx>)linkTo response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_unlink:(id<ICESTORMTopicPrx>)linkTo context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_unlink:(id<ICESTORMTopicPrx>)linkTo response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_unlink:(id<ICESTORMTopicPrx>)linkTo context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICESTORMMutableLinkInfoSeq*) getLinkInfoSeq;
-(ICESTORMMutableLinkInfoSeq*) getLinkInfoSeq:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getLinkInfoSeq;
-(id<ICEAsyncResult>) begin_getLinkInfoSeq:(ICEContext *)context;
-(ICESTORMMutableLinkInfoSeq*) end_getLinkInfoSeq:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getLinkInfoSeq:(void(^)(ICESTORMMutableLinkInfoSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLinkInfoSeq:(ICEContext *)context response:(void(^)(ICESTORMMutableLinkInfoSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getLinkInfoSeq:(void(^)(ICESTORMMutableLinkInfoSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getLinkInfoSeq:(ICEContext *)context response:(void(^)(ICESTORMMutableLinkInfoSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableIdentitySeq*) getSubscribers;
-(ICEMutableIdentitySeq*) getSubscribers:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getSubscribers;
-(id<ICEAsyncResult>) begin_getSubscribers:(ICEContext *)context;
-(ICEMutableIdentitySeq*) end_getSubscribers:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getSubscribers:(void(^)(ICEMutableIdentitySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSubscribers:(ICEContext *)context response:(void(^)(ICEMutableIdentitySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSubscribers:(void(^)(ICEMutableIdentitySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getSubscribers:(ICEContext *)context response:(void(^)(ICEMutableIdentitySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
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

ICESTORM_API @protocol ICESTORMTopicManagerPrx <ICEObjectPrx>
-(id<ICESTORMTopicPrx>) create:(NSString*)name;
-(id<ICESTORMTopicPrx>) create:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_create:(NSString*)name;
-(id<ICEAsyncResult>) begin_create:(NSString*)name context:(ICEContext *)context;
-(id<ICESTORMTopicPrx>) end_create:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_create:(NSString*)name response:(void(^)(id<ICESTORMTopicPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_create:(NSString*)name context:(ICEContext *)context response:(void(^)(id<ICESTORMTopicPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_create:(NSString*)name response:(void(^)(id<ICESTORMTopicPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_create:(NSString*)name context:(ICEContext *)context response:(void(^)(id<ICESTORMTopicPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICESTORMTopicPrx>) retrieve:(NSString*)name;
-(id<ICESTORMTopicPrx>) retrieve:(NSString*)name context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_retrieve:(NSString*)name;
-(id<ICEAsyncResult>) begin_retrieve:(NSString*)name context:(ICEContext *)context;
-(id<ICESTORMTopicPrx>) end_retrieve:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_retrieve:(NSString*)name response:(void(^)(id<ICESTORMTopicPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_retrieve:(NSString*)name context:(ICEContext *)context response:(void(^)(id<ICESTORMTopicPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_retrieve:(NSString*)name response:(void(^)(id<ICESTORMTopicPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_retrieve:(NSString*)name context:(ICEContext *)context response:(void(^)(id<ICESTORMTopicPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICESTORMMutableTopicDict*) retrieveAll;
-(ICESTORMMutableTopicDict*) retrieveAll:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_retrieveAll;
-(id<ICEAsyncResult>) begin_retrieveAll:(ICEContext *)context;
-(ICESTORMMutableTopicDict*) end_retrieveAll:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_retrieveAll:(void(^)(ICESTORMMutableTopicDict*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_retrieveAll:(ICEContext *)context response:(void(^)(ICESTORMMutableTopicDict*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_retrieveAll:(void(^)(ICESTORMMutableTopicDict*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_retrieveAll:(ICEContext *)context response:(void(^)(ICESTORMMutableTopicDict*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
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

ICESTORM_API @protocol ICESTORMFinderPrx <ICEObjectPrx>
-(id<ICESTORMTopicManagerPrx>) getTopicManager;
-(id<ICESTORMTopicManagerPrx>) getTopicManager:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getTopicManager;
-(id<ICEAsyncResult>) begin_getTopicManager:(ICEContext *)context;
-(id<ICESTORMTopicManagerPrx>) end_getTopicManager:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getTopicManager:(void(^)(id<ICESTORMTopicManagerPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getTopicManager:(ICEContext *)context response:(void(^)(id<ICESTORMTopicManagerPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getTopicManager:(void(^)(id<ICESTORMTopicManagerPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getTopicManager:(ICEContext *)context response:(void(^)(id<ICESTORMTopicManagerPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICESTORM_API @interface ICESTORMTopicPrx : ICEObjectPrx <ICESTORMTopicPrx>
+(NSString *) ice_staticId;
+(NSMutableString*) iceI_getName_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<ICEObjectPrx>) iceI_getPublisher_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<ICEObjectPrx>) iceI_getNonReplicatedPublisher_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_subscribeAndGetPublisher_marshal:(ICESTORMQoS*)iceP_theQoS subscriber:(id<ICEObjectPrx>)iceP_subscriber os:(id<ICEOutputStream>)ostr;
+(id<ICEObjectPrx>) iceI_subscribeAndGetPublisher_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_unsubscribe_marshal:(id<ICEObjectPrx>)iceP_subscriber os:(id<ICEOutputStream>)ostr;
+(void) iceI_link_marshal:(id<ICESTORMTopicPrx>)iceP_linkTo cost:(ICEInt)iceP_cost os:(id<ICEOutputStream>)ostr;
+(void) iceI_link_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_unlink_marshal:(id<ICESTORMTopicPrx>)iceP_linkTo os:(id<ICEOutputStream>)ostr;
+(void) iceI_unlink_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICESTORMMutableLinkInfoSeq*) iceI_getLinkInfoSeq_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEMutableIdentitySeq*) iceI_getSubscribers_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICESTORM_API @interface ICESTORMTopicManagerPrx : ICEObjectPrx <ICESTORMTopicManagerPrx>
+(NSString *) ice_staticId;
+(void) iceI_create_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(id<ICESTORMTopicPrx>) iceI_create_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_retrieve_marshal:(NSString*)iceP_name os:(id<ICEOutputStream>)ostr;
+(id<ICESTORMTopicPrx>) iceI_retrieve_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICESTORMMutableTopicDict*) iceI_retrieveAll_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEMutableSliceChecksumDict*) iceI_getSliceChecksums_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICESTORM_API @interface ICESTORMFinderPrx : ICEObjectPrx <ICESTORMFinderPrx>
+(NSString *) ice_staticId;
+(id<ICESTORMTopicManagerPrx>) iceI_getTopicManager_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

ICESTORM_API @interface ICESTORMLinkInfoHelper : ICEStructHelper
@end

ICESTORM_API @interface ICESTORMLinkInfoSeqHelper : ICEArraySequenceHelper
@end

ICESTORM_API @interface ICESTORMQoSHelper : ICEDictionaryHelper
@end

ICESTORM_API @interface ICESTORMTopicPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICESTORMTopicHelper;

ICESTORM_API @interface ICESTORMTopicDictHelper : ICEDictionaryHelper
@end

ICESTORM_API @interface ICESTORMTopicManagerPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICESTORMTopicManagerHelper;

ICESTORM_API @interface ICESTORMFinderPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICESTORMFinderHelper;
