/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthVisualization.framework/HealthVisualization
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthVisualization/HealthVisualization-Structs.h>
#import <AppSupportUI/NUIContainerGridView.h>

@class NSArray;

@interface HealthVisualization.HighlightCalendarView : NUIContainerGridView {

	 longWeekdayStrings;
	 shortWeekdayStrings;
	 $__lazy_storage_$_ringsRenderer;
	 weekdayLabels;
	 monthLabels;

}

@property (readonly,nonatomic) NSArray * accessibilityWeekdayLabels; 
@property (readonly,nonatomic) NSArray * accessibilityMonthLabels; 
-(NSArray *)accessibilityWeekdayLabels;
-(NSArray *)accessibilityMonthLabels;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithArrangedSubviewRows:(id)arg1 ;
@end
