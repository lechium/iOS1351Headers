/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol NURAWImageProperties <NSObject>
@property (readonly) NSString * decoderVersion; 
@property (readonly) NSArray * availableDecoderVersions; 
@property (readonly) double temperature; 
@property (readonly) double tint; 
@property (readonly) id<NURAWNoiseReductionProperties> noiseReductionProperties; 
@required
-(double)temperature;
-(double)tint;
-(NSArray *)availableDecoderVersions;
-(id)inputNeutralXYFromRGB:(const double*)arg1;
-(NSString *)decoderVersion;
-(id<NURAWNoiseReductionProperties>)noiseReductionProperties;

@end
