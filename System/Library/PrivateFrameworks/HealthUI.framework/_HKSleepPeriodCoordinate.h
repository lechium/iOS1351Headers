/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSArray, NSNumber, NSString;

@interface _HKSleepPeriodCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	BOOL _highlighted;
	NSArray* _asleepYValues;
	NSArray* _inBedYValues;
	NSArray* _yValues;
	NSNumber* _upperGoalYValue;
	NSNumber* _lowerGoalYValue;
	double _xValue;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,readonly) NSArray * asleepYValues;                                    //@synthesize asleepYValues=_asleepYValues - In the implementation block
@property (nonatomic,readonly) NSArray * inBedYValues;                                     //@synthesize inBedYValues=_inBedYValues - In the implementation block
@property (nonatomic,readonly) NSArray * yValues;                                          //@synthesize yValues=_yValues - In the implementation block
@property (nonatomic,readonly) NSNumber * upperGoalYValue;                                 //@synthesize upperGoalYValue=_upperGoalYValue - In the implementation block
@property (nonatomic,readonly) NSNumber * lowerGoalYValue;                                 //@synthesize lowerGoalYValue=_lowerGoalYValue - In the implementation block
@property (nonatomic,readonly) double xValue;                                              //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) BOOL highlighted;                                           //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(BOOL)highlighted;
-(NSArray *)yValues;
-(double)xValue;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithXValue:(double)arg1 asleepYValues:(id)arg2 inBedYValues:(id)arg3 yValues:(id)arg4 upperGoalYValue:(id)arg5 lowerGoalYValue:(id)arg6 highlighted:(BOOL)arg7 userInfo:(id)arg8 ;
-(NSArray *)asleepYValues;
-(NSArray *)inBedYValues;
-(NSNumber *)upperGoalYValue;
-(NSNumber *)lowerGoalYValue;
@end

