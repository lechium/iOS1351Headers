/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData, NSNumber, IDSCertifiedDeliveryReplayKey, NSDictionary;

@interface IDSCertifiedDeliveryContext : NSObject {

	BOOL _generateDeliveryReceipt;
	NSString* _originalGUID;
	NSString* _service;
	long long _certifiedDeliveryVersion;
	NSData* _certifiedDeliveryRTS;
	NSData* _senderToken;
	NSNumber* _failureReason;
	NSString* _failureReasonMessage;
	IDSCertifiedDeliveryReplayKey* _replayKey;
	NSDictionary* _deliveryStatusContext;
	NSString* _localURI;
	NSString* _remoteURI;
	NSData* _queryHash;

}

@property (nonatomic,readonly) NSString * originalGUID;                                //@synthesize originalGUID=_originalGUID - In the implementation block
@property (nonatomic,readonly) NSString * service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long certifiedDeliveryVersion;                     //@synthesize certifiedDeliveryVersion=_certifiedDeliveryVersion - In the implementation block
@property (nonatomic,readonly) NSData * certifiedDeliveryRTS;                          //@synthesize certifiedDeliveryRTS=_certifiedDeliveryRTS - In the implementation block
@property (nonatomic,readonly) NSData * senderToken;                                   //@synthesize senderToken=_senderToken - In the implementation block
@property (nonatomic,readonly) NSNumber * failureReason;                               //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,readonly) NSString * failureReasonMessage;                        //@synthesize failureReasonMessage=_failureReasonMessage - In the implementation block
@property (nonatomic,readonly) IDSCertifiedDeliveryReplayKey * replayKey;              //@synthesize replayKey=_replayKey - In the implementation block
@property (assign,nonatomic) BOOL generateDeliveryReceipt;                             //@synthesize generateDeliveryReceipt=_generateDeliveryReceipt - In the implementation block
@property (nonatomic,retain) NSDictionary * deliveryStatusContext;                     //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (nonatomic,readonly) NSString * localURI;                                    //@synthesize localURI=_localURI - In the implementation block
@property (nonatomic,readonly) NSString * remoteURI;                                   //@synthesize remoteURI=_remoteURI - In the implementation block
@property (nonatomic,readonly) NSData * queryHash;                                     //@synthesize queryHash=_queryHash - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)service;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSNumber *)failureReason;
-(NSString *)originalGUID;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(NSDictionary *)deliveryStatusContext;
-(NSData *)senderToken;
-(NSData *)certifiedDeliveryRTS;
-(long long)certifiedDeliveryVersion;
-(NSString *)failureReasonMessage;
-(BOOL)generateDeliveryReceipt;
-(NSString *)localURI;
-(NSString *)remoteURI;
-(NSData *)queryHash;
-(void)setGenerateDeliveryReceipt:(BOOL)arg1 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7 replayKey:(id)arg8 generateDeliveryReceipt:(BOOL)arg9 deliveryStatusContext:(id)arg10 localURI:(id)arg11 remoteURI:(id)arg12 queryHash:(id)arg13 ;
-(IDSCertifiedDeliveryReplayKey *)replayKey;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7 replayKey:(id)arg8 ;
-(id)initWithCertifiedDeliveryContext:(id)arg1 queryHash:(id)arg2 ;
@end

