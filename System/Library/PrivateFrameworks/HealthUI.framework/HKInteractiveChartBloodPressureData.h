/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKValueRange, NSString;

@interface HKInteractiveChartBloodPressureData : NSObject <HKGraphSeriesChartData> {

	HKValueRange* _systolicRange;
	HKValueRange* _diastolicRange;

}

@property (nonatomic,retain) HKValueRange * systolicRange;               //@synthesize systolicRange=_systolicRange - In the implementation block
@property (nonatomic,retain) HKValueRange * diastolicRange;              //@synthesize diastolicRange=_diastolicRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSystolicRange:(HKValueRange *)arg1 ;
-(void)setDiastolicRange:(HKValueRange *)arg1 ;
-(HKValueRange *)systolicRange;
-(HKValueRange *)diastolicRange;
@end
