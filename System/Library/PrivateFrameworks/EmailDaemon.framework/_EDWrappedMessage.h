/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EMMessage;

@interface _EDWrappedMessage : NSObject {

	EMMessage* _message;
	long long _databaseID;

}

@property (nonatomic,readonly) EMMessage * message;               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
-(EMMessage *)message;
-(long long)databaseID;
-(id)initWithMessage:(id)arg1 databaseID:(long long)arg2 ;
@end

