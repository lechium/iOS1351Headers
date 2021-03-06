/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMMetric.h>

@class MXMSampleTag, MXMInstrument;

@interface MXMClockMetric : MXMMetric {

	MXMSampleTag* _tag;

}

@property (nonatomic,readonly) MXMInstrument * instrument; 
+(BOOL)supportsSecureCoding;
+(id)absoluteTime;
+(id)continuousTime;
+(id)allTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTag:(id)arg1 ;
-(id)_unit;
-(BOOL)_shouldConstructProbe;
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2 ;
-(id)_unitWithTag:(id)arg1 ;
@end

