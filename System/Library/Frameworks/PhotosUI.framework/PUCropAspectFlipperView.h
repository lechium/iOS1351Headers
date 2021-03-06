/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol PUCropAspectViewControllerDelegate;
@class UIButton, NSArray;

@interface PUCropAspectFlipperView : UIView {

	UIButton* _horizontalAspectButton;
	UIButton* _verticalAspectButton;
	NSArray* _layoutConstraints;
	BOOL _enabled;
	id<PUCropAspectViewControllerDelegate> _delegate;
	long long _aspectRatioOrientation;
	long long _layoutOrientation;

}

@property (assign,nonatomic,__weak) id<PUCropAspectViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long aspectRatioOrientation;                                    //@synthesize aspectRatioOrientation=_aspectRatioOrientation - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                                         //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                        //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<PUCropAspectViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PUCropAspectViewControllerDelegate>)arg1 ;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(id)initWithLayoutOrientation:(long long)arg1 ;
-(void)setAspectRatioOrientation:(long long)arg1 ;
-(void)aspectRatioButtonPressed:(id)arg1 ;
-(long long)aspectRatioOrientation;
@end

