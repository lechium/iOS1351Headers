/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUnit, NSMutableArray, NSArray;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding> {

	NSUnit* _unitType;
	long long _totalDataSamples;
	NSMutableArray* _mutableSampleValues;

}

@property (copy) NSUnit * unitType;                                        //@synthesize unitType=_unitType - In the implementation block
@property (assign,nonatomic) long long totalDataSamples;                   //@synthesize totalDataSamples=_totalDataSamples - In the implementation block
@property (retain) NSMutableArray * mutableSampleValues;                   //@synthesize mutableSampleValues=_mutableSampleValues - In the implementation block
@property (copy,readonly) NSArray * distributionSampleValues; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUnitType:(NSUnit *)arg1 ;
-(NSUnit *)unitType;
-(void)setMutableSampleValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableSampleValues;
-(long long)totalDataSamples;
-(NSArray *)distributionSampleValues;
-(void)setTotalDataSamples:(long long)arg1 ;
@end

