/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString;

@interface ASMessage : NSObject {

	int _type;
	NSData* _payload;
	long long _retryCount;
	NSString* _senderAddress;
	/*^block*/id _ephemeralCompletionBlock;

}

@property (nonatomic,retain) NSData * payload;                       //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) long long retryCount;                   //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                 //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy) id ephemeralCompletionBlock;              //@synthesize ephemeralCompletionBlock=_ephemeralCompletionBlock - In the implementation block
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(id)ephemeralCompletionBlock;
-(void)setEphemeralCompletionBlock:(id)arg1 ;
@end

