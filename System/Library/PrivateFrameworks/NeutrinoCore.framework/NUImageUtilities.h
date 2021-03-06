/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUImageUtilities : NSObject
+(void)copyPixelsFromImage:(id)arg1 rect:(SCD_Struct_NU8)arg2 destPtr:(void*)arg3 destPtrRowBytes:(long long)arg4 ;
+(void)copyBuffer:(id)arg1 rect:(SCD_Struct_NU8)arg2 toBuffer:(id)arg3 atPoint:(SCD_Struct_NU7)arg4 ;
+(void)copyPixelsFromImage:(id)arg1 atPoint:(SCD_Struct_NU7)arg2 toBuffer:(id)arg3 ;
+(void)copyPixelsFromSurfaceImage:(id)arg1 rect:(SCD_Struct_NU8)arg2 destPtr:(void*)arg3 destPtrRowBytes:(long long)arg4 ;
+(void)copyPixelsFromSurfaceImage:(id)arg1 atPoint:(SCD_Struct_NU7)arg2 toBuffer:(id)arg3 ;
+(void)copyPixelsToImage:(id)arg1 rect:(SCD_Struct_NU8)arg2 srcPtr:(const void*)arg3 srcPtrRowBytes:(long long)arg4 ;
+(void)copyPixelsToImage:(id)arg1 atPoint:(SCD_Struct_NU7)arg2 fromBuffer:(id)arg3 inRect:(SCD_Struct_NU8)arg4 ;
+(void)fillPixelsInImage:(id)arg1 rect:(SCD_Struct_NU8)arg2 srcPixel:(const void*)arg3 ;
+(void)fillPixelsInBuffer:(id)arg1 rect:(SCD_Struct_NU8)arg2 srcPixel:(const void*)arg3 ;
+(void)copyPixelsFromImage:(id)arg1 srcRect:(SCD_Struct_NU8)arg2 destImage:(id)arg3 destOrigin:(SCD_Struct_NU7)arg4 ;
+(void)copySurfaceImage:(id)arg1 toImage:(id)arg2 ;
+(void)copySurface:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toSurfaceImage:(id)arg3 atPoint:(SCD_Struct_NU7)arg4 ;
+(void)copyTexture:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toSurfaceImage:(id)arg3 atPoint:(SCD_Struct_NU7)arg4 withContext:(id)arg5 ;
+(void)renderImage:(id)arg1 toSurface:(id)arg2 atPoint:(SCD_Struct_NU7)arg3 withContext:(id)arg4 andColorSpace:(id)arg5 ;
+(long long)alignedRowBytesForWidth:(long long)arg1 bytesPerPixel:(long long)arg2 ;
@end

