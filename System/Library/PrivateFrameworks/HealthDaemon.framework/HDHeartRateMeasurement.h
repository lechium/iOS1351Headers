/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>
#import <libobjc.A.dylib/HDDatumRendering.h>

@class NSArray, NSDate;

@interface HDHeartRateMeasurement : HDHealthServiceCharacteristic <HDDatumRendering> {

	BOOL _hasEnergyExpended;
	BOOL _hasSensorContact;
	BOOL _sensorContact;
	long long _heartRateValue;
	long long _energyExpended;
	NSArray* _rrIntervals;

}

@property (nonatomic,readonly) NSDate * updateTime; 
@property (assign,nonatomic) long long heartRateValue;                               //@synthesize heartRateValue=_heartRateValue - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyExpended;                                 //@synthesize hasEnergyExpended=_hasEnergyExpended - In the implementation block
@property (assign,nonatomic) long long energyExpended;                               //@synthesize energyExpended=_energyExpended - In the implementation block
@property (assign,nonatomic) BOOL hasSensorContact;                                  //@synthesize hasSensorContact=_hasSensorContact - In the implementation block
@property (assign,nonatomic) BOOL sensorContact;                                     //@synthesize sensorContact=_sensorContact - In the implementation block
@property (nonatomic,retain) NSArray * rrIntervals;                                  //@synthesize rrIntervals=_rrIntervals - In the implementation block
@property (nonatomic,readonly) unsigned long long derivedContactStatus; 
+(id)uuid;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)generateDatums:(id)arg1 ;
-(void)setHasSensorContact:(BOOL)arg1 ;
-(BOOL)hasSensorContact;
-(void)setSensorContact:(BOOL)arg1 ;
-(void)setHasEnergyExpended:(BOOL)arg1 ;
-(void)setHeartRateValue:(long long)arg1 ;
-(BOOL)hasEnergyExpended;
-(void)setEnergyExpended:(long long)arg1 ;
-(void)setRrIntervals:(NSArray *)arg1 ;
-(BOOL)sensorContact;
-(unsigned long long)derivedContactStatus;
-(long long)heartRateValue;
-(long long)energyExpended;
-(NSArray *)rrIntervals;
@end

