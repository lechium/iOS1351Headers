/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount, NSArray;

@interface AMSAutomaticDownloadKindsResult : NSObject {

	ACAccount* _account;
	NSArray* _enabledMediaKinds;

}

@property (nonatomic,readonly) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSArray * enabledMediaKinds;              //@synthesize enabledMediaKinds=_enabledMediaKinds - In the implementation block
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 andEnabledMediaKinds:(id)arg2 ;
-(NSArray *)enabledMediaKinds;
@end
