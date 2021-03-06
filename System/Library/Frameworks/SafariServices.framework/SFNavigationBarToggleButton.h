/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView, SFToggleBackgroundView, UIView, UIImage, UIColor;

@interface SFNavigationBarToggleButton : UIButton {

	BOOL _liftedForCursor;
	UIImageView* _defaultStateImageView;
	UIImageView* _selectedStateImageView;
	SFToggleBackgroundView* _selectedStateMaskView;
	UIView* _selectedStateFillView;
	unsigned long long _inputMode;
	BOOL _drawsLightGlyph;
	BOOL _usesInsetFromBackground;
	BOOL _highlightsBackground;
	UIImage* _image;
	double _resizableBackgroundCornerRadius;
	UIColor* _glyphTintColor;

}

@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL drawsLightGlyph;                                //@synthesize drawsLightGlyph=_drawsLightGlyph - In the implementation block
@property (assign,nonatomic) double resizableBackgroundCornerRadius;              //@synthesize resizableBackgroundCornerRadius=_resizableBackgroundCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL usesInsetFromBackground;                        //@synthesize usesInsetFromBackground=_usesInsetFromBackground - In the implementation block
@property (nonatomic,retain) UIColor * glyphTintColor;                            //@synthesize glyphTintColor=_glyphTintColor - In the implementation block
@property (assign,nonatomic) BOOL highlightsBackground;                           //@synthesize highlightsBackground=_highlightsBackground - In the implementation block
+(BOOL)_cursorInteractionEnabled;
+(CGSize)glyphSize;
+(id)formatMenuImage;
+(id)readerImage;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)setGlyphTintColor:(UIColor *)arg1 ;
-(UIColor *)glyphTintColor;
-(void)setUsesInsetFromBackground:(BOOL)arg1 ;
-(void)setResizableBackgroundCornerRadius:(double)arg1 ;
-(id)initWithImage:(id)arg1 forInputMode:(unsigned long long)arg2 ;
-(void)setHighlightsBackground:(BOOL)arg1 ;
-(void)_updateDefaultStateImageView;
-(void)_updateSelectedStateView;
-(BOOL)_effectiveHighlightsBackground;
-(void)_updateImageViews;
-(BOOL)drawsLightGlyph;
-(void)setDrawsLightGlyph:(BOOL)arg1 ;
-(double)resizableBackgroundCornerRadius;
-(BOOL)usesInsetFromBackground;
-(BOOL)highlightsBackground;
@end

