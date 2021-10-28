/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UISelectionFeedbackGenerator;

@interface CEKSelectionFeedbackGenerator : NSObject {

	unsigned __endStopSoundID;
	unsigned __majorTickSoundID;
	unsigned __minorTickSoundID;
	unsigned __overscrollTickSoundID;
	UISelectionFeedbackGenerator* __feedbackGenerator;

}

@property (nonatomic,readonly) UISelectionFeedbackGenerator * _feedbackGenerator;              //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
@property (nonatomic,readonly) unsigned _endStopSoundID;                                       //@synthesize _endStopSoundID=__endStopSoundID - In the implementation block
@property (nonatomic,readonly) unsigned _majorTickSoundID;                                     //@synthesize _majorTickSoundID=__majorTickSoundID - In the implementation block
@property (nonatomic,readonly) unsigned _minorTickSoundID;                                     //@synthesize _minorTickSoundID=__minorTickSoundID - In the implementation block
@property (nonatomic,readonly) unsigned _overscrollTickSoundID;                                //@synthesize _overscrollTickSoundID=__overscrollTickSoundID - In the implementation block
-(id)init;
-(void)dealloc;
-(UISelectionFeedbackGenerator *)_feedbackGenerator;
-(unsigned)_minorTickSoundID;
-(unsigned)_majorTickSoundID;
-(unsigned)_endStopSoundID;
-(unsigned)_overscrollTickSoundID;
-(void)prepareFeedback;
-(void)performFeedback;
-(void)playMinorTickSound;
-(void)playMajorTickSound;
-(void)playEndTickSound;
-(void)playOverscrollTickSound;
@end
