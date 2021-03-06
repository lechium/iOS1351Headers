/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIFont, UIColor;


@protocol TKVibrationPickerStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL vibrationPickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long vibrationPickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * vibrationPickerCellTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomVibrationPickerHeaderView; 
@property (nonatomic,readonly) UIFont * vibrationPickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset vibrationPickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets; 
@property (nonatomic,readonly) UIColor * vibrationPickerCustomBackgroundColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCustomTableSeparatorColor; 
@property (nonatomic,readonly) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode; 
@property (nonatomic,readonly) BOOL vibrationPickerHeaderTextShouldBeUppercase; 
@optional
-(UIColor *)vibrationPickerCustomBackgroundColor;
-(UIColor *)vibrationPickerCustomTableSeparatorColor;
-(long long)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
-(BOOL)vibrationPickerHeaderTextShouldBeUppercase;

@required
-(id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(BOOL)vibrationPickerUsesOpaqueBackground;
-(long long)vibrationPickerTableViewSeparatorStyle;
-(UIFont *)vibrationPickerCellTextFont;
-(UIColor *)vibrationPickerCellTextColor;
-(UIColor *)vibrationPickerCellHighlightedTextColor;
-(UIColor *)vibrationPickerCellBackgroundColor;
-(BOOL)wantsCustomVibrationPickerHeaderView;
-(UIFont *)vibrationPickerHeaderTextFont;
-(UIColor *)vibrationPickerHeaderTextColor;
-(UIColor *)vibrationPickerHeaderTextShadowColor;
-(UIOffset)vibrationPickerHeaderTextShadowOffset;
-(UIEdgeInsets)vibrationPickerHeaderTextPaddingInsets;

@end

