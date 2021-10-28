/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface HKSleepPeriodChartPointOffset : NSObject {

	BOOL _continuation;
	NSNumber* _value;

}

@property (nonatomic,readonly) NSNumber * value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL continuation;              //@synthesize continuation=_continuation - In the implementation block
+(id)chartPointOffsetWithValue:(id)arg1 continuation:(BOOL)arg2 ;
-(NSNumber *)value;
-(BOOL)continuation;
-(id)initWithValue:(id)arg1 continuation:(BOOL)arg2 ;
@end
