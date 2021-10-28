/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXGDisplayAssetPixelBufferSource <NSObject>
@property (nonatomic,readonly) CVBufferRef currentPixelBuffer; 
@property (nonatomic,readonly) CGAffineTransform videoRotationTransform; 
@property (nonatomic,copy) id pixelBufferDidChangeHandler; 
@required
-(CGAffineTransform)videoRotationTransform;
-(CVBufferRef)currentPixelBuffer;
-(void)setPixelBufferDidChangeHandler:(/*^block*/id)arg1;
-(id)pixelBufferDidChangeHandler;

@end
