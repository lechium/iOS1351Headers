/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIAlertControlleriOSActionSheetCancelBackgroundView.h>
#import <UIKit/UIActionSheetPresentationControllerDismissActionView.h>

@class NSString, UIButton;

@interface UIActionSheetiOSDismissActionView : _UIAlertControlleriOSActionSheetCancelBackgroundView <UIActionSheetPresentationControllerDismissActionView> {

	BOOL _usesShortCompactVerticalLayout;
	UIButton* _dismissButton;

}

@property (nonatomic,retain) UIButton * dismissButton;                         //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic) BOOL usesShortCompactVerticalLayout;              //@synthesize usesShortCompactVerticalLayout=_usesShortCompactVerticalLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setUsesShortCompactVerticalLayout:(BOOL)arg1 ;
-(BOOL)usesShortCompactVerticalLayout;
-(id)initWithContinuousCornerRadius:(double)arg1 ;
-(void)_setupDismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(double)_heightForTraitCollection:(id)arg1 ;
@end

