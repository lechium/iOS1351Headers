/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, UIButton;

@interface _UISearchControllerLimitedAccessView : UIView {

	UIView* _backgroundView;
	UILabel* _keyboardLimitedLabel;
	UIButton* _backButton;

}

@property (nonatomic,retain) UIButton * backButton;              //@synthesize backButton=_backButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(UIButton *)backButton;
-(void)setBackButton:(UIButton *)arg1 ;
@end

