/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUBrushRasterizer : NSObject
+(long long)_rasterizeBrushStroke:(id)arg1 toROI:(SCD_Struct_NU8)arg2 maskPtr:(char*)arg3 maskPtrRowBytes:(long long)arg4 close:(BOOL)arg5 startIndex:(long long)arg6 pressureMode:(long long)arg7 ;
+(long long)rasterizeBrushStroke:(id)arg1 atPoint:(SCD_Struct_NU7)arg2 toBuffer:(id)arg3 close:(BOOL)arg4 startIndex:(long long)arg5 ;
+(void)rasterizeBrushStroke:(id)arg1 atPoint:(SCD_Struct_NU7)arg2 toBuffer:(id)arg3 ;
@end
