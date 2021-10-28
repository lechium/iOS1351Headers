/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantityType, NSDate, HKDevice;

@interface HKQuantitySeriesSampleBuilderTaskServerConfiguration : HKTaskConfiguration {

	HKQuantityType* _quantityType;
	NSDate* _startDate;
	HKDevice* _device;

}

@property (nonatomic,copy) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) HKDevice * device;                          //@synthesize device=_device - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(HKDevice *)device;
-(void)setStartDate:(NSDate *)arg1 ;
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(void)setDevice:(HKDevice *)arg1 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 device:(id)arg3 ;
@end
