/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class UIImageView;

@interface OFUITrackingPinchView : OFUIView {

	UIImageView* _imageView;
	CGPoint _anchorPoint;
	CGPoint _originalCenter;
	CGSize _originalSize;
	BOOL _isRotating;
	double _originalAngle;
	double _currentAngle;

}

@property (assign) CGPoint originalCenter;              //@synthesize originalCenter=_originalCenter - In the implementation block
-(void)dealloc;
-(id)image;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(CGPoint)originalCenter;
-(void)setOriginalCenter:(CGPoint)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)beginTrackingPinch:(id)arg1 ;
-(void)setSize:(CGSize)arg1 angle:(float)arg2 ;
-(void)continueTrackingPinch:(id)arg1 ;
-(void)completeTrackingPinch:(id)arg1 ;
@end

