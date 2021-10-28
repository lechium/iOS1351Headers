/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInlineNotificationView.h>

@class UIView, UIButton, NSString;

@interface CKTextInlineNotificationView : CKInlineNotificationView {

	UIView* _contentView;
	UIButton* _textButton;
	UIView* _greyOutView;

}

@property (nonatomic,retain) UIButton * textButton;              //@synthesize textButton=_textButton - In the implementation block
@property (nonatomic,retain) UIView * greyOutView;               //@synthesize greyOutView=_greyOutView - In the implementation block
@property (assign,nonatomic) BOOL greyedOut; 
@property (nonatomic,retain) NSString * text; 
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)textButton;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)_handleTouchDown:(id)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(void)_handleTouchUpOutside:(id)arg1 ;
-(UIView *)greyOutView;
-(void)setGreyedOut:(BOOL)arg1 ;
-(BOOL)greyedOut;
-(void)setTextButton:(UIButton *)arg1 ;
-(void)setGreyOutView:(UIView *)arg1 ;
@end
