/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGDisplayAssetPixelBufferSource.h>

@protocol PXGVideoSessionPixelBufferSourceDelegate;
@class PXVideoSession, NSString;

@interface PXGVideoSessionPixelBufferSource : NSObject <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {

	PXVideoSession* _videoSession;
	NSString* _bufferRequestIdentifier;
	/*^block*/id _pixelBufferDidChangeHandler;
	long long _desiredPlayState;
	id<PXGVideoSessionPixelBufferSourceDelegate> _delegate;

}

@property (assign,nonatomic) long long desiredPlayState;                                                //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (assign,nonatomic,__weak) id<PXGVideoSessionPixelBufferSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CVBufferRef currentPixelBuffer; 
@property (nonatomic,readonly) CGAffineTransform videoRotationTransform; 
@property (nonatomic,copy) id pixelBufferDidChangeHandler;                                              //@synthesize pixelBufferDidChangeHandler=_pixelBufferDidChangeHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id<PXGVideoSessionPixelBufferSourceDelegate>)delegate;
-(void)setDelegate:(id<PXGVideoSessionPixelBufferSourceDelegate>)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(long long)desiredPlayState;
-(void)setDesiredPlayState:(long long)arg1 ;
-(CGAffineTransform)videoRotationTransform;
-(CVBufferRef)currentPixelBuffer;
-(void)setPixelBufferDidChangeHandler:(id)arg1 ;
-(id)pixelBufferDidChangeHandler;
-(id)initWithVideoSession:(id)arg1 ;
-(id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)_prepareVideoSession;
-(void)_updateVideoSession:(id)arg1 ;
@end

