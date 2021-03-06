/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUSurfaceTile.h>

@class NUIOSurface, NSString;

@interface NUSurfaceTileAdapter : NSObject <NUSurfaceTile> {

	NUIOSurface* _surface;
	SCD_Struct_NU8 _frameRect;
	SCD_Struct_NU8 _contentRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_NU8 frameRect;                //@synthesize frameRect=_frameRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU8 contentRect;              //@synthesize contentRect=_contentRect - In the implementation block
@property (nonatomic,readonly) NUIOSurface * surface;                   //@synthesize surface=_surface - In the implementation block
-(id)init;
-(NUIOSurface *)surface;
-(SCD_Struct_NU8)contentRect;
-(SCD_Struct_NU8)frameRect;
-(id)initWithFrameRect:(SCD_Struct_NU8)arg1 contentRect:(SCD_Struct_NU8)arg2 surface:(id)arg3 ;
@end

