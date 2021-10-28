/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIButton, UILabel;

@interface CKStickerDetailNavigationBar : UIVisualEffectView {

	UIButton* _closeButton;
	UILabel* _titleLabel;
	UIEdgeInsets _parentLayoutMargins;

}

@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                        //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets parentLayoutMargins;              //@synthesize parentLayoutMargins=_parentLayoutMargins - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithEffect:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIEdgeInsets)parentLayoutMargins;
-(void)setParentLayoutMargins:(UIEdgeInsets)arg1 ;
@end
