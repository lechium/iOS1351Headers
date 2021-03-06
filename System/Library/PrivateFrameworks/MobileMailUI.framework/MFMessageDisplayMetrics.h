/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MobileMailUI/MobileMailUI-Structs.h>
@class UITraitCollection, ConversationFooterViewDisplayMetrics, UIView;

@interface MFMessageDisplayMetrics : NSObject {

	UITraitCollection* _traitCollection;
	double _topToSenderBaseline;
	double _baselineToBaselineSpacing;
	double _recipientBaselineToFirstSeparator;
	double _firstSeparatorToSubjectBaseline;
	double _headerBottomPadding;
	double _statusIndicatorVerticalSpacing;
	double _footerViewButtonsAnimationOffset;
	ConversationFooterViewDisplayMetrics* _footerViewDisplayMetrics;
	UIView* _trailingButtonView;
	UIEdgeInsets _layoutMargins;
	UIEdgeInsets _safeAreaInsets;

}

@property (nonatomic,retain) UITraitCollection * traitCollection;                                                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                                          //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                                         //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (nonatomic,retain) ConversationFooterViewDisplayMetrics * footerViewDisplayMetrics;                     //@synthesize footerViewDisplayMetrics=_footerViewDisplayMetrics - In the implementation block
@property (assign,nonatomic) double footerViewButtonsAnimationOffset;                                             //@synthesize footerViewButtonsAnimationOffset=_footerViewButtonsAnimationOffset - In the implementation block
@property (nonatomic,retain) UIView * trailingButtonView;                                                         //@synthesize trailingButtonView=_trailingButtonView - In the implementation block
@property (nonatomic,readonly) BOOL hasCompactLayout; 
@property (nonatomic,readonly) BOOL hasGenerousMargins; 
@property (nonatomic,readonly) BOOL prefersFlushSeparator; 
@property (nonatomic,readonly) double avatarDiameterForCurrentContentSize; 
@property (nonatomic,readonly) double minHorizontalSpacing; 
@property (nonatomic,readonly) double topToSenderBaseline;                                                        //@synthesize topToSenderBaseline=_topToSenderBaseline - In the implementation block
@property (nonatomic,readonly) double topToSenderBaselineInConversation; 
@property (nonatomic,readonly) double topToSenderBaselineInConversationForMailActionHeader; 
@property (nonatomic,readonly) double baselineToBaselineSpacingInConversationForMailActionHeader; 
@property (nonatomic,readonly) double baselineToBaselineSpacing;                                                  //@synthesize baselineToBaselineSpacing=_baselineToBaselineSpacing - In the implementation block
@property (nonatomic,readonly) double baselineToBaselineSpacingInConversation; 
@property (nonatomic,readonly) double recipientBaselineToFirstSeparator;                                          //@synthesize recipientBaselineToFirstSeparator=_recipientBaselineToFirstSeparator - In the implementation block
@property (nonatomic,readonly) double recipientBaselineToFirstSeparatorInConversation; 
@property (nonatomic,readonly) double firstSeparatorToSubjectBaseline;                                            //@synthesize firstSeparatorToSubjectBaseline=_firstSeparatorToSubjectBaseline - In the implementation block
@property (nonatomic,readonly) double headerBottomPadding;                                                        //@synthesize headerBottomPadding=_headerBottomPadding - In the implementation block
@property (nonatomic,readonly) double statusIndicatorHorizontalSpacing; 
@property (nonatomic,readonly) double statusIndicatorVerticalSpacing;                                             //@synthesize statusIndicatorVerticalSpacing=_statusIndicatorVerticalSpacing - In the implementation block
@property (nonatomic,readonly) double messageTopPaddingInConversation; 
@property (nonatomic,readonly) double messageBottomPaddingInConversation; 
@property (nonatomic,readonly) double messageTopPaddingInConversationForMailActionHeader; 
@property (nonatomic,readonly) double messageBottomPaddingInConversationForMailActionHeader; 
@property (nonatomic,readonly) double estimatedFooterViewHeight; 
@property (nonatomic,readonly) double footerViewTopToBaseline; 
@property (nonatomic,readonly) BOOL usePhoneLandscapeSymbolConfiguration; 
@property (nonatomic,readonly) double cellHeightToStartScroll; 
@property (nonatomic,readonly) double footerViewTrailingButtonOrigin; 
@property (nonatomic,readonly) double topToGlyphBaselineInMailActionCardHorizontalGroup; 
@property (nonatomic,readonly) double baselineToBaselineSpacingInMailActionCardHorizontalGroup; 
@property (nonatomic,readonly) double bottomSpacingInMailActionCardHorizontalGroup; 
@property (nonatomic,readonly) double topToFirstBaselineSpacingInMailActionCardVerticalGroup; 
@property (nonatomic,readonly) double bottomToLastBaselineInMailActionCardVerticalGroup; 
@property (nonatomic,readonly) double mailActionCardPreferredHeightForPad; 
@property (nonatomic,readonly) double mailActionCardMaximumContainerViewHeightForLargerMediumDetent; 
@property (nonatomic,readonly) double mailActionCardSmallerMediumDetentCoverage; 
@property (nonatomic,readonly) double mailActionCardLargerMediumDetentCoverage; 
@property (nonatomic,readonly) double conversationHeaderViewCollapsedSuperTitleTopToFirstBaseline; 
@property (nonatomic,readonly) double conversationHeaderViewExpandedSuperTitleTopToFirstBaseline; 
@property (nonatomic,readonly) BOOL conversationHeaderViewShouldHideCollapsedSuperTitle; 
@property (nonatomic,readonly) double conversationHeaderViewCollapsedTitleTopToFirstBaseline; 
@property (nonatomic,readonly) double conversationHeaderViewCollapsedTitleBottomToLastBaseline; 
@property (nonatomic,readonly) double conversationHeaderViewExpandedTitleTopToFirstBaseline; 
@property (nonatomic,readonly) double conversationHeaderViewExpandedTitleBottomToLastBaseline; 
+(id)displayMetricsWithTraitCollection:(id)arg1 layoutMargins:(UIEdgeInsets)arg2 safeAreaInsets:(UIEdgeInsets)arg3 interfaceOrientation:(long long)arg4 ;
+(double)avatarDiameter;
+(id)displayMetricsWithTraitCollection:(id)arg1 layoutMargins:(UIEdgeInsets)arg2 safeAreaInsets:(UIEdgeInsets)arg3 interfaceOrientation:(long long)arg4 trailingButtonView:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(UIEdgeInsets)safeAreaInsets;
-(UITraitCollection *)traitCollection;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(BOOL)usePhoneLandscapeSymbolConfiguration;
-(double)estimatedFooterViewHeight;
-(double)footerViewTopToBaseline;
-(BOOL)hasCompactLayout;
-(double)footerViewTrailingButtonOrigin;
-(double)avatarDiameterForCurrentContentSize;
-(BOOL)hasGenerousMargins;
-(void)setFooterViewDisplayMetrics:(ConversationFooterViewDisplayMetrics *)arg1 ;
-(void)setTrailingButtonView:(UIView *)arg1 ;
-(double)_scaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 ;
-(double)_scaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 maximumContentSizeCategory:(id)arg3 ;
-(double)messageTopPaddingInConversation;
-(double)topToSenderBaselineInConversation;
-(double)baselineToBaselineSpacingInConversation;
-(double)messageTopPaddingInConversationForMailActionHeader;
-(double)topToSenderBaselineInConversationForMailActionHeader;
-(double)baselineToBaselineSpacingInConversationForMailActionHeader;
-(ConversationFooterViewDisplayMetrics *)footerViewDisplayMetrics;
-(double)_calculateFooterViewButtonsAnimationOffset;
-(UIView *)trailingButtonView;
-(BOOL)conversationHeaderViewShouldHideCollapsedSuperTitle;
-(id)fontCacheKeyPrefix;
-(BOOL)prefersFlushSeparator;
-(double)minHorizontalSpacing;
-(double)recipientBaselineToFirstSeparatorInConversation;
-(double)statusIndicatorHorizontalSpacing;
-(double)messageBottomPaddingInConversation;
-(double)messageBottomPaddingInConversationForMailActionHeader;
-(id)_cachedFontForStyle:(id)arg1 ;
-(double)cellHeightToStartScroll;
-(double)topToGlyphBaselineInMailActionCardHorizontalGroup;
-(double)baselineToBaselineSpacingInMailActionCardHorizontalGroup;
-(double)bottomSpacingInMailActionCardHorizontalGroup;
-(double)topToFirstBaselineSpacingInMailActionCardVerticalGroup;
-(double)bottomToLastBaselineInMailActionCardVerticalGroup;
-(double)mailActionCardPreferredHeightForPad;
-(double)mailActionCardMaximumContainerViewHeightForLargerMediumDetent;
-(double)mailActionCardSmallerMediumDetentCoverage;
-(double)mailActionCardLargerMediumDetentCoverage;
-(double)conversationHeaderViewCollapsedSuperTitleTopToFirstBaseline;
-(double)conversationHeaderViewExpandedSuperTitleTopToFirstBaseline;
-(double)conversationHeaderViewCollapsedTitleTopToFirstBaseline;
-(double)conversationHeaderViewCollapsedTitleBottomToLastBaseline;
-(double)conversationHeaderViewExpandedTitleTopToFirstBaseline;
-(double)conversationHeaderViewExpandedTitleBottomToLastBaseline;
-(double)topToSenderBaseline;
-(double)baselineToBaselineSpacing;
-(double)recipientBaselineToFirstSeparator;
-(double)firstSeparatorToSubjectBaseline;
-(double)headerBottomPadding;
-(double)statusIndicatorVerticalSpacing;
-(double)footerViewButtonsAnimationOffset;
-(void)setFooterViewButtonsAnimationOffset:(double)arg1 ;
@end

