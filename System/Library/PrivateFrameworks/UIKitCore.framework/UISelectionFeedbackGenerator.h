/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator {

	double _lastSelectionChangeTime;

}

@property (assign,nonatomic) double lastSelectionChangeTime;                                                                                    //@synthesize lastSelectionChangeTime=_lastSelectionChangeTime - In the implementation block
@property (getter=_selectionConfiguration,nonatomic,readonly) _UISelectionFeedbackGeneratorConfiguration * selectionConfiguration; 
+(Class)_configurationClass;
-(void)selectionChanged;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(void)userInteractionCancelled;
-(void)_deactivated;
-(id)_stats_key;
-(void)_playFeedbackWithSpeed:(double)arg1 ;
-(id)_selectionConfiguration;
-(double)lastSelectionChangeTime;
-(void)setLastSelectionChangeTime:(double)arg1 ;
@end
