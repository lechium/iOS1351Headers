/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, NSData;

@interface AMSAnisetteSyncTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSData* _data;
	long long _type;

}

@property (nonatomic,readonly) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
-(long long)type;
-(NSData *)data;
-(ACAccount *)account;
-(id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
-(id)performSync;
-(id<AMSBagProtocol>)bag;
@end
