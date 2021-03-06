/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIImageView.h>

@class NSString, UIView, PLVideoView, PLPhotoTilePlaceholderView, UILabel, PLTiledLayer;

@interface PLImageView : UIImageView {

	NSString* _name;
	UIView* _borderView;
	PLVideoView* _videoView;
	PLPhotoTilePlaceholderView* _placeholderView;
	UIView* _leftAccessoryView;
	UIView* _bottomRightAccessoryView;
	CGSize _leftAccessoryViewOffset;
	UILabel* _textBadge;
	unsigned _shadowEnabled : 1;
	unsigned _suppressShadowDrawing : 1;
	unsigned _borderViewIsVisible : 1;
	unsigned _drawsBorder : 1;
	float _aspectRatio;
	double _lastBorderAlphaTime;
	double _lastShadowAlphaTime;
	double _transitionProgress;
	BOOL _edgeAntialiasingEnabled;
	PLTiledLayer* _fullSizeImageTiledLayer;
	long long _fullSizeImageOrientation;
	BOOL _showsPlaceholder;
	double _accessoryViewsAlpha;
	double _placeholderScale;

}

@property (nonatomic,copy) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed; 
@property (assign,getter=isBorderAndAccessoriesVisible,nonatomic) BOOL borderAndAccessoriesVisible; 
@property (assign,nonatomic) float borderAndAccessoriesAlpha; 
@property (assign,nonatomic) BOOL drawsBorder; 
@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled; 
@property (assign,nonatomic) double transitionProgress;                                                          //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (nonatomic,retain) PLVideoView * videoView; 
@property (nonatomic,retain) UIView * leftAccessoryView;                                                         //@synthesize leftAccessoryView=_leftAccessoryView - In the implementation block
@property (assign,nonatomic) CGSize leftAccessoryViewOffset;                                                     //@synthesize leftAccessoryViewOffset=_leftAccessoryViewOffset - In the implementation block
@property (nonatomic,retain) UIView * bottomRightAccessoryView;                                                  //@synthesize bottomRightAccessoryView=_bottomRightAccessoryView - In the implementation block
@property (assign,nonatomic) double accessoryViewsAlpha;                                                         //@synthesize accessoryViewsAlpha=_accessoryViewsAlpha - In the implementation block
@property (nonatomic,readonly) BOOL showsPlaceholder;                                                            //@synthesize showsPlaceholder=_showsPlaceholder - In the implementation block
@property (assign,nonatomic) double placeholderScale;                                                            //@synthesize placeholderScale=_placeholderScale - In the implementation block
@property (nonatomic,readonly) CGSize placeholderSize; 
+(void)initialize;
+(CGSize)badgeOffset;
+(id)textBadgeForString:(id)arg1 photoSize:(CGSize)arg2 ;
+(BOOL)shouldDrawShadows;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(BOOL)isShadowEnabled;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(void)setDrawsBorder:(BOOL)arg1 ;
-(BOOL)drawsBorder;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg1 ;
-(void)setVideoView:(PLVideoView *)arg1 ;
-(PLVideoView *)videoView;
-(id)textBadgeString;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)isDimmed;
-(CGSize)placeholderSize;
-(void)setBorderAndAccessoriesVisible:(BOOL)arg1 ;
-(BOOL)isBorderAndAccessoriesVisible;
-(void)setFullSizeImageJPEGData:(id)arg1 size:(CGSize)arg2 orientation:(long long)arg3 ;
-(BOOL)showsPlaceholder;
-(void)setShowsPlaceholder:(BOOL)arg1 ;
-(void)setTextBadgeString:(id)arg1 ;
-(void)renderSnapshotInContext:(CGContextRef)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 allowRounding:(BOOL)arg2 ;
-(CGRect)_leftAccessoryViewFrame;
-(CGRect)_bottomRightAccessoryViewFrame;
-(void)_updateShadowPath;
-(void)updateFullSizeImageVisibleArea;
-(CGAffineTransform)_transformForFullSizeImageTiledLayer;
-(void)_setShadowEnabled:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)parentDidLayout;
-(void)setBorderAndAccessoriesAlpha:(float)arg1 forced:(BOOL)arg2 ;
-(void)setBorderAndAccessoriesAlpha:(float)arg1 ;
-(float)borderAndAccessoriesAlpha;
-(void)setPlaceholderScale:(double)arg1 ;
-(void)_updatePlaceholderLayout;
-(void)_updatePlaceholderAlpha;
-(void)setLeftAccessoryView:(UIView *)arg1 ;
-(void)setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftAccessoryViewOffset:(CGSize)arg1 ;
-(void)setBottomRightAccessoryView:(UIView *)arg1 ;
-(void)setBottomRightAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAccessoryViewsAlpha:(double)arg1 ;
-(UIView *)leftAccessoryView;
-(CGSize)leftAccessoryViewOffset;
-(UIView *)bottomRightAccessoryView;
-(double)accessoryViewsAlpha;
-(double)placeholderScale;
@end

