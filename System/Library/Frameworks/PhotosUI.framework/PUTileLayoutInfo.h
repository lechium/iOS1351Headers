/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PUTilingCoordinateSystem;
@class PUTileIdentifier, NSIndexPath, NSString;

@interface PUTileLayoutInfo : NSObject <NSCopying> {

	PUTileIdentifier* _tileIdentifier;
	double _alpha;
	double _zPosition;
	id<PUTilingCoordinateSystem> _coordinateSystem;
	CGPoint _center;
	CGSize _size;
	CGRect _contentsRect;
	UIEdgeInsets _hitTestOutset;
	UIEdgeInsets _expandedRectInsets;
	CGAffineTransform _transform;

}

@property (setter=_setTileIdentifier:,nonatomic,retain) PUTileIdentifier * tileIdentifier;                            //@synthesize tileIdentifier=_tileIdentifier - In the implementation block
@property (assign,setter=_setCenter:,nonatomic) CGPoint center;                                                       //@synthesize center=_center - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize size;                                                            //@synthesize size=_size - In the implementation block
@property (assign,setter=_setAlpha:,nonatomic) double alpha;                                                          //@synthesize alpha=_alpha - In the implementation block
@property (assign,setter=_setTransform:,nonatomic) CGAffineTransform transform;                                       //@synthesize transform=_transform - In the implementation block
@property (assign,setter=_setZPosition:,nonatomic) double zPosition;                                                  //@synthesize zPosition=_zPosition - In the implementation block
@property (setter=_setCoordinateSystem:,nonatomic,retain) id<PUTilingCoordinateSystem> coordinateSystem;              //@synthesize coordinateSystem=_coordinateSystem - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedRectInsets;                                                         //@synthesize expandedRectInsets=_expandedRectInsets - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,readonly) NSString * tileKind; 
@property (nonatomic,readonly) NSString * dataSourceIdentifier; 
@property (nonatomic,readonly) CGRect contentsRect;                                                                   //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets hitTestOutset;                                                            //@synthesize hitTestOutset=_hitTestOutset - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(CGAffineTransform)transform;
-(NSIndexPath *)indexPath;
-(double)alpha;
-(CGRect)frame;
-(CGPoint)center;
-(void)_setSize:(CGSize)arg1 ;
-(void)_setZPosition:(double)arg1 ;
-(CGPoint)parallaxOffset;
-(double)zPosition;
-(CGRect)contentsRect;
-(id)clone;
-(void)_setTransform:(CGAffineTransform)arg1 ;
-(PUTileIdentifier *)tileIdentifier;
-(NSString *)dataSourceIdentifier;
-(UIEdgeInsets)hitTestOutset;
-(void)_setCenter:(CGPoint)arg1 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(id<PUTilingCoordinateSystem>)coordinateSystem;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(CGRect)arg7 hitTestOutset:(UIEdgeInsets)arg8 coordinateSystem:(id)arg9 ;
-(UIEdgeInsets)expandedRectInsets;
-(NSString *)tileKind;
-(id)layoutInfoWithZPosition:(double)arg1 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(CGRect)arg7 coordinateSystem:(id)arg8 ;
-(id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3 ;
-(UIEdgeInsets)cropInsets;
-(id)layoutInfoWithCenter:(CGPoint)arg1 size:(CGSize)arg2 alpha:(double)arg3 tranform:(CGAffineTransform)arg4 zPosition:(double)arg5 coordinateSystem:(id)arg6 ;
-(id)layoutInfoWithCoordinateSystem:(id)arg1 ;
-(id)layoutInfoWithCenter:(CGPoint)arg1 size:(CGSize)arg2 tranform:(CGAffineTransform)arg3 ;
-(id)layoutInfoWithAlpha:(double)arg1 ;
-(void)setExpandedRectInsets:(UIEdgeInsets)arg1 ;
-(id)layoutInfoWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(void)_setTileIdentifier:(id)arg1 ;
-(void)_setAlpha:(double)arg1 ;
-(void)_setCoordinateSystem:(id)arg1 ;
@end

