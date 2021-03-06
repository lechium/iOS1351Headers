/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SAMicrostackshotSummary : NSObject {

	NSMutableDictionary* _microstackshotStateCounts;
	unsigned long long _userActiveCount;
	unsigned long long _userIdleCount;
	unsigned long long _onBatteryCount;
	unsigned long long _onACCount;

}

@property (readonly) NSMutableDictionary * microstackshotStateCounts;              //@synthesize microstackshotStateCounts=_microstackshotStateCounts - In the implementation block
@property (assign) unsigned long long userActiveCount;                             //@synthesize userActiveCount=_userActiveCount - In the implementation block
@property (assign) unsigned long long userIdleCount;                               //@synthesize userIdleCount=_userIdleCount - In the implementation block
@property (assign) unsigned long long onBatteryCount;                              //@synthesize onBatteryCount=_onBatteryCount - In the implementation block
@property (assign) unsigned long long onACCount;                                   //@synthesize onACCount=_onACCount - In the implementation block
-(id)init;
-(NSMutableDictionary *)microstackshotStateCounts;
-(unsigned long long)userActiveCount;
-(void)setUserActiveCount:(unsigned long long)arg1 ;
-(unsigned long long)userIdleCount;
-(void)setUserIdleCount:(unsigned long long)arg1 ;
-(unsigned long long)onBatteryCount;
-(void)setOnBatteryCount:(unsigned long long)arg1 ;
-(unsigned long long)onACCount;
-(void)setOnACCount:(unsigned long long)arg1 ;
@end

