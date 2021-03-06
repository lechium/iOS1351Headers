/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView;

@interface PUProgressView : UIView {

	UIActivityIndicatorView* _spinner;
	long long _style;

}

@property (readonly) long long style;              //@synthesize style=_style - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)showInView:(id)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 ;
-(void)hideAnimated:(BOOL)arg1 ;
@end

