/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class OBImageView, OBTemplateLabel, OBTemplateHeaderDetailLabel, NSArray, OBHeaderAccessoryButton, UIImage;

@interface OBHeaderView : UIView {

	BOOL _usingSymbolImage;
	BOOL _iconInheritsTint;
	OBImageView* _imageView;
	OBTemplateLabel* _headerLabel;
	OBTemplateHeaderDetailLabel* _detailLabel;
	NSArray* _imageViewConstraints;
	NSArray* _detailLabelConstraints;
	OBHeaderAccessoryButton* _accessoryButton;
	unsigned long long _templateType;
	UIImage* _originalIconImage;

}

@property (nonatomic,retain) OBImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) OBTemplateLabel * headerLabel;                          //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) OBTemplateHeaderDetailLabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSArray * imageViewConstraints;                         //@synthesize imageViewConstraints=_imageViewConstraints - In the implementation block
@property (nonatomic,retain) NSArray * detailLabelConstraints;                       //@synthesize detailLabelConstraints=_detailLabelConstraints - In the implementation block
@property (nonatomic,retain) OBHeaderAccessoryButton * accessoryButton;              //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (assign,nonatomic) unsigned long long templateType;                        //@synthesize templateType=_templateType - In the implementation block
@property (nonatomic,retain) UIImage * originalIconImage;                            //@synthesize originalIconImage=_originalIconImage - In the implementation block
@property (assign,nonatomic) BOOL iconInheritsTint;                                  //@synthesize iconInheritsTint=_iconInheritsTint - In the implementation block
-(void)setTitle:(id)arg1 ;
-(void)setLanguage:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(OBImageView *)imageView;
-(void)tintColorDidChange;
-(id)initWithTitle:(id)arg1 ;
-(id)symbolConfiguration;
-(void)setImageView:(OBImageView *)arg1 ;
-(OBHeaderAccessoryButton *)accessoryButton;
-(void)setDetailText:(id)arg1 ;
-(double)bottomPadding;
-(unsigned long long)templateType;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 ;
-(double)topPadding;
-(double)iconToHeaderLabelPadding;
-(double)headerLabelToDetailLabelPadding;
-(double)detailLabelToAccessoryButtonPadding;
-(void)addAccessoryButton:(id)arg1 ;
-(BOOL)iconInheritsTint;
-(void)setIconInheritsTint:(BOOL)arg1 ;
-(void)setIcon:(id)arg1 accessibilityLabel:(id)arg2 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)setHeaderLabel:(OBTemplateLabel *)arg1 ;
-(OBTemplateLabel *)headerLabel;
-(id)_symbolIconForHeaderStyle:(id)arg1 configuration:(id)arg2 ;
-(id)_createImageView:(id)arg1 ;
-(void)extendedInitWithTitle:(id)arg1 detailText:(id)arg2 ;
-(id)headerFont;
-(id)_createDetailLabelIfNeeded;
-(void)setDetailLabel:(OBTemplateHeaderDetailLabel *)arg1 ;
-(OBTemplateHeaderDetailLabel *)detailLabel;
-(void)_updateConstraintsForImageView;
-(void)_updateConstraintsForDetailLabel;
-(void)setOriginalIconImage:(UIImage *)arg1 ;
-(void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2 ;
-(void)setAccessoryButton:(OBHeaderAccessoryButton *)arg1 ;
-(id)_detailFont;
-(UIImage *)originalIconImage;
-(NSArray *)imageViewConstraints;
-(double)iconHeight;
-(void)setImageViewConstraints:(NSArray *)arg1 ;
-(NSArray *)detailLabelConstraints;
-(void)setDetailLabelConstraints:(NSArray *)arg1 ;
@end

