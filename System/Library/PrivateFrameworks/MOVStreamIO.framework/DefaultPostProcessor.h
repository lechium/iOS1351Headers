/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <MOVStreamIO/MOVStreamPostProcessor.h>

@class MOVStreamFrameConverter, NSString;

@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor> {

	MOVStreamFrameConverter* _converter;
	BOOL removePadding;
	unsigned long long exactBytesPerRow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL removePadding; 
@property (assign) unsigned long long exactBytesPerRow; 
-(void)dealloc;
-(BOOL)shouldRemovePaddingOfPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 ;
-(CVBufferRef)pixelBufferWithoutPaddingFromPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)shouldChangeBytesPerRowOfPixelBuffer:(CVBufferRef)arg1 ;
-(unsigned long long)exactBytesPerRow;
-(CVBufferRef)pixelBufferWithExactByterPerRow:(unsigned long long)arg1 fromPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
-(unsigned long long)minimumBytesPerRowForPixelBuffer:(CVBufferRef)arg1 ;
-(BOOL)removePadding;
-(CVBufferRef)processedPixelBufferFrom:(CVBufferRef)arg1 metadata:(id)arg2 reader:(id)arg3 error:(id*)arg4 ;
-(void)setRemovePadding:(BOOL)arg1 ;
-(void)setExactBytesPerRow:(unsigned long long)arg1 ;
@end

