/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject {

	AVPortraitEffectsMatteInternal* _internal;

}

@property (readonly) unsigned pixelFormatType; 
@property (readonly) CVBufferRef mattingImage; 
+(void)initialize;
+(id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+(id)portraitEffectsMatteFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CVBufferRef)mattingImage;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 portraitEffectsMatteMetadataDictionary:(id)arg2 ;
-(const CGImageMetadataRef)copyAuxiliaryMetadata;
-(const CFStringRef)auxiliaryImageType;
-(id)portraitEffectsMatteByApplyingExifOrientation:(unsigned)arg1 ;
-(id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(short)versionMajor;
-(short)versionMinor;
@end
