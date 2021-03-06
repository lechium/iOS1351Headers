/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface gbtRegressorInput : NSObject <MLFeatureProvider> {

	double _plugin_hour;
	double _plugin_battery_level;
	double _hour;
	double _time_from_plugin;
	double _cnt_dur_1;
	double _avg_dur_1;

}

@property (assign,nonatomic) double plugin_hour;                       //@synthesize plugin_hour=_plugin_hour - In the implementation block
@property (assign,nonatomic) double plugin_battery_level;              //@synthesize plugin_battery_level=_plugin_battery_level - In the implementation block
@property (assign,nonatomic) double hour;                              //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) double time_from_plugin;                  //@synthesize time_from_plugin=_time_from_plugin - In the implementation block
@property (assign,nonatomic) double cnt_dur_1;                         //@synthesize cnt_dur_1=_cnt_dur_1 - In the implementation block
@property (assign,nonatomic) double avg_dur_1;                         //@synthesize avg_dur_1=_avg_dur_1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(void)setHour:(double)arg1 ;
-(double)hour;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithPlugin_hour:(double)arg1 plugin_battery_level:(double)arg2 hour:(double)arg3 time_from_plugin:(double)arg4 cnt_dur_1:(double)arg5 avg_dur_1:(double)arg6 ;
-(double)plugin_battery_level;
-(void)setPlugin_battery_level:(double)arg1 ;
-(double)time_from_plugin;
-(void)setTime_from_plugin:(double)arg1 ;
-(double)cnt_dur_1;
-(void)setCnt_dur_1:(double)arg1 ;
-(double)plugin_hour;
-(void)setPlugin_hour:(double)arg1 ;
-(double)avg_dur_1;
-(void)setAvg_dur_1:(double)arg1 ;
@end

