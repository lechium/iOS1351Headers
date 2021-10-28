/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@interface PUAccessoryTileLayoutInfo : PUTileLayoutInfo {

	double _minimumVisibleHeight;
	CGRect _untransformedContentFrame;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) CGRect untransformedContentFrame;              //@synthesize untransformedContentFrame=_untransformedContentFrame - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) double minimumVisibleHeight;                   //@synthesize minimumVisibleHeight=_minimumVisibleHeight - In the implementation block
-(UIEdgeInsets)contentInsets;
-(id)clone;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(CGRect)arg8 contentInsets:(UIEdgeInsets)arg9 minimumVisibleHeight:(double)arg10 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(CGRect)untransformedContentFrame;
-(double)minimumVisibleHeight;
@end
