/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthVisualization.framework/HealthVisualization
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthVisualization/HealthVisualization-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDate, NSString;

@interface HealthVisualization.HighlightCalendarDayView : UIView {

	 dayLabel;
	 todayIndicatorLayer;
	 ringsRenderer;
	 activityRingsView;

}

@property (readonly,nonatomic) NSDate * axDate; 
@property (readonly,nonatomic) long long axProbability; 
@property (readonly,nonatomic) NSString * axProjectionKind; 
@property (readonly,nonatomic) long long axCircleState; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(NSDate *)axDate;
-(long long)axProbability;
-(NSString *)axProjectionKind;
-(long long)axCircleState;
@end
