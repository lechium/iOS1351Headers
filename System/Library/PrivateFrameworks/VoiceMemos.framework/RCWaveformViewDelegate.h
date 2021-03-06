/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RCWaveformViewDelegate <NSObject>
@property (nonatomic,retain,readonly) id<RCTimeController> activeTimeController; 
@required
-(id<RCTimeController>)activeTimeController;
-(void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(BOOL)arg3;
-(void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;
-(void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
-(void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(SCD_Struct_RC2)arg2;

@end

