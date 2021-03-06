/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIVisualEffectView, SearchUICheckView, UILabel;

@interface SearchUIConfirmationHUDView : UIView {

	UIVisualEffectView* _effectView;
	SearchUICheckView* _checkView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) SearchUICheckView * checkView;                //@synthesize checkView=_checkView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(UIVisualEffectView *)effectView;
-(UILabel *)textLabel;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setCheckView:(SearchUICheckView *)arg1 ;
-(SearchUICheckView *)checkView;
-(void)animateCheckmark;
@end

