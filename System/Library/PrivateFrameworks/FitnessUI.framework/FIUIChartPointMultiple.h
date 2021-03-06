/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FIUIChartPoint.h>

@class NSDate, NSIndexSet, NSString, NSNumber;

@interface FIUIChartPointMultiple : NSObject <FIUIChartPoint> {

	NSDate* _xValue;
	NSIndexSet* _yValue;

}

@property (nonatomic,copy) NSIndexSet * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * xValue;                         //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * minYValue; 
@property (nonatomic,readonly) NSNumber * maxYValue; 
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
+(id)chartPointWithDate:(id)arg1 valueIndexSet:(id)arg2 ;
-(NSString *)description;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(NSDate *)xValue;
-(NSIndexSet *)yValue;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setYValue:(NSIndexSet *)arg1 ;
@end

