/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FMDUIFMIPSettingsCache : NSObject {

	BOOL _fmipStateAvailable;
	BOOL _lowBatteryLocateStateAvailable;
	BOOL _lowBatteryLocateEnabled;
	unsigned long long _fmipState;

}

@property (assign,nonatomic) BOOL fmipStateAvailable;                          //@synthesize fmipStateAvailable=_fmipStateAvailable - In the implementation block
@property (assign,nonatomic) unsigned long long fmipState;                     //@synthesize fmipState=_fmipState - In the implementation block
@property (assign,nonatomic) BOOL lowBatteryLocateStateAvailable;              //@synthesize lowBatteryLocateStateAvailable=_lowBatteryLocateStateAvailable - In the implementation block
@property (assign,nonatomic) BOOL lowBatteryLocateEnabled;                     //@synthesize lowBatteryLocateEnabled=_lowBatteryLocateEnabled - In the implementation block
@property (nonatomic,readonly) BOOL fmipEnabled; 
@property (nonatomic,readonly) BOOL fmipStateChangeInProgress; 
+(id)sharedInstance;
-(id)init;
-(BOOL)fmipEnabled;
-(BOOL)fmipStateAvailable;
-(unsigned long long)fmipState;
-(BOOL)fmipStateChangeInProgress;
-(BOOL)lowBatteryLocateEnabled;
-(BOOL)lowBatteryLocateStateAvailable;
-(void)_loadFMIPState;
-(void)_loadLowBatteryState;
-(void)setLowBatteryLocateEnabled:(BOOL)arg1 ;
-(void)setLowBatteryLocateStateAvailable:(BOOL)arg1 ;
-(void)setFmipState:(unsigned long long)arg1 ;
-(void)setFmipStateAvailable:(BOOL)arg1 ;
@end

