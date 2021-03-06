/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSString, NSObject;

@interface ActivityTracker : NSObject {

	NSString* _description;
	NSObject*<OS_os_transaction> _transaction;
	/*^block*/id _activityUpdateBlock;

}

@property (copy) id activityUpdateBlock;              //@synthesize activityUpdateBlock=_activityUpdateBlock - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(id)activityUpdateBlock;
-(void)setActivityUpdateBlock:(id)arg1 ;
@end

