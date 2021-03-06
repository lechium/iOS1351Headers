/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo {

	BOOL _isExpanded;
	CGSize _expandedSize;

}

@property (nonatomic,readonly) BOOL isExpanded;                  //@synthesize isExpanded=_isExpanded - In the implementation block
@property (nonatomic,readonly) CGSize expandedSize;              //@synthesize expandedSize=_expandedSize - In the implementation block
-(BOOL)isExpanded;
-(id)clone;
-(CGSize)expandedSize;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 isExpanded:(BOOL)arg8 expandedSize:(CGSize)arg9 ;
@end

