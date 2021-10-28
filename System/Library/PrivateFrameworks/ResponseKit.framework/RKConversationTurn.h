/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface RKConversationTurn : NSObject {

	NSString* _text;
	NSString* _senderId;
	NSDate* _timestamp;

}

@property (readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (readonly) NSString * senderId;              //@synthesize senderId=_senderId - In the implementation block
@property (readonly) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
-(NSDate *)timestamp;
-(NSString *)text;
-(id)initWithString:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3 ;
-(NSString *)senderId;
@end
