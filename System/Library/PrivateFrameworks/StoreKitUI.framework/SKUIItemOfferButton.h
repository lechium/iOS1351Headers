/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SKUIViewElementOfferButton.h>

@protocol SKUIItemOfferButtonDelegate;
@class UIColor, UIView, SKUIFocusedTouchGestureRecognizer, UIImage, NSMutableAttributedString, UIImageView, SKUICircleProgressIndicator, UILabel, NSString, SKUIBuyButtonDescriptor, SKUIButtonViewElement;

@interface SKUIItemOfferButton : UIControl <SKUIViewElementOfferButton> {

	UIColor* _backgroundColor;
	BOOL _borderCornerRadiusMatchesHalfBoundingDimension;
	UIView* _borderView;
	SKUIFocusedTouchGestureRecognizer* _cancelGestureRecognizer;
	UIImage* _cloudImage;
	UIColor* _cloudTintColor;
	UIColor* _confirmationColor;
	NSMutableAttributedString* _confirmationTitleAttributedString;
	long long _confirmationTitleStyle;
	CGSize _confirmationTitleFitSize;
	id<SKUIItemOfferButtonDelegate> _delegate;
	long long _fillStyle;
	UIImage* _image;
	UIImageView* _imageView;
	UIImageView* _borderedImageView;
	double _progress;
	SKUICircleProgressIndicator* _progressIndicator;
	BOOL _showsConfirmationState;
	NSMutableAttributedString* _titleAttributedString;
	CGSize _titleFitSize;
	UILabel* _titleLabel;
	long long _titleStyle;
	BOOL _universal;
	BOOL _usesDrawRectPath;
	UIImageView* _universalImageView;
	BOOL _downloadRestores;
	NSString* _offerButtonStateDescription;
	BOOL _disabledButSelectable;
	UIImage* _borderedImage;
	/*^block*/id _centerImageProvider;
	double _borderColorAlphaMultiplier;
	SKUIBuyButtonDescriptor* _buttonDescriptor;
	NSString* _buyType;
	SKUIButtonViewElement* _element;

}

@property (nonatomic,retain) SKUIBuyButtonDescriptor * buttonDescriptor;                             //@synthesize buttonDescriptor=_buttonDescriptor - In the implementation block
@property (nonatomic,copy) NSString * buyType;                                                       //@synthesize buyType=_buyType - In the implementation block
@property (nonatomic,copy) UIColor * cloudTintColor;                                                 //@synthesize cloudTintColor=_cloudTintColor - In the implementation block
@property (assign,getter=isDisabledButSelectable,nonatomic) BOOL disabledButSelectable;              //@synthesize disabledButSelectable=_disabledButSelectable - In the implementation block
@property (nonatomic,retain) SKUIButtonViewElement * element;                                        //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) BOOL restores; 
@property (nonatomic,readonly) BOOL supportsPlayButton; 
@property (assign,nonatomic,__weak) id<SKUIItemOfferButtonDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * borderedImage;                                                //@synthesize borderedImage=_borderedImage - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) id centerImageProvider;                                                   //@synthesize centerImageProvider=_centerImageProvider - In the implementation block
@property (nonatomic,readonly) NSString * offerButtonStateDescription; 
@property (assign,nonatomic) long long fillStyle;                                                    //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) double borderColorAlphaMultiplier;                                      //@synthesize borderColorAlphaMultiplier=_borderColorAlphaMultiplier - In the implementation block
@property (assign,nonatomic) double progress;                                                        //@synthesize progress=_progress - In the implementation block
@property (getter=isShowingConfirmation,nonatomic,readonly) BOOL showingConfirmation; 
@property (assign,nonatomic) BOOL showsConfirmationState;                                            //@synthesize showsConfirmationState=_showsConfirmationState - In the implementation block
@property (assign,nonatomic) long long progressType; 
@property (assign,nonatomic) long long confirmationTitleStyle;                                       //@synthesize confirmationTitleStyle=_confirmationTitleStyle - In the implementation block
@property (assign,nonatomic) long long titleStyle;                                                   //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,getter=isUniversal,nonatomic) BOOL universal;                                      //@synthesize universal=_universal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SKUIItemOfferButtonDelegate> itemOfferDelegate; 
+(id)_defaultTitleAttributes;
+(id)_basicAnimationWithKeyPath:(id)arg1 ;
+(id)itemOfferButtonWithAppearance:(id)arg1 ;
+(id)cloudTintColorForBackgroundColor:(id)arg1 ;
+(id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2 ;
+(id)cloudImageWithTintColor:(id)arg1 arrowTintColor:(id)arg2 ;
+(BOOL)_sizeMattersForTitleStyle:(long long)arg1 ;
+(CGSize)_titleSizeThatFitsForSize:(CGSize)arg1 titleStyle:(long long)arg2 mutableAttributedString:(id)arg3 ;
+(BOOL)canOpenItemForItemState:(id)arg1 clientContext:(id)arg2 ;
+(id)playTintColorForBackgroundColor:(id)arg1 ;
+(id)playImageWithTintColor:(id)arg1 ;
+(id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(CGSize)arg3 fillStyle:(long long)arg4 universal:(BOOL)arg5 tintColor:(id)arg6 interfaceStyle:(long long)arg7 ;
+(id)_universalPlusImageWithTintColor:(id)arg1 ;
+(id)_imageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(CGSize)arg3 fillStyle:(long long)arg4 universal:(BOOL)arg5 tintColor:(id)arg6 ;
+(id)_imageForProgressType:(long long)arg1 ;
+(UIEdgeInsets)_imageInsetsForProgressType:(long long)arg1 ;
+(id)playHighlightImageWithTintColor:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<SKUIItemOfferButtonDelegate>)delegate;
-(void)setDelegate:(id<SKUIItemOfferButtonDelegate>)arg1 ;
-(SKUIButtonViewElement *)element;
-(double)progress;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(void)drawRect:(CGRect)arg1 ;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isUniversal;
-(void)setElement:(SKUIButtonViewElement *)arg1 ;
-(NSString *)buyType;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(NSString *)confirmationTitle;
-(long long)titleStyle;
-(void)setTitleStyle:(long long)arg1 ;
-(void)setItemOfferDelegate:(id<SKUIItemOfferButtonDelegate>)arg1 ;
-(void)setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeCancelGestureRecognizer;
-(BOOL)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4 ;
-(void)setColoringWithAppearance:(id)arg1 ;
-(void)removeButtonStateAnimations;
-(CGSize)layoutSizeThatFits:(CGSize)arg1 ;
-(BOOL)isShowingConfirmation;
-(void)setUniversal:(BOOL)arg1 ;
-(id<SKUIItemOfferButtonDelegate>)itemOfferDelegate;
-(BOOL)isDisabledButSelectable;
-(void)setDisabledButSelectable:(BOOL)arg1 ;
-(void)setCloudTintColor:(UIColor *)arg1 ;
-(void)_sendWillAnimate;
-(void)_sendDidAnimate;
-(void)showCloudImage;
-(long long)confirmationTitleStyle;
-(void)setConfirmationTitleStyle:(long long)arg1 ;
-(UIImage *)borderedImage;
-(void)setBorderedImage:(UIImage *)arg1 ;
-(long long)progressType;
-(void)setProgressType:(long long)arg1 ;
-(BOOL)restores;
-(double)_horizontalInsetForTitleStyle:(long long)arg1 ;
-(BOOL)showsConfirmationState;
-(SKUIBuyButtonDescriptor *)buttonDescriptor;
-(void)_reloadForCurrentState:(BOOL)arg1 ;
-(void)_updateForChangedConfirmationTitleProperty;
-(void)setProgressType:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_buttonPropertiesForState:(id)arg1 ;
-(void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateForChangedTitleProperty;
-(BOOL)supportsPlayButton;
-(void)setFillStyle:(long long)arg1 ;
-(void)setShowsConfirmationState:(BOOL)arg1 ;
-(BOOL)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(BOOL)arg5 ;
-(void)setButtonDescriptor:(SKUIBuyButtonDescriptor *)arg1 ;
-(BOOL)hasNonBorderedImage;
-(void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)hasBorderedImage;
-(void)_transitionFromBorderedImage:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_touchInBounds:(id)arg1 ;
-(CGRect)_borderedImageViewFrame;
-(id)_imageForProgressType:(long long)arg1 ;
-(void)_adjustViewOrderingForProperties:(id)arg1 ;
-(void)_insertUniversalView;
-(void)_insertBorderView;
-(void)_insertProgressIndicator;
-(void)_insertImageView;
-(void)_insertLabel;
-(void)_cancelGestureAction:(id)arg1 ;
-(void)_insertBorderedImageView;
-(void)_insertCancelGestureRecognizer;
-(NSString *)offerButtonStateDescription;
-(void)setBorderColorAlphaMultiplier:(double)arg1 ;
-(UIColor *)cloudTintColor;
-(long long)fillStyle;
-(id)centerImageProvider;
-(void)setCenterImageProvider:(id)arg1 ;
-(double)borderColorAlphaMultiplier;
-(void)setBuyType:(NSString *)arg1 ;
@end

