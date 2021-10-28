/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class AVTUIEnvironment, UIButton;

@interface AVTCarouselPlusButtonView : UIView {

	BOOL _highlighted;
	BOOL _allowHighlight;
	AVTUIEnvironment* _environment;
	UIButton* _button;
	CGSize _maxItemSize;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                   //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) CGSize maxItemSize;                                 //@synthesize maxItemSize=_maxItemSize - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL allowHighlight;                                //@synthesize allowHighlight=_allowHighlight - In the implementation block
-(AVTUIEnvironment *)environment;
-(UIButton *)button;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 environment:(id)arg2 ;
-(void)setMaxItemSize:(CGSize)arg1 ;
-(void)setAllowHighlight:(BOOL)arg1 ;
-(BOOL)allowHighlight;
-(CGSize)maxItemSize;
@end
