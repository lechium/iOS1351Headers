/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBFThermalBlockProvider.h>

@class NSUUID, NSHashTable, SBExternalWifiDefaults, SBThermalDefaults, SBSecurityDefaults, NSString;

@interface SBThermalController : NSObject <SBFThermalBlockProvider> {

	NSUUID* _samplingToken;
	int _hotToken;
	unsigned long long _hotLevel;
	int _coldToken;
	unsigned long long _coldLevel;
	int _sunToken;
	unsigned long long _sunLevel;
	long long _level;
	BOOL _inSunlight;
	NSHashTable* _observers;
	SBExternalWifiDefaults* _networkDefaults;
	SBThermalDefaults* _thermalDefaults;
	SBSecurityDefaults* _securityDefaults;

}

@property (nonatomic,readonly) long long level;                                  //@synthesize level=_level - In the implementation block
@property (getter=isInSunlight,nonatomic,readonly) BOOL inSunlight;              //@synthesize inSunlight=_inSunlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)logThermalEvent:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(long long)level;
-(BOOL)_isBlocked;
-(void)addThermalObserver:(id)arg1 ;
-(void)removeThermalObserver:(id)arg1 ;
-(BOOL)isThermalBlocked;
-(void)startListeningForThermalEvents;
-(void)_respondToCurrentThermalCondition;
-(void)_setBlocked:(BOOL)arg1 ;
-(void)_updateThermalJetsamCPUSamplingState;
-(BOOL)isInSunlight;
@end

