/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSArray;

@interface HKAccessibilityPointData : NSObject {

	double _horizontalScreenCoordinate;
	NSString* _horizontalTimeCoordinate;
	NSDate* _horizontalDate;
	NSArray* _values;

}

@property (nonatomic,readonly) double horizontalScreenCoordinate;                //@synthesize horizontalScreenCoordinate=_horizontalScreenCoordinate - In the implementation block
@property (nonatomic,readonly) NSString * horizontalTimeCoordinate;              //@synthesize horizontalTimeCoordinate=_horizontalTimeCoordinate - In the implementation block
@property (nonatomic,readonly) NSDate * horizontalDate;                          //@synthesize horizontalDate=_horizontalDate - In the implementation block
@property (nonatomic,readonly) NSArray * values;                                 //@synthesize values=_values - In the implementation block
-(id)description;
-(NSArray *)values;
-(double)horizontalScreenCoordinate;
-(NSString *)horizontalTimeCoordinate;
-(NSDate *)horizontalDate;
-(id)initWithHorizontalScreenCoordinate:(double)arg1 horizontalTimeCoordinate:(id)arg2 horizontalDate:(id)arg3 values:(id)arg4 ;
@end

