/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IDSBaseMessageSigningSession;
@class NSDictionary, NSString, NSData, NSDate, NSNumber, NSURL, APSOutgoingMessageCheckpointTrace, NSArray, NSMutableArray;

@interface IDSBaseMessage : NSObject <NSCopying> {

	NSDictionary* _cachedBody;
	NSString* _topic;
	NSDictionary* _userInfo;
	NSData* _serviceData;
	NSDictionary* _clientInfo;
	NSDate* _creationDate;
	NSDictionary* _responseAlert;
	NSString* _dsAuthID;
	NSString* _dataUsageBundleIdentifier;
	id _context;
	int _timeoutRetries;
	BOOL _usingOutgoingPush;
	BOOL _wantsResponse;
	BOOL _wantsMultipleResponses;
	BOOL _wantsIntegerUniqueIDs;
	BOOL _wantsBinaryPush;
	BOOL _forceCellular;
	BOOL _highPriority;
	BOOL _hasReceivedPushAck;
	BOOL _hasAttemptedAPSDelivery;
	BOOL _httpDoNotDecodeData;
	BOOL _ignoreMaxRetryCount;
	/*^block*/id _completionBlock;
	/*^block*/id _deliveryAcknowledgementBlock;
	double _timeout;
	double _timeSent;
	unsigned long long _uniqueID;
	NSNumber* _retryCount;
	long long _importanceLevel;
	long long _deliveryMechanism;
	id<IDSBaseMessageSigningSession> _signingSession;
	NSString* _service;
	NSString* _subService;
	NSString* _underlyingService;
	NSURL* _URLOverride;
	unsigned long long _sentByteCount;
	unsigned long long _receivedByteCount;
	NSNumber* _pushAckTimestamp;
	BOOL _isMultipleAuthCertCapable;
	APSOutgoingMessageCheckpointTrace* _apsdCheckpointTrace;
	NSDictionary* _responseAlertInfo;
	NSNumber* _originalTimestamp;
	NSDate* _requestStart;
	NSDate* _requestEnd;
	NSDate* _responseReceived;

}

@property (retain) NSDate * creationDate;                                                  //@synthesize creationDate=_creationDate - In the implementation block
@property (setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush;                         //@synthesize usingOutgoingPush=_usingOutgoingPush - In the implementation block
@property (setter=_setCachedBody:,retain) NSDictionary * _cachedBody;                      //@synthesize cachedBody=_cachedBody - In the implementation block
@property (readonly) BOOL wantsIDSServer; 
@property (readonly) BOOL isValidMessage; 
@property (readonly) BOOL payloadCanBeLogged; 
@property (assign) unsigned long long uniqueID;                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) NSString * uniqueIDString; 
@property (readonly) NSString * dataUsageBundleIdentifier; 
@property (assign) double timeout;                                                         //@synthesize timeout=_timeout - In the implementation block
@property (assign) double timeSent;                                                        //@synthesize timeSent=_timeSent - In the implementation block
@property (copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id deliveryAcknowledgementBlock;                                          //@synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock - In the implementation block
@property (readonly) NSString * bagKey; 
@property (retain) NSString * topic;                                                       //@synthesize topic=_topic - In the implementation block
@property (readonly) long long command; 
@property (readonly) long long responseCommand; 
@property (assign) BOOL hasReceivedPushAck;                                                //@synthesize hasReceivedPushAck=_hasReceivedPushAck - In the implementation block
@property (assign) BOOL hasAttemptedAPSDelivery;                                           //@synthesize hasAttemptedAPSDelivery=_hasAttemptedAPSDelivery - In the implementation block
@property (retain) APSOutgoingMessageCheckpointTrace * apsdCheckpointTrace;                //@synthesize apsdCheckpointTrace=_apsdCheckpointTrace - In the implementation block
@property (retain) NSNumber * pushAckTimestamp;                                            //@synthesize pushAckTimestamp=_pushAckTimestamp - In the implementation block
@property (assign) long long importanceLevel;                                              //@synthesize importanceLevel=_importanceLevel - In the implementation block
@property (assign) long long deliveryMechanism;                                            //@synthesize deliveryMechanism=_deliveryMechanism - In the implementation block
@property (copy) NSString * service;                                                       //@synthesize service=_service - In the implementation block
@property (copy) NSString * subService;                                                    //@synthesize subService=_subService - In the implementation block
@property (copy) NSString * underlyingService;                                             //@synthesize underlyingService=_underlyingService - In the implementation block
@property (assign) BOOL forceCellular;                                                     //@synthesize forceCellular=_forceCellular - In the implementation block
@property (assign) BOOL highPriority;                                                      //@synthesize highPriority=_highPriority - In the implementation block
@property (readonly) BOOL wantsSignature; 
@property (readonly) BOOL wantsBodySignature; 
@property (readonly) BOOL wantsCFNetworkTimeout; 
@property (readonly) BOOL wantsManagedRetries; 
@property (readonly) BOOL wantsExtraTimeoutRetry; 
@property (readonly) int maxTimeoutRetries; 
@property (readonly) BOOL wantsHTTPHeaders; 
@property (readonly) BOOL wantsCompressedBody; 
@property (assign) BOOL wantsBinaryPush;                                                   //@synthesize wantsBinaryPush=_wantsBinaryPush - In the implementation block
@property (assign) BOOL wantsIntegerUniqueIDs;                                             //@synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs - In the implementation block
@property (readonly) BOOL wantsJSONBody; 
@property (readonly) BOOL wantsBagKey; 
@property (readonly) BOOL wantsUserAgentInHeaders; 
@property (readonly) BOOL wantsHTTPGet; 
@property (readonly) BOOL wantsAPSRetries; 
@property (readonly) double anisetteHeadersTimeout; 
@property (readonly) BOOL allowsServerProvidedLenientAnisetteTimeout; 
@property (assign) BOOL wantsResponse;                                                     //@synthesize wantsResponse=_wantsResponse - In the implementation block
@property (assign) BOOL wantsMultipleResponses;                                            //@synthesize wantsMultipleResponses=_wantsMultipleResponses - In the implementation block
@property (readonly) BOOL isWebTunnelMessage; 
@property (readonly) BOOL wantsIDSSignatures; 
@property (assign) BOOL httpDoNotDecodeData;                                               //@synthesize httpDoNotDecodeData=_httpDoNotDecodeData - In the implementation block
@property (readonly) BOOL requiresPushTokenKeys; 
@property (assign) int timeoutRetries;                                                     //@synthesize timeoutRetries=_timeoutRetries - In the implementation block
@property (readonly) BOOL ignoresNetworkConnectivity; 
@property (readonly) BOOL wantsCustomRetryInterval; 
@property (readonly) double customRetryInterval; 
@property (readonly) NSArray * requiredKeys; 
@property (copy) NSDictionary * responseAlertInfo;                                         //@synthesize responseAlertInfo=_responseAlertInfo - In the implementation block
@property (readonly) NSDictionary * messageBody; 
@property (readonly) NSDictionary * messageBodyUsingCache; 
@property (readonly) NSDictionary * additionalMessageHeaders; 
@property (readonly) NSDictionary * additionalQueryStringParameters; 
@property (readonly) NSDictionary * additionalInternalHeaders; 
@property (readonly) NSDictionary * additionalMessageHeadersForOutgoingPush; 
@property (readonly) NSDictionary * nonStandardMessageHeadersForOutgoingPush; 
@property (assign) BOOL ignoreMaxRetryCount;                                               //@synthesize ignoreMaxRetryCount=_ignoreMaxRetryCount - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPrivateKey; 
@property (assign,nonatomic) SecKeyRef pushPublicKey; 
@property (nonatomic,copy) NSData * pushCertificate; 
@property (nonatomic,copy) NSData * pushToken; 
@property (assign,nonatomic) BOOL isMultipleAuthCertCapable;                               //@synthesize isMultipleAuthCertCapable=_isMultipleAuthCertCapable - In the implementation block
@property (nonatomic,copy) NSMutableArray * certDataArray; 
@property (nonatomic,copy) NSMutableArray * publicKeyArray; 
@property (nonatomic,copy) NSMutableArray * privateKeyArray; 
@property (nonatomic,copy) NSMutableArray * userIDArray; 
@property (nonatomic,copy) NSNumber * serverTimestamp; 
@property (nonatomic,copy) NSNumber * serverTimestampReceivedDate; 
@property (nonatomic,readonly) SecKeyRef identityPrivateKey; 
@property (nonatomic,readonly) SecKeyRef identityPublicKey; 
@property (nonatomic,copy,readonly) NSData * IDCertificate; 
@property (nonatomic,retain) id<IDSBaseMessageSigningSession> signingSession;              //@synthesize signingSession=_signingSession - In the implementation block
@property (setter=setDSAuthID:,nonatomic,copy) NSString * dsAuthID;                        //@synthesize dsAuthID=_dsAuthID - In the implementation block
@property (copy) NSData * serviceData;                                                     //@synthesize serviceData=_serviceData - In the implementation block
@property (copy) NSDictionary * clientInfo;                                                //@synthesize clientInfo=_clientInfo - In the implementation block
@property (readonly) NSString * userAgentHeaderString; 
@property (nonatomic,copy) NSNumber * retryCount;                                          //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) NSString * retryCountKey; 
@property (copy) NSURL * URLOverride;                                                      //@synthesize URLOverride=_URLOverride - In the implementation block
@property (nonatomic,copy) NSNumber * originalTimestamp;                                   //@synthesize originalTimestamp=_originalTimestamp - In the implementation block
@property (readonly) BOOL allowDualDelivery; 
@property (copy) NSDictionary * userInfo;                                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long sentByteCount;                             //@synthesize sentByteCount=_sentByteCount - In the implementation block
@property (assign,nonatomic) unsigned long long receivedByteCount;                         //@synthesize receivedByteCount=_receivedByteCount - In the implementation block
@property (nonatomic,retain) NSDate * requestStart;                                        //@synthesize requestStart=_requestStart - In the implementation block
@property (nonatomic,retain) NSDate * requestEnd;                                          //@synthesize requestEnd=_requestEnd - In the implementation block
@property (nonatomic,retain) NSDate * responseReceived;                                    //@synthesize responseReceived=_responseReceived - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)context;
-(unsigned long long)uniqueID;
-(NSDate *)creationDate;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setContext:(id)arg1 ;
-(NSString *)topic;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)service;
-(NSData *)pushToken;
-(long long)deliveryMechanism;
-(unsigned long long)sentByteCount;
-(unsigned long long)receivedByteCount;
-(void)setUnderlyingService:(NSString *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(void)setHttpDoNotDecodeData:(BOOL)arg1 ;
-(BOOL)hasAttemptedAPSDelivery;
-(NSDate *)requestStart;
-(NSDate *)requestEnd;
-(NSDate *)responseReceived;
-(void)setRequestStart:(NSDate *)arg1 ;
-(void)setRequestEnd:(NSDate *)arg1 ;
-(NSNumber *)retryCount;
-(void)setRetryCount:(NSNumber *)arg1 ;
-(NSNumber *)originalTimestamp;
-(void)setPushToken:(NSData *)arg1 ;
-(NSDictionary *)messageBody;
-(void)setService:(NSString *)arg1 ;
-(long long)command;
-(void)setOriginalTimestamp:(NSNumber *)arg1 ;
-(void)setUniqueID:(unsigned long long)arg1 ;
-(NSDictionary *)clientInfo;
-(double)timeSent;
-(id<IDSBaseMessageSigningSession>)signingSession;
-(void)setSigningSession:(id<IDSBaseMessageSigningSession>)arg1 ;
-(void)setWantsResponse:(BOOL)arg1 ;
-(void)setSubService:(NSString *)arg1 ;
-(NSNumber *)serverTimestamp;
-(void)setWantsIntegerUniqueIDs:(BOOL)arg1 ;
-(void)setWantsBinaryPush:(BOOL)arg1 ;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(NSString *)userAgentHeaderString;
-(BOOL)wantsUserAgentInHeaders;
-(long long)responseCommand;
-(APSOutgoingMessageCheckpointTrace *)apsdCheckpointTrace;
-(void)setApsdCheckpointTrace:(APSOutgoingMessageCheckpointTrace *)arg1 ;
-(NSArray *)requiredKeys;
-(void)setServerTimestamp:(NSNumber *)arg1 ;
-(void)_clearCache;
-(NSString *)subService;
-(BOOL)wantsResponse;
-(void)setIgnoreMaxRetryCount:(BOOL)arg1 ;
-(BOOL)ignoreMaxRetryCount;
-(void)setHighPriority:(BOOL)arg1 ;
-(NSString *)dsAuthID;
-(void)setDSAuthID:(id)arg1 ;
-(BOOL)forceCellular;
-(void)setForceCellular:(BOOL)arg1 ;
-(int)timeoutRetries;
-(void)setTimeoutRetries:(int)arg1 ;
-(BOOL)highPriority;
-(NSData *)serviceData;
-(void)setServiceData:(NSData *)arg1 ;
-(void)setClientInfo:(NSDictionary *)arg1 ;
-(BOOL)wantsMultipleResponses;
-(void)setWantsMultipleResponses:(BOOL)arg1 ;
-(BOOL)httpDoNotDecodeData;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsIntegerUniqueIDs;
-(void)setTimeSent:(double)arg1 ;
-(id)deliveryAcknowledgementBlock;
-(void)setDeliveryAcknowledgementBlock:(id)arg1 ;
-(NSDictionary *)responseAlertInfo;
-(void)setResponseAlertInfo:(NSDictionary *)arg1 ;
-(long long)importanceLevel;
-(void)setImportanceLevel:(long long)arg1 ;
-(void)setDeliveryMechanism:(long long)arg1 ;
-(NSString *)underlyingService;
-(void)setHasAttemptedAPSDelivery:(BOOL)arg1 ;
-(NSURL *)URLOverride;
-(void)setURLOverride:(NSURL *)arg1 ;
-(NSNumber *)pushAckTimestamp;
-(void)setPushAckTimestamp:(NSNumber *)arg1 ;
-(void)_cacheBody;
-(BOOL)requiresPushTokenKeys;
-(NSDictionary *)messageBodyUsingCache;
-(NSString *)retryCountKey;
-(NSString *)uniqueIDString;
-(BOOL)wantsIDSServer;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsJSONBody;
-(BOOL)wantsHTTPGet;
-(BOOL)allowDualDelivery;
-(BOOL)wantsBagKey;
-(BOOL)wantsCFNetworkTimeout;
-(int)maxTimeoutRetries;
-(BOOL)wantsExtraTimeoutRetry;
-(BOOL)wantsManagedRetries;
-(double)anisetteHeadersTimeout;
-(BOOL)allowsServerProvidedLenientAnisetteTimeout;
-(BOOL)ignoresNetworkConnectivity;
-(BOOL)wantsSignature;
-(BOOL)isWebTunnelMessage;
-(BOOL)wantsBodySignature;
-(BOOL)wantsIDSSignatures;
-(BOOL)wantsCustomRetryInterval;
-(double)customRetryInterval;
-(NSString *)dataUsageBundleIdentifier;
-(id)messageBodyDataOverride;
-(BOOL)isIDSMessage;
-(BOOL)payloadCanBeLogged;
-(BOOL)isValidMessage;
-(SecKeyRef)pushPrivateKey;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(NSData *)pushCertificate;
-(void)setPushCertificate:(NSData *)arg1 ;
-(BOOL)isMultipleAuthCertCapable;
-(NSMutableArray *)certDataArray;
-(void)setCertDataArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)publicKeyArray;
-(void)setPublicKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)privateKeyArray;
-(void)setPrivateKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)userIDArray;
-(void)setUserIDArray:(NSMutableArray *)arg1 ;
-(SecKeyRef)identityPrivateKey;
-(SecKeyRef)identityPublicKey;
-(NSData *)IDCertificate;
-(NSNumber *)serverTimestampReceivedDate;
-(void)setServerTimestampReceivedDate:(NSNumber *)arg1 ;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(NSString *)bagKey;
-(NSDictionary *)additionalMessageHeaders;
-(NSDictionary *)additionalQueryStringParameters;
-(NSDictionary *)additionalMessageHeadersForOutgoingPush;
-(NSDictionary *)nonStandardMessageHeadersForOutgoingPush;
-(NSDictionary *)additionalInternalHeaders;
-(void)handleResponseHeaders:(id)arg1 ;
-(void)handleResponseBody:(id)arg1 ;
-(void)handleResponseStatus:(unsigned long long)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)logFailureInfo;
-(BOOL)_usingOutgoingPush;
-(void)_setUsingOutgoingPush:(BOOL)arg1 ;
-(NSDictionary *)_cachedBody;
-(void)_setCachedBody:(id)arg1 ;
-(BOOL)hasReceivedPushAck;
-(void)setHasReceivedPushAck:(BOOL)arg1 ;
-(void)setIsMultipleAuthCertCapable:(BOOL)arg1 ;
-(void)setSentByteCount:(unsigned long long)arg1 ;
-(void)setReceivedByteCount:(unsigned long long)arg1 ;
-(void)setResponseReceived:(NSDate *)arg1 ;
@end

