/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSDictionary;

@interface WFActionRateLimiter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                   //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSDictionary * attempts; 
+(id)sharedInstance;
+(void)performAction:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUserDefaults *)userDefaults;
-(id)initWithUserDefaults:(id)arg1 ;
-(NSDictionary *)attempts;
-(void)setAttempts:(NSDictionary *)arg1 ;
-(void)modify:(/*^block*/id)arg1 ;
@end

