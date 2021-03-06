/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXPhotosDetailsHeaderSpec : PXFeatureSpec {

	unsigned long long _contentInsetEdges;

}

@property (nonatomic,readonly) unsigned long long contentInsetEdges;              //@synthesize contentInsetEdges=_contentInsetEdges - In the implementation block
@property (nonatomic,readonly) CGSize playButtonSize; 
-(double)defaultCornerRadius;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(CGSize)playButtonSize;
-(id)createViewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(unsigned long long)contentInsetEdges;
@end

