/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, NSString, UIView, UILabel, PUStackView;

@interface PUPickerBannerView : UIView <CAAnimationDelegate> {

	BOOL __animatingStackView;
	unsigned long long _style;
	NSArray* _images;
	NSString* _title;
	UIView* _leftView;
	UIView* _rightView;
	long long __alignment;
	UILabel* __label;
	PUStackView* __stackView;
	/*^block*/id __animationCompletionHandler;

}

@property (assign,setter=_setAlignment:,nonatomic) long long _alignment;                                       //@synthesize _alignment=__alignment - In the implementation block
@property (setter=_setLabel:,nonatomic,retain) UILabel * _label;                                               //@synthesize _label=__label - In the implementation block
@property (setter=_setStackView:,nonatomic,retain) PUStackView * _stackView;                                   //@synthesize _stackView=__stackView - In the implementation block
@property (assign,setter=_setAnimatingStackView:,nonatomic) BOOL _animatingStackView;                          //@synthesize _animatingStackView=__animatingStackView - In the implementation block
@property (setter=_setAnimationCompletionHandler:,nonatomic,copy) id _animationCompletionHandler;              //@synthesize _animationCompletionHandler=__animationCompletionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSArray * images;                                                                   //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * leftView;                                                                //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,retain) UIView * rightView;                                                               //@synthesize rightView=_rightView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSArray *)images;
-(UILabel *)_label;
-(void)setImages:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PUStackView *)_stackView;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_updateLabel;
-(long long)_alignment;
-(void)setLeftView:(UIView *)arg1 ;
-(UIView *)rightView;
-(UIView *)leftView;
-(void)setRightView:(UIView *)arg1 ;
-(void)_setAlignment:(long long)arg1 ;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setStackView:(id)arg1 ;
-(void)animateImagesOntoView:(id)arg1 inContainerView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setLabel:(id)arg1 ;
-(CGRect)_frameReversedIfRightToLeft:(BOOL)arg1 frame:(CGRect)arg2 bounds:(CGRect)arg3 ;
-(void)_setAnimatingStackView:(BOOL)arg1 ;
-(void)_updateAlignment;
-(void)_updateStackView;
-(BOOL)_animatingStackView;
-(id)_animationCompletionHandler;
-(void)_setAnimationCompletionHandler:(/*^block*/id)arg1 ;
@end

