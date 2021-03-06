/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PUCropVideoScrubberViewDelegate;
@class AVTimeFormatter, NSLayoutConstraint, UISlider, UILabel, NSObject;

@interface PUCropVideoScrubberView : UIView {

	SCD_Struct_PH4 _startingTime;
	SCD_Struct_PH4 _endingTime;
	SCD_Struct_PH4 _currentTime;
	AVTimeFormatter* _beforeTimeFormatter;
	AVTimeFormatter* _afterTimeFormatter;
	BOOL _beforeTimeLabelOffset;
	BOOL _afterTimeLabelOffset;
	NSLayoutConstraint* _beforeLabelVerticalConstraint;
	NSLayoutConstraint* _afterLabelVerticalConstraint;
	UISlider* _scrubberSlider;
	UILabel* _beforeTimeLabel;
	UILabel* _afterTimeLabel;
	NSObject*<PUCropVideoScrubberViewDelegate> _delegate;

}

@property (nonatomic,retain) UISlider * scrubberSlider;                                               //@synthesize scrubberSlider=_scrubberSlider - In the implementation block
@property (nonatomic,retain) UILabel * beforeTimeLabel;                                               //@synthesize beforeTimeLabel=_beforeTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * afterTimeLabel;                                                //@synthesize afterTimeLabel=_afterTimeLabel - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PUCropVideoScrubberViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<PUCropVideoScrubberViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<PUCropVideoScrubberViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setCurrentTime:(SCD_Struct_PH4)arg1 ;
-(id)initWithStartingTime:(SCD_Struct_PH4)arg1 endingTime:(SCD_Struct_PH4)arg2 currentTime:(SCD_Struct_PH4)arg3 ;
-(void)videoScrubberDoneChanging;
-(void)videoScrubberValueChanged:(id)arg1 ;
-(void)offsetTimeLabelsIfNecessary;
-(UISlider *)scrubberSlider;
-(void)setScrubberSlider:(UISlider *)arg1 ;
-(UILabel *)beforeTimeLabel;
-(void)setBeforeTimeLabel:(UILabel *)arg1 ;
-(UILabel *)afterTimeLabel;
-(void)setAfterTimeLabel:(UILabel *)arg1 ;
@end

