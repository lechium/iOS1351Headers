/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
@interface PBContext : NSObject

@property (assign,nonatomic) CAImageQueueRef outputImageQueue; 
@property (nonatomic,retain) CVPixelBufferPoolRef smallPool; 
@property (nonatomic,retain) CVPixelBufferPoolRef largePool; 
+(id)openGLContext;
+(id)openGLContext:(id)arg1 ;
+(id)openCLContext;
-(id)init;
-(CVBufferRef)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(void)applyFilter:(id)arg1 toSurface:(IOSurfaceRef)arg2 mirrored:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)applyFilter:(id)arg1 toSurface:(IOSurfaceRef)arg2 mirrored:(BOOL)arg3 surfaceResultHandler:(/*^block*/id)arg4 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(CVBufferRef)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(CAImageQueueRef)outputImageQueue;
-(void)setOutputImageQueue:(CAImageQueueRef)arg1 ;
-(CVPixelBufferPoolRef)largePool;
-(void)setLargePool:(CVPixelBufferPoolRef)arg1 ;
-(CVPixelBufferPoolRef)smallPool;
-(void)setSmallPool:(CVPixelBufferPoolRef)arg1 ;
-(void)preloadFilter:(id)arg1 ;
@end
