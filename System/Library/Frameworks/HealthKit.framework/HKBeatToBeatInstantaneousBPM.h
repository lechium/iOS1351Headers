/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKBeatToBeatInstantaneousBPM : NSObject {

	double _bpm;
	double _time;

}

@property (nonatomic,readonly) double bpm;               //@synthesize bpm=_bpm - In the implementation block
@property (nonatomic,readonly) double time;              //@synthesize time=_time - In the implementation block
-(double)time;
-(id)initWithBPM:(double)arg1 time:(double)arg2 ;
-(double)bpm;
@end

