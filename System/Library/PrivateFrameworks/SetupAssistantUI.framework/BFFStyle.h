/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
@interface BFFStyle : NSObject
+(id)sharedStyle;
-(id)backgroundColor;
-(CGSize)_effectiveSizeForIconSize:(CGSize)arg1 inView:(id)arg2 ;
-(double)headerYOffsetForIconSize:(CGSize)arg1 inView:(id)arg2 ;
-(double)headerIconBaselineOffsetForView:(id)arg1 ;
-(double)headerTitleBaselineOffsetForView:(id)arg1 hasIcon:(BOOL)arg2 ;
-(double)baselineInsetForHeaderTitle;
-(id)headerTitleFont;
-(void)applyThemeToNavigationController:(id)arg1 allowUnderlap:(BOOL)arg2 ;
-(UIEdgeInsets)horizontalInsetsForContainingInView:(id)arg1 width:(double)arg2 ;
-(id)tableCellFont;
-(double)headerTitleBaselineOffsetForView:(id)arg1 iconSize:(CGSize)arg2 ;
-(double)headerYOffsetForIcon:(id)arg1 inView:(id)arg2 ;
-(double)headerIconBaselineOffset;
-(double)headerTitleBaselineOffsetHasIcon:(BOOL)arg1 ;
-(double)headerSubheaderBaselineSpacingForView:(id)arg1 ;
-(double)screenHeaderHeightForView:(id)arg1 ;
-(double)screenHeaderFooterSideInsetForView:(id)arg1 ;
-(UIEdgeInsets)edgeInsetsForHeaderView:(id)arg1 ;
-(double)singleLineCellHeightForTable:(id)arg1 ;
-(double)nonTableHorizontalMargin;
-(double)horizontalMarginForView:(id)arg1 ;
-(UIEdgeInsets)edgeInsetsForTable:(id)arg1 ;
-(void)applyThemeToNavigationController:(id)arg1 ;
-(id)continueButtonWithTitle:(id)arg1 inView:(id)arg2 ;
-(CGSize)sizeForContinueButtonInAncestor:(id)arg1 ;
-(double)tallRowHeight;
-(void)applyThemeToLabel:(id)arg1 ;
-(void)applyThemeToTextView:(id)arg1 ;
-(void)applyThemeToAllTableViews;
-(void)applyThemeToTitleLabel:(id)arg1 ;
-(void)applyThemeToTableCell:(id)arg1 ;
-(void)applyThemeToSectionHeaderLabel:(id)arg1 ;
-(void)applyAutomaticScrollToEdgeBehaviorOnNavgationItem:(id)arg1 ;
-(void)applyThemeToRemoteUIWebViewController:(id)arg1 ;
@end
