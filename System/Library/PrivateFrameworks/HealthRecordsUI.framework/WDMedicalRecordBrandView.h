/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HKClinicalBrandable;
@class UILabel, WDClinicalSourcesDataProvider, WDBrandLogoView, UIStackView, UIView;

@interface WDMedicalRecordBrandView : UIView {

	UILabel* _brandTitleLabel;
	UILabel* _brandSubtitleLabel;
	UILabel* _brandDetailLabel;
	id<HKClinicalBrandable> _brandable;
	WDClinicalSourcesDataProvider* _dataProvider;
	WDBrandLogoView* _logoView;
	UIStackView* _stackView;
	UIView* _logoAlignedContentView;
	UIStackView* _verticalSpecContainerView;

}

@property (nonatomic,readonly) id<HKClinicalBrandable> brandable;                         //@synthesize brandable=_brandable - In the implementation block
@property (nonatomic,readonly) WDClinicalSourcesDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) WDBrandLogoView * logoView;                                //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UIView * logoAlignedContentView;                           //@synthesize logoAlignedContentView=_logoAlignedContentView - In the implementation block
@property (nonatomic,readonly) UIStackView * verticalSpecContainerView;                   //@synthesize verticalSpecContainerView=_verticalSpecContainerView - In the implementation block
@property (nonatomic,readonly) UILabel * brandTitleLabel;                                 //@synthesize brandTitleLabel=_brandTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * brandSubtitleLabel;                              //@synthesize brandSubtitleLabel=_brandSubtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * brandDetailLabel;                                //@synthesize brandDetailLabel=_brandDetailLabel - In the implementation block
@property (assign,nonatomic) double logoSize; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UIStackView *)stackView;
-(void)_updateForCurrentSizeCategory;
-(WDClinicalSourcesDataProvider *)dataProvider;
-(void)_setupSubviews;
-(void)_setupConstraints;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateLabelVisibility;
-(void)setLogoSize:(double)arg1 ;
-(double)logoSize;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg1 ;
-(WDBrandLogoView *)logoView;
-(void)setBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(id<HKClinicalBrandable>)brandable;
-(UIStackView *)verticalSpecContainerView;
-(UIView *)logoAlignedContentView;
-(UILabel *)brandTitleLabel;
-(UILabel *)brandSubtitleLabel;
-(UILabel *)brandDetailLabel;
@end
