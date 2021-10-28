/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <PlatterKit/PLPlatterView.h>

@class SBBestAppSuggestion, UIImageView, UILabel, UIView;

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView {

	SBBestAppSuggestion* _suggestion;
	UIImageView* _iconView;
	UILabel* _appLabel;
	UILabel* _descriptionLabel;
	unsigned long long _style;
	BOOL _highlighted;
	UIView* _highlightDarkeningView;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) SBBestAppSuggestion * representedAppSuggestion; 
@property (nonatomic,readonly) unsigned long long style;                                    //@synthesize style=_style - In the implementation block
-(unsigned long long)style;
-(id)_textStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_titleFont;
-(id)initWithRecipe:(long long)arg1 ;
-(id)_descriptionFont;
-(void)_configureConstraints;
-(id)initWithFrame:(CGRect)arg1 appSuggestion:(id)arg2 style:(unsigned long long)arg3 ;
-(void)_createAppLabelForSuggestion:(id)arg1 ;
-(void)_createIconViewForSuggestion:(id)arg1 ;
-(void)_createDescriptionLabelForSuggestion:(id)arg1 ;
-(void)_createDarkeningView;
-(void)_updateAppearanceForCurrentUserInterfaceStyle;
-(BOOL)_isSingleLine;
-(id)_appTitleForSuggestion:(id)arg1 ;
-(id)_meCardShortName;
-(id)_firstWakeGreetingString;
-(id)_descriptionStringForSuggestion:(id)arg1 ;
-(id)_iconImageFromAppWithBundleIdentifier:(id)arg1 withIconImageCache:(id)arg2 ;
-(SBBestAppSuggestion *)representedAppSuggestion;
@end
