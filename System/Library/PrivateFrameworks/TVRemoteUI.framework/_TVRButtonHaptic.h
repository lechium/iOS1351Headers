/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIFeedbackGeneratorUserInteractionDriven;
@interface _TVRButtonHaptic : NSObject {

	id<UIFeedbackGeneratorUserInteractionDriven> _behavior;

}

@property (nonatomic,retain) id<UIFeedbackGeneratorUserInteractionDriven> behavior;              //@synthesize behavior=_behavior - In the implementation block
+(id)hapticForView:(id)arg1 ;
-(void)userInteractionEnded;
-(void)userInteractionCancelled;
-(id<UIFeedbackGeneratorUserInteractionDriven>)behavior;
-(void)setBehavior:(id<UIFeedbackGeneratorUserInteractionDriven>)arg1 ;
-(void)userInteractionBegan;
@end

