/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CIImage, AXMPixelBufferWrapper, NSURL;

@interface AXMPipelineContextInput : NSObject <NSSecureCoding> {

	long long _inputType;
	CIImage* _ciImage;
	AXMPixelBufferWrapper* _pixelBuffer;
	CGColorSpaceRef _extendedSRGBColorSpace;
	NSURL* _URL;
	CGSize _cachedImageURLSize;

}

@property (nonatomic,readonly) long long inputType; 
@property (nonatomic,readonly) CIImage * ciImage; 
@property (nonatomic,readonly) AXMPixelBufferWrapper * pixelBuffer; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGColorSpaceRef imageColorSpace; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)inputWithCIImage:(id)arg1 ;
+(id)inputWithPixelBuffer:(id)arg1 ;
+(id)inputWithURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(NSURL *)URL;
-(id)_initWithURL:(id)arg1 ;
-(AXMPixelBufferWrapper *)pixelBuffer;
-(CIImage *)ciImage;
-(long long)inputType;
-(id)_initWithCIImage:(id)arg1 ;
-(id)_initWithPixelBuffer:(id)arg1 ;
-(CGColorSpaceRef)imageColorSpace;
@end
