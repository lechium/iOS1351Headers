/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, EKEvent;


@protocol CUIKSingleDayTimelineViewItem <NSObject>
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) BOOL hideTravelTime; 
@property (nonatomic,readonly) double enoughHeightForOneLine; 
@property (nonatomic,readonly) double viewMaxNaturalTextHeight; 
@property (nonatomic,readonly) EKEvent * event; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) BOOL visibleHeightLocked; 
@required
+(double)barToBarHorizontalDistanceIncludingBarWidth;
-(NSDate *)start;
-(NSDate *)end;
-(EKEvent *)event;
-(void)setVisibleHeight:(double)arg1;
-(double)viewMaxNaturalTextHeight;
-(void)setStagedFrame:(CGRect)arg1;
-(CGRect*)stagedFrame;
-(void)setTravelTimeHeight:(double)arg1;
-(NSDate *)startWithTravelTime;
-(BOOL)hideTravelTime;
-(double)enoughHeightForOneLine;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1;
-(BOOL)visibleHeightLocked;

@end

