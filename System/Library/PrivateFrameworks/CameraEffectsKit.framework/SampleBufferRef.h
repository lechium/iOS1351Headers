/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class ARFrame, JTFaceAnchor, PVImageBuffer;

@interface SampleBufferRef : NSObject {

	opaqueCMSampleBufferRef _s;
	ARFrame* _arFrame;
	JTFaceAnchor* _faceAnchor;
	PVImageBuffer* _backingPVImage;

}

@property (retain) PVImageBuffer * backingPVImage;              //@synthesize backingPVImage=_backingPVImage - In the implementation block
-(void)dealloc;
-(SCD_Struct_JT6)presentationTime;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(id)arFrame;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 arFrame:(id)arg2 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 faceAnchor:(id)arg2 ;
-(id)faceAnchor;
-(PVImageBuffer *)backingPVImage;
-(void)setBackingPVImage:(PVImageBuffer *)arg1 ;
@end
