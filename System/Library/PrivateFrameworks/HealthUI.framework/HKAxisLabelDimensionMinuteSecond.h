/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class NSDateFormatter, NSDate;

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar {

	NSDateFormatter* _dateFormatter;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
-(NSDate *)startDate;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 ;
-(id)stringForLocation:(id)arg1 ;
@end

