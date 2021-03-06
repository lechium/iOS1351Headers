/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NUPixelFormat : NSObject {

	BOOL _extendedRange;
	int _CIFormat;
	unsigned _CVPixelFormat;
	long long _bytesPerPixel;
	NSString* _name;

}

@property (nonatomic,readonly) long long bytesPerPixel;              //@synthesize bytesPerPixel=_bytesPerPixel - In the implementation block
@property (nonatomic,readonly) int CIFormat;                         //@synthesize CIFormat=_CIFormat - In the implementation block
@property (nonatomic,readonly) unsigned CVPixelFormat;               //@synthesize CVPixelFormat=_CVPixelFormat - In the implementation block
@property (nonatomic,readonly) BOOL extendedRange;                   //@synthesize extendedRange=_extendedRange - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
+(id)pixelFormatForCIFormat:(int)arg1 ;
+(id)pixelFormatForCVPixelFormat:(unsigned)arg1 ;
+(id)ARGB8;
+(id)BGRA8;
+(id)RGBA8;
+(id)sRGBA8;
+(id)RGBA16;
+(id)RG16;
+(id)RGBAf;
+(id)RGBAh;
+(id)I8;
+(id)A16;
+(id)A2RGB10;
+(id)XRSRGB10;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(long long)bytesPerPixel;
-(long long)alignedRowBytesForWidth:(long long)arg1 ;
-(BOOL)isEqualToPixelFormat:(id)arg1 ;
-(int)CIFormat;
-(unsigned)CVPixelFormat;
-(BOOL)extendedRange;
@end

