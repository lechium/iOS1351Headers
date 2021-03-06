/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNonuniformTransform.h>

@class UIView, PXNonuniformTransform;

@interface _PXTransformedViewContentNonuniformTransform : PXNonuniformTransform {

	UIView* _transformedView;
	PXNonuniformTransform* _transform;

}

@property (nonatomic,readonly) UIView * transformedView;                       //@synthesize transformedView=_transformedView - In the implementation block
@property (nonatomic,readonly) PXNonuniformTransform * transform;              //@synthesize transform=_transform - In the implementation block
-(PXNonuniformTransform *)transform;
-(CGAffineTransform)affineTransformForRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(id)inverseTransform;
-(UIView *)transformedView;
-(id)initWithTransformedView:(id)arg1 transform:(id)arg2 ;
@end

