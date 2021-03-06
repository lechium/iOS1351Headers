/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMExpandableMenuButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@protocol CAMTimerButtonDelegate;
@class UIImageView, NSString;

@interface CAMTimerButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {

	BOOL _hideOffWhenCollapsed;
	id<CAMTimerButtonDelegate> _delegate;
	UIImageView* __glyphView;

}

@property (nonatomic,readonly) UIImageView * _glyphView;                              //@synthesize _glyphView=__glyphView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMTimerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long duration; 
@property (assign,nonatomic) BOOL hideOffWhenCollapsed;                               //@synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CAMTimerButtonDelegate>)delegate;
-(void)setDelegate:(id<CAMTimerButtonDelegate>)arg1 ;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(id)headerView;
-(UIImageView *)_glyphView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(id)_currentGlyphImageForAccessibiliyHUD:(BOOL)arg1 ;
-(void)_commonCAMTimerButtonInitialization;
-(void)setDuration:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateCurrentGlyphImage;
-(BOOL)hideOffWhenCollapsed;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 ;
-(double)padHeaderViewContentInsetLeft;
-(id)shownIndexesWhileCollapsed;
@end

