/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, _CSIRenditionBlockData, NSMutableArray;

@interface _CUIThemePixelRendition : CUIThemeRendition {

	unsigned _nimages;
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;
	_CSIRenditionBlockData* _cachedBlockDataBGRX;
	_CSIRenditionBlockData* _cachedBlockDataRGBX;
	_CSIRenditionBlockData* _cachedBlockDataGray;
	unsigned long long _sourceRowbytes;
	NSMutableArray* _layers;
	CGSize _unslicedSize;

}
-(void)dealloc;
-(int)pixelFormat;
-(id)metrics;
-(id)layerReferences;
-(CGImageRef)unslicedImage;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(unsigned long long)sourceRowbytes;
-(CGSize)unslicedSize;
-(CGImageRef)newImageFromCSIDataSlice:(slice)arg1 ofBitmap:(csibitmap*)arg2 usingColorspace:(CGColorSpaceRef)arg3 ;
-(id)copySharedBlockDataWithPixelFormat:(int)arg1 ;
-(void)setSharedBlockData:(id)arg1 ;
@end

