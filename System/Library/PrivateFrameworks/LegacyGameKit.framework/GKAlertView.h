/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LegacyGameKit/LegacyGameKit-Structs.h>
#import <UIKitCore/UIAlertView.h>

@class UIView;

@interface GKAlertView : UIAlertView {

	UIView* _clipView;
	UIView* _contentView;

}
+(void)initialize;
+(CGSize)preferredContentViewSize;
-(void)dealloc;
-(id)contentView;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(BOOL)_canDrawContent;
-(id)initAlertView;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_replaceContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)setContentView:(id)arg1 animated:(BOOL)arg2 ;
@end

