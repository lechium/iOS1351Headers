/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, _TVImageView, NSTimer;

@interface VUIImageProxyAnimator : NSObject {

	BOOL _animating;
	BOOL _cachingEnabled;
	NSArray* _imageProxies;
	unsigned long long _animationOptions;
	double _animationDuration;
	double _transitionInterval;
	unsigned long long _displayImageIndex;
	unsigned long long _indexOfFetchedImage;
	_TVImageView* _imageView;
	NSTimer* _transitionTimer;

}

@property (assign,nonatomic) unsigned long long displayImageIndex;                     //@synthesize displayImageIndex=_displayImageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfFetchedImage;                   //@synthesize indexOfFetchedImage=_indexOfFetchedImage - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * transitionTimer;                         //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                        //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isCachingEnabled,nonatomic) BOOL cachingEnabled;              //@synthesize cachingEnabled=_cachingEnabled - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                                     //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) unsigned long long animationOptions;                      //@synthesize animationOptions=_animationOptions - In the implementation block
@property (assign,nonatomic) double animationDuration;                                 //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double transitionInterval;                                //@synthesize transitionInterval=_transitionInterval - In the implementation block
-(id)init;
-(_TVImageView *)imageView;
-(BOOL)isAnimating;
-(void)startAnimation;
-(void)stopAnimation;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(unsigned long long)animationOptions;
-(void)setAnimationOptions:(unsigned long long)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(BOOL)isCachingEnabled;
-(double)transitionInterval;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(void)_setImage:(id)arg1 animated:(BOOL)arg2 ;
-(NSTimer *)transitionTimer;
-(void)setTransitionTimer:(NSTimer *)arg1 ;
-(void)setImageProxies:(NSArray *)arg1 ;
-(NSArray *)imageProxies;
-(void)setTransitionInterval:(double)arg1 ;
-(id)initWithImageView:(id)arg1 andProxies:(id)arg2 ;
-(void)_fetchNext;
-(void)_displayIntervalTimerFired:(id)arg1 ;
-(void)setDisplayImageIndex:(unsigned long long)arg1 ;
-(void)_updateImageWithIndex:(unsigned long long)arg1 ;
-(void)loadImageProxy:(id)arg1 withWeakObject:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfFetchedImage;
-(void)setIndexOfFetchedImage:(unsigned long long)arg1 ;
-(unsigned long long)displayImageIndex;
@end
