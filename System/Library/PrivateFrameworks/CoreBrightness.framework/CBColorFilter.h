/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@class NSMutableArray, CBColorSample, NSString;

@interface CBColorFilter : CBModule <CBHIDServiceProtocol> {

	NSMutableArray* _services;
	NSMutableArray* _validServices;
	unsigned long long _sensorPolicy;
	unsigned long long _mode;
	CBColorSample* _sample;

}

@property (assign,nonatomic) unsigned long long sensorPolicy;              //@synthesize sensorPolicy=_sensorPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                      //@synthesize mode=_mode - In the implementation block
@property (readonly) CBColorSample * sample;                               //@synthesize sample=_sample - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)calculateCCTForChromaticity:(SCD_Struct_CB33)arg1 ;
+(double)calculateCCTForTristimulus:(SCD_Struct_CB34)arg1 ;
+(SCD_Struct_CB34)calculateTristimulusForChromaticity:(SCD_Struct_CB33)arg1 andLux:(double)arg2 ;
-(void)dealloc;
-(void)setMode:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(unsigned long long)mode;
-(CBColorSample *)sample;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(void)setSensorPolicy:(unsigned long long)arg1 ;
-(BOOL)forceSampleUpdate;
-(void)updateSample;
-(void)updateValidServices;
-(BOOL)hasExtRearSensor;
-(BOOL)hasExtFrontSensor;
-(id)newColorSampleLinearWeightedForServices:(id)arg1 ;
-(id)newColorSampleLinearWeightedForSamples:(id)arg1 ;
-(id)newColorSampleLogWeightedForSamples:(id)arg1 ;
-(unsigned long long)evaluatedFilterMode;
-(id)newColorSampleLogWeighted;
-(id)newColorSampleWinnerTakesAll;
-(id)newColorSampleConditionWeighted;
-(void)reportSampleUpdate;
-(BOOL)ALSServiceConformsToPolicy:(id)arg1 ;
-(unsigned long long)sensorPolicy;
@end

