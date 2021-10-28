/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSData;

@interface _UICGImageDecompressor : NSObject {

	NSData* _imageData;
	CGSize _maxSize;
	CGImageRef _imageRef;
	unsigned long long _renderingIntent;
	unsigned long long _jpegDecodeRequestID;
	os_unfair_lock_s _metadataLock;
	os_unfair_lock_s _decompressionLock;
	struct {
		unsigned metadataFinished : 1;
		unsigned imageOrientation : 3;
		unsigned decompressionFinished : 1;
		unsigned cache : 1;
	}  _decompressorFlags;

}

@property (nonatomic,readonly) BOOL _isHardwareBased; 
+(void)flushCaches;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithData:(id)arg1 immediateLoadWithMaxSize:(CGSize)arg2 renderingIntent:(unsigned long long)arg3 cache:(BOOL)arg4 ;
-(CGImageRef)waitForImageRef;
-(long long)waitForOrientation;
-(void)_decompressEagerly:(BOOL)arg1 ;
-(void)_waitForMetadata;
-(void)_decompressionFallbackImageCreation;
-(BOOL)_isHardwareBased;
@end
