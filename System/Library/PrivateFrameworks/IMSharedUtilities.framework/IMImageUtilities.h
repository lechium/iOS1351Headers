/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMImageUtilities : NSObject
+(double)scaleFactorForThumbnailWithSize:(CGSize)arg1 constraints:(IMPreviewConstraints)arg2 targetPxSize:(CGSize)arg3 shouldScaleUpPreview:(BOOL)arg4 maxUpScale:(double)arg5 ;
+(CGSize)imageRefPxSize:(CGImageRef)arg1 ;
+(void)sampleImageEdges:(char*)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 bytesPerRow:(long long)arg5 ;
+(BOOL)persistCPBitmapWithImage:(CGImageRef)arg1 url:(id)arg2 ;
+(CGImageRef)newThumbnailForTargetSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSource:(CGImageSourceRef)arg3 atIndex:(unsigned long long)arg4 mode:(long long)arg5 scale:(double)arg6 ;
+(CGSize)imageSourcePxSize:(CGImageSourceRef)arg1 ;
+(CGImageRef)newThumbnailForTargetSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSource:(CGImageSourceRef)arg3 mode:(long long)arg4 scale:(double)arg5 ;
@end

