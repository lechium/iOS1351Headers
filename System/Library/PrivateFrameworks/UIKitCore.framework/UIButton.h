/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjusting.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjustingInternal.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIFloatingContentViewDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImageView, _UIFloatingContentView, UIVisualEffectView, UILabel, UITapGestureRecognizer, UIView, _UIButtonMaskAnimationView, UIFont, NSArray, UIColor, NSString, _UICursorEffect, UIImage, UIImageSymbolConfiguration, NSAttributedString;

@interface UIButton : UIControl <UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, UIGestureRecognizerDelegate, _UIFloatingContentViewDelegate, NSCoding> {

	unsigned long long _externalFlatEdge;
	CFDictionaryRef _contentLookup;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _titleEdgeInsets;
	UIEdgeInsets _imageEdgeInsets;
	UIImageView* _backgroundView;
	_UIFloatingContentView* _floatingContentView;
	UIVisualEffectView* _contentBackdropView;
	UIImageView* _imageView;
	UILabel* _titleView;
	BOOL _initialized;
	unsigned long long _lastDrawingControlState;
	UITapGestureRecognizer* _selectGestureRecognizer;
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
		unsigned titleFrozen : 1;
		unsigned resendTraitToImageViews : 2;
		unsigned animateNextHighlightChange : 1;
		unsigned blurEnabled : 1;
		unsigned visualEffectViewEnabled : 1;
		unsigned suppressAccessibilityUnderline : 1;
		unsigned requiresLayoutForPropertyChange : 1;
		unsigned adjustsImageSizeForAccessibilityContentSizeCategory : 1;
		unsigned disableAutomaticTitleAnimations : 1;
		unsigned overridesRectAccessors : 1;
		unsigned overridesLegacyCursorDelegateSelectors : 1;
	}  _buttonFlags;
	UIView* _effectiveContentView;
	_UIButtonMaskAnimationView* _maskAnimationView;
	UIView* _selectionView;
	UIFont* _lazyTitleViewFont;
	BOOL _lazyTitleViewFontIsDefaultForIdiom;
	NSArray* _contentConstraints;
	/*^block*/id _pointerStyleProvider;
	long long __imageContentMode;
	UIColor* __plainButtonBackgroundColor;
	/*^block*/id _cursorStyleProvider;
	UIEdgeInsets _internalTitlePaddingInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory; 
@property (setter=_setContentConstraints:,nonatomic,copy) NSArray * _contentConstraints;                                                                             //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (assign,setter=_setInternalTitlePaddingInsets:,nonatomic) UIEdgeInsets _internalTitlePaddingInsets;                                                        //@synthesize internalTitlePaddingInsets=_internalTitlePaddingInsets - In the implementation block
@property (assign,setter=_setImageContentMode:,nonatomic) long long _imageContentMode;                                                                               //@synthesize _imageContentMode=__imageContentMode - In the implementation block
@property (assign,setter=_setContentBackgroundHidden:,getter=_isContentBackgroundHidden,nonatomic) BOOL contentBackgroundHidden; 
@property (setter=_setPlainButtonBackgroundColor:,getter=_plainButtonBackgroundColor,nonatomic,retain) UIColor * _plainButtonBackgroundColor;                        //@synthesize _plainButtonBackgroundColor=__plainButtonBackgroundColor - In the implementation block
@property (nonatomic,copy) id cursorStyleProvider;                                                                                                                   //@synthesize cursorStyleProvider=_cursorStyleProvider - In the implementation block
@property (setter=_setPreferredCursorEffect:,nonatomic,copy) _UICursorEffect * _preferredCursorEffect; 
@property (assign,setter=_setDisableAutomaticTitleAnimations:,getter=_disableAutomaticTitleAnimations,nonatomic) BOOL _disableAutomaticTitleAnimations; 
@property (nonatomic,retain,readonly) UIColor * _currentImageColor; 
@property (assign,setter=_setWantsAccessibilityUnderline:,nonatomic) BOOL _wantsAccessibilityUnderline; 
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge; 
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets; 
@property (assign,nonatomic) UIEdgeInsets titleEdgeInsets; 
@property (assign,nonatomic) BOOL reversesTitleShadowWhenHighlighted; 
@property (assign,nonatomic) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) BOOL adjustsImageWhenDisabled; 
@property (assign,nonatomic) BOOL showsTouchWhenHighlighted; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,readonly) long long buttonType; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (nonatomic,copy) id pointerStyleProvider;                                                                                                                  //@synthesize pointerStyleProvider=_pointerStyleProvider - In the implementation block
@property (nonatomic,readonly) NSString * currentTitle; 
@property (nonatomic,readonly) UIColor * currentTitleColor; 
@property (nonatomic,readonly) UIColor * currentTitleShadowColor; 
@property (nonatomic,readonly) UIImage * currentImage; 
@property (nonatomic,readonly) UIImage * currentBackgroundImage; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * currentPreferredSymbolConfiguration; 
@property (nonatomic,readonly) NSAttributedString * currentAttributedTitle; 
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UIImageView * imageView; 
+(id)buttonWithType:(long long)arg1 ;
+(id)_defaultNormalTitleShadowColor;
+(void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 ;
+(id)_selectedIndicatorImage;
+(id)_defaultImageNameForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(BOOL)arg3 ;
+(id)_defaultImageColorForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)_defaultBackgroundImageNameForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(BOOL)arg3 ;
+(id)_defaultBackgroundImageColorForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2 withConfiguration:(id)arg3 ;
+(BOOL)_buttonTypeIsModernUI:(long long)arg1 ;
+(void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 highlightBlock:(/*^block*/id)arg4 ;
+(void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 baseAlpha:(double)arg4 ;
+(id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2 ;
+(id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2 ;
+(id)_systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)_defaultNormalTitleColor;
+(double)_defaultNeighborSpacingForAxis:(long long)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)_font;
-(id)image;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)adjustsImageSizeForAccessibilityContentSizeCategory;
-(void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)_backgroundView;
-(double)_scaleFactorForImage;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)largeContentTitle;
-(id)largeContentImage;
-(BOOL)scalesLargeContentImage;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(id)_imageView;
-(id)font;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)updateConstraints;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(void)tintColorDidChange;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setButtonType:(long long)arg1 ;
-(void)_updateImageView;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)_selectorOverridden:(SEL)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)_encodableSubviews;
-(long long)buttonType;
-(void)_pointerWillEnter:(id)arg1 ;
-(void)_pointerWillExit:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(CGSize)_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(UIEdgeInsets*)arg5 ;
-(CGRect)_selectedIndicatorBounds;
-(CGSize)_roundSize:(CGSize)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(id)_selectionIndicatorView;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2 ;
-(UIImage *)currentImage;
-(UIEdgeInsets)contentEdgeInsets;
-(id)titleForState:(unsigned long long)arg1 ;
-(void)_setImageContentMode:(long long)arg1 ;
-(void)_setDisableAutomaticTitleAnimations:(BOOL)arg1 ;
-(void)_setWantsAccessibilityUnderline:(BOOL)arg1 ;
-(void)setImageEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isCarPlaySystemTypeButton;
-(BOOL)_isInCarPlay;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(id)_externalTitleColorForState:(unsigned long long)arg1 ;
-(id)_externalFocusedTitleColor;
-(void)_setTitleShadowOffset:(CGSize)arg1 ;
-(void)_setFrame:(CGRect)arg1 deferLayout:(BOOL)arg2 ;
-(id)_titleView;
-(void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1 ;
-(void)setAdjustsImageWhenDisabled:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isTitleFrozen;
-(void)_setFont:(id)arg1 ;
-(void)_setTitleFrozen:(BOOL)arg1 ;
-(void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(void)setDisabledDimsImage:(BOOL)arg1 ;
-(id)imageForState:(unsigned long long)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)_contentBackdropView;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(UIEdgeInsets)_pathTitleEdgeInsets;
-(UIEdgeInsets)_pathImageEdgeInsets;
-(BOOL)_isModernButton;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)_externalUnfocusedBorderColor;
-(NSString *)currentTitle;
-(void)setAutosizesToFit:(BOOL)arg1 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)_setLineBreakMode:(long long)arg1 ;
-(void)_setBlurEnabled:(BOOL)arg1 ;
-(BOOL)_blurEnabled;
-(void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_pointerEffectPreviewParameters;
-(id)_pointerEffectWithPreview:(id)arg1 ;
-(id)_shapeInContainer:(id)arg1 ;
-(id)pointerStyleProvider;
-(BOOL)_pointerInteractionCanBeAssisted;
-(id)attributedTitleForState:(unsigned long long)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(long long)_buttonType;
-(void)_titleAttributesChanged;
-(void)_setFont:(id)arg1 isDefaultForIdiom:(BOOL)arg2 ;
-(void)_titleAttributesThatDoNotAffectSizeOrLayoutChanged;
-(BOOL)_fontIsDefaultForIdiom;
-(id)_setupBackgroundView;
-(void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)titleColorForState:(unsigned long long)arg1 ;
-(id)titleShadowColorForState:(unsigned long long)arg1 ;
-(void)_setContentConstraints:(id)arg1 ;
-(void)setShowsTouchWhenHighlighted:(BOOL)arg1 ;
-(void)_setDefaultFontForIdiom;
-(void)_takeContentFromArchivableContent:(id)arg1 ;
-(BOOL)_shouldHaveFloatingAppearance;
-(id)_effectiveContentView;
-(id)_archivableContent:(id*)arg1 ;
-(id)_floatingContentView;
-(void)_uninstallSelectGestureRecognizer;
-(void)_updateEffectsForImageView:(id)arg1 background:(BOOL)arg2 ;
-(void)_installSelectGestureRecognizer;
-(BOOL)autosizesToFit;
-(CGPoint)pressFeedbackPosition;
-(BOOL)_canHaveTitle;
-(void)_setupTitleView;
-(void)_updateTitleView;
-(void)_setupImageView;
-(void)_invalidateContentConstraints;
-(BOOL)_hasDrawingStyle;
-(BOOL)_isEffectivelyDisabledExternalButton;
-(void)_selectGestureChanged:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_imageForState:(unsigned long long)arg1 applyingConfiguration:(BOOL)arg2 usesImageForNormalState:(BOOL*)arg3 ;
-(CGRect)_clippedHighlightBounds;
-(id)_contentForState:(unsigned long long)arg1 ;
-(BOOL)_hasHighlightColor;
-(BOOL)_isExternalRoundedRectButtonWithPressednessState;
-(BOOL)_highlightsBackgroundImage;
-(id)_selectedIndicatorViewWithImage:(id)arg1 ;
-(double)_selectedIndicatorAlpha;
-(BOOL)_textNeedsCompositingModeWhenSelected;
-(BOOL)_imageNeedsCompositingModeWhenSelected;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(unsigned long long)_externalFlatEdge;
-(double)_highlightCornerRadius;
-(CGRect)_highlightBoundsForDrawingStyle;
-(id)_borderColorForState:(unsigned long long)arg1 ;
-(void)_prepareMaskAnimationViewIfNecessary;
-(id)_transitionAnimationWithKeyPath:(id)arg1 ;
-(double)_borderWidthForState:(unsigned long long)arg1 bounds:(CGRect)arg2 ;
-(id)_fadeOutAnimationWithKeyPath:(id)arg1 ;
-(void)_updateMaskState;
-(void)_invalidateForPropertyChange;
-(id)_externalBorderColorForState:(unsigned long long)arg1 ;
-(double)_drawingStrokeForState:(unsigned long long)arg1 ;
-(CGRect)_highlightBounds;
-(id)_titleForState:(unsigned long long)arg1 ;
-(id)_titleColorForState:(unsigned long long)arg1 ;
-(id)_shadowColorForState:(unsigned long long)arg1 ;
-(id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(BOOL*)arg2 ;
-(id)_preferredConfigurationForState:(unsigned long long)arg1 ;
-(id)_attributedTitleForState:(unsigned long long)arg1 ;
-(id)_imageColorForState:(unsigned long long)arg1 ;
-(id)preferredSymbolConfigurationForImageInState:(unsigned long long)arg1 ;
-(UIEdgeInsets)_combinedContentPaddingInsets;
-(void)_deriveTitleRect:(CGRect*)arg1 imageRect:(CGRect*)arg2 fromContentRect:(CGRect)arg3 calculatePositionForEmptyTitle:(BOOL)arg4 ;
-(CGRect)_titleRectForContentRect:(CGRect)arg1 calculatePositionForEmptyTitle:(BOOL)arg2 ;
-(UIEdgeInsets)imageEdgeInsets;
-(CGSize)_effectiveSizeForImage:(id)arg1 ;
-(UIEdgeInsets)titleEdgeInsets;
-(long long)_lineBreakMode;
-(void)_setContentHuggingPriorities:(CGSize)arg1 ;
-(id)_titleOrImageViewForBaselineLayout;
-(id)_viewForBaselineLayout;
-(BOOL)_likelyToHaveTitle;
-(void)_setupTitleViewRequestingLayout:(BOOL)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(CGRect)_highlightRectForImageRect:(CGRect)arg1 ;
-(CGRect)_highlightRectForTextRect:(CGRect)arg1 ;
-(BOOL)adjustsImageWhenHighlighted;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)adjustsImageWhenDisabled;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(BOOL)_wantsContentBackdropView;
-(void)_updateContentBackdropView;
-(void)_updateTitleViewStyleEffectConfiguration;
-(void)_beginTitleAnimation;
-(BOOL)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
-(BOOL)_requiresLayoutForPropertyChange;
-(void)_layoutContentBackdropView;
-(void)_updateBackgroundImageView;
-(void)_layoutBackgroundImageView;
-(void)_layoutImageAndTitleViews;
-(void)_applyAppropriateTouchInsetsForButton;
-(void)_setupDrawingStyleForState:(unsigned long long)arg1 ;
-(BOOL)_shouldUpdatePressedness;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
-(void)_setupPressednessForState:(unsigned long long)arg1 ;
-(CGSize)_titleShadowOffset;
-(id)_newImageViewWithFrame:(CGRect)arg1 ;
-(id)_createPreparedImageViewWithFrame:(CGRect)arg1 ;
-(BOOL)_wantsAccessibilityUnderline;
-(id)_newLabelWithFrame:(CGRect)arg1 ;
-(void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)_defaultFontForIdiom:(long long)arg1 ;
-(double)_drawingStrokeForStyle:(long long)arg1 ;
-(void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2 ;
-(long long)_drawingStyleForStroke:(double)arg1 ;
-(long long)_externalDrawingStyleForState:(unsigned long long)arg1 ;
-(BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1 ;
-(void)_setVisualEffectViewEnabled:(BOOL)arg1 backgroundColor:(id)arg2 ;
-(void)_enumerateContentWithBlock:(/*^block*/id)arg1 ;
-(void)_setContent:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_externalImageColorForState:(unsigned long long)arg1 ;
-(BOOL)_hasImageForProperty:(id)arg1 ;
-(void)_applyCarPlaySystemButtonCustomizations;
-(void)setCursorStyleProvider:(id)arg1 ;
-(id)_shapeInContainer:(id)arg1 proposal:(/*^block*/id)arg2 ;
-(id)_createPointerInteraction;
-(id)_pointerEffect;
-(id)_layoutDebuggingTitle;
-(BOOL)reversesTitleShadowWhenHighlighted;
-(void)setReversesTitleShadowWhenHighlighted:(BOOL)arg1 ;
-(BOOL)_disableAutomaticTitleAnimations;
-(void)_setExternalFlatEdge:(unsigned long long)arg1 ;
-(UIColor *)currentTitleColor;
-(UIColor *)_currentImageColor;
-(UIColor *)currentTitleShadowColor;
-(UIImage *)currentBackgroundImage;
-(NSAttributedString *)currentAttributedTitle;
-(UIImageSymbolConfiguration *)currentPreferredSymbolConfiguration;
-(id)_currentImageWithResolvedConfiguration;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_visualEffectViewEnabled;
-(CGSize)titleShadowOffset;
-(void)setTitleShadowOffset:(CGSize)arg1 ;
-(void)_reducedTransparencyDidChange:(id)arg1 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1 ;
-(void)setShowPressFeedback:(BOOL)arg1 ;
-(void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2 ;
-(long long)_drawingStyleForState:(unsigned long long)arg1 ;
-(BOOL)_isContentBackgroundHidden;
-(void)_setContentBackgroundHidden:(BOOL)arg1 ;
-(void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)_allButtonContent;
-(id)_letterpressStyleForState:(unsigned long long)arg1 ;
-(_UICursorEffect *)_preferredCursorEffect;
-(void)_setPreferredCursorEffect:(id)arg1 ;
-(void)setPointerStyleProvider:(id)arg1 ;
-(NSArray *)_contentConstraints;
-(UIEdgeInsets)_internalTitlePaddingInsets;
-(void)_setInternalTitlePaddingInsets:(UIEdgeInsets)arg1 ;
-(long long)_imageContentMode;
-(UIColor *)_plainButtonBackgroundColor;
-(void)_setPlainButtonBackgroundColor:(id)arg1 ;
-(id)cursorStyleProvider;
-(id)_viewForLoweringBaselineLayoutAttribute:(int)arg1 ;
-(void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(id)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
@end

