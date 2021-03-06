/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIView, PUCropMaskView;

@interface PUCropOverlayView : UIView {

	BOOL _cropGridVisible;
	BOOL _straightenGridVisible;
	BOOL _maskedContentVisible;
	NSArray* __oneThirdCropLines;
	NSArray* __oneNinthCropLines;
	NSArray* __maskViews;
	UIView* __cropWindowView;
	PUCropMaskView* _topMask;
	PUCropMaskView* _bottomMask;
	PUCropMaskView* _leftMask;
	PUCropMaskView* _rightMask;
	CGRect _cropRect;
	CGRect _cropRectInLocalCoordinateSpace;

}

@property (setter=_setOneThirdLines:,nonatomic,retain) NSArray * _oneThirdCropLines;                 //@synthesize _oneThirdCropLines=__oneThirdCropLines - In the implementation block
@property (setter=_setOneNinethLines:,nonatomic,retain) NSArray * _oneNinthCropLines;                //@synthesize _oneNinthCropLines=__oneNinthCropLines - In the implementation block
@property (setter=_setMaskViews:,nonatomic,retain) NSArray * _maskViews;                             //@synthesize _maskViews=__maskViews - In the implementation block
@property (setter=_setCropWindowView:,nonatomic,retain) UIView * _cropWindowView;                    //@synthesize _cropWindowView=__cropWindowView - In the implementation block
@property (assign,nonatomic) CGRect cropRectInLocalCoordinateSpace;                                  //@synthesize cropRectInLocalCoordinateSpace=_cropRectInLocalCoordinateSpace - In the implementation block
@property (nonatomic,retain) PUCropMaskView * topMask;                                               //@synthesize topMask=_topMask - In the implementation block
@property (nonatomic,retain) PUCropMaskView * bottomMask;                                            //@synthesize bottomMask=_bottomMask - In the implementation block
@property (nonatomic,retain) PUCropMaskView * leftMask;                                              //@synthesize leftMask=_leftMask - In the implementation block
@property (nonatomic,retain) PUCropMaskView * rightMask;                                             //@synthesize rightMask=_rightMask - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                        //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) id layoutReferenceItem; 
@property (assign,getter=isCropGridVisible,nonatomic) BOOL cropGridVisible;                          //@synthesize cropGridVisible=_cropGridVisible - In the implementation block
@property (assign,getter=isStraightenGridVisible,nonatomic) BOOL straightenGridVisible;              //@synthesize straightenGridVisible=_straightenGridVisible - In the implementation block
@property (assign,getter=isMaskedContentVisible,nonatomic) BOOL maskedContentVisible;                //@synthesize maskedContentVisible=_maskedContentVisible - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setTopMask:(PUCropMaskView *)arg1 ;
-(void)setBottomMask:(PUCropMaskView *)arg1 ;
-(PUCropMaskView *)topMask;
-(PUCropMaskView *)bottomMask;
-(id)layoutReferenceItem;
-(void)setMaskedContentVisible:(BOOL)arg1 ;
-(void)setMaskedContentVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateCropRectInLocalCoordinateSpace;
-(void)setCropGridVisible:(BOOL)arg1 ;
-(void)setStraightenGridVisible:(BOOL)arg1 ;
-(void)setCropGridVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStraightenGridVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setGridViews:(id)arg1 visible:(BOOL)arg2 iVarVisibilePtr:(BOOL*)arg3 animated:(BOOL)arg4 ;
-(UIView *)_cropWindowView;
-(NSArray *)_oneThirdCropLines;
-(NSArray *)_oneNinthCropLines;
-(unsigned long long)_subviewIndexForLineForCount:(unsigned long long)arg1 ;
-(id)_addLinesSpacedForCount:(unsigned long long)arg1 drawFirstAndLast:(BOOL)arg2 visible:(BOOL)arg3 ;
-(id)_createConstraintsForLine:(id)arg1 centerMultiplier:(double)arg2 vertical:(BOOL)arg3 ;
-(id)_createLineViewForCount:(unsigned long long)arg1 ;
-(id)_createMaskView;
-(BOOL)isCropGridVisible;
-(BOOL)isStraightenGridVisible;
-(BOOL)isMaskedContentVisible;
-(void)_setOneThirdLines:(id)arg1 ;
-(void)_setOneNinethLines:(id)arg1 ;
-(NSArray *)_maskViews;
-(void)_setMaskViews:(id)arg1 ;
-(void)_setCropWindowView:(id)arg1 ;
-(CGRect)cropRectInLocalCoordinateSpace;
-(void)setCropRectInLocalCoordinateSpace:(CGRect)arg1 ;
-(PUCropMaskView *)leftMask;
-(void)setLeftMask:(PUCropMaskView *)arg1 ;
-(PUCropMaskView *)rightMask;
-(void)setRightMask:(PUCropMaskView *)arg1 ;
@end

