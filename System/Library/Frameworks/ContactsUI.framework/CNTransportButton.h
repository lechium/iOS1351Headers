/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIImage;

@interface CNTransportButton : UIButton {

	BOOL _showBackgroundPlatter;
	long long _transportType;
	UIColor* _glyphColor;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long transportType;                 //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;              //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                    //@synthesize glyphColor=_glyphColor - In the implementation block
+(id)transportButton;
+(id)transportButtonWithType:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(long long)transportType;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)setTransportType:(long long)arg1 ;
-(BOOL)showBackgroundPlatter;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(void)_updateImageWithType:(long long)arg1 ;
-(void)_updateTouchInsetsToFillContainerWithSize:(CGSize)arg1 ;
-(UIColor *)glyphColor;
@end

