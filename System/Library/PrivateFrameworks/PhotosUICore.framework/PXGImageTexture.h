/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGBaseTexture.h>

@interface PXGImageTexture : PXGBaseTexture {

	CGImageRef _sourceCGImage;
	CVBufferRef _sourceCVPixelBuffer;

}

@property (assign,nonatomic) CGImageRef sourceCGImage; 
@property (assign,nonatomic) CVBufferRef sourceCVPixelBuffer; 
@property (nonatomic,readonly)  orientationTransform; 
+(id)_sharedCIContext;
-(id)init;
-(void)dealloc;
-(CGImageRef)imageRepresentation;
-(void)setSourceCGImage:(CGImageRef)arg1 ;
-(CGImageRef)sourceCGImage;
-(void)setSourceCVPixelBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)sourceCVPixelBuffer;
-()orientationTransform;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX13*)arg3 spriteStyles:(const SCD_Struct_PX16*)arg4 spriteInfos:(const SCD_Struct_PX17*)arg5 screenScale:(double)arg6 count:(unsigned)arg7 ;
@end

