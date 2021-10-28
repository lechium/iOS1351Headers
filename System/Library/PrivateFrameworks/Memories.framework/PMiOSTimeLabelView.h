/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSTimer;

@interface PMiOSTimeLabelView : UIView {

	BOOL _showsRemainingTime;
	BOOL _showsTotalTime;
	double _elapsedTime;
	double _totalTime;
	UILabel* _timeLabel;
	NSTimer* _hideDelayTimer;

}

@property (nonatomic,retain) UILabel * timeLabel;                   //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) NSTimer * hideDelayTimer;              //@synthesize hideDelayTimer=_hideDelayTimer - In the implementation block
@property (assign,nonatomic) double elapsedTime;                    //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double totalTime;                      //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL showsRemainingTime;               //@synthesize showsRemainingTime=_showsRemainingTime - In the implementation block
@property (assign,nonatomic) BOOL showsTotalTime;                   //@synthesize showsTotalTime=_showsTotalTime - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)elapsedTime;
-(void)setup;
-(double)totalTime;
-(void)setTotalTime:(double)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(id)_labelTextForElapsedInterval:(double)arg1 ;
-(void)hideAfterDelay:(double)arg1 ;
-(NSTimer *)hideDelayTimer;
-(void)setHideDelayTimer:(NSTimer *)arg1 ;
-(void)hideTimerAction;
-(BOOL)showsRemainingTime;
-(BOOL)showsTotalTime;
-(void)showMomentarilyAnimated:(BOOL)arg1 ;
-(void)setShowsRemainingTime:(BOOL)arg1 ;
-(void)setShowsTotalTime:(BOOL)arg1 ;
@end
