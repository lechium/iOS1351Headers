/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CARSession, NSString;

@interface CARSessionScreenBorrowToken : NSObject {

	CARSession* _session;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,__weak,readonly) CARSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * client;                   //@synthesize client=_client - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(NSString *)reason;
-(NSString *)client;
-(CARSession *)session;
-(void)unborrowToken;
-(id)initWithSession:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
@end

