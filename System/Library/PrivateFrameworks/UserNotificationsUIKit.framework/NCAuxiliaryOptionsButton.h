/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIButton.h>

@class UIView;

@interface NCAuxiliaryOptionsButton : UIButton {

	UIView* _backgroundView;

}
-(id)init;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_configureBackgroundViewIfNecessary;
-(void)_handleHoverGestureRecognizerEvent:(id)arg1 ;
-(void)_updateBackgroundVisualStyling;
@end
