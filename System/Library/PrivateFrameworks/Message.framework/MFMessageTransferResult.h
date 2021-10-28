/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface MFMessageTransferResult : NSObject {

	unsigned long long _resultCode;
	NSArray* _failedMessages;
	NSArray* _transferedMessages;

}

@property (nonatomic,readonly) unsigned long long resultCode;              //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) NSArray * failedMessages;                   //@synthesize failedMessages=_failedMessages - In the implementation block
@property (nonatomic,readonly) NSArray * transferedMessages;               //@synthesize transferedMessages=_transferedMessages - In the implementation block
-(id)debugDescription;
-(id)initWithResultCode:(unsigned long long)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3 ;
-(unsigned long long)resultCode;
-(NSArray *)transferedMessages;
-(NSArray *)failedMessages;
@end
