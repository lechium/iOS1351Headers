/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@class SXViewport, SXImageView, SXComponentView, NSString;

@interface SXAnimatedImageController : NSObject <SXViewportChangeListener> {

	BOOL _isReceivingViewportChanges;
	SXViewport* _viewport;
	SXImageView* _imageView;
	double _previousYOffset;
	SXComponentView* _componentView;

}

@property (assign,nonatomic,__weak) SXViewport * viewport;                        //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) SXImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double previousYOffset;                              //@synthesize previousYOffset=_previousYOffset - In the implementation block
@property (assign,nonatomic,__weak) SXComponentView * componentView;              //@synthesize componentView=_componentView - In the implementation block
@property (assign,nonatomic) BOOL isReceivingViewportChanges;                     //@synthesize isReceivingViewportChanges=_isReceivingViewportChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(SXImageView *)imageView;
-(void)setComponentView:(SXComponentView *)arg1 ;
-(SXComponentView *)componentView;
-(void)setImageView:(SXImageView *)arg1 ;
-(void)setViewport:(SXViewport *)arg1 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(double)previousYOffset;
-(void)setPreviousYOffset:(double)arg1 ;
-(BOOL)isReceivingViewportChanges;
-(void)setIsReceivingViewportChanges:(BOOL)arg1 ;
-(id)initWithImageComponentView:(id)arg1 viewport:(id)arg2 imageView:(id)arg3 ;
-(void)registerForViewportChanges;
-(void)unregisterForViewportChanges;
@end
