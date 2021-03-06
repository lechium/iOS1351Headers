/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@class AVTimedMetadataGroup;

@interface SampleBufferAndMetadata : NSObject {

	opaqueCMSampleBufferRef _sampleBuffer;
	AVTimedMetadataGroup* _metadata;

}

@property (assign) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (retain) AVTimedMetadataGroup * metadata;                   //@synthesize metadata=_metadata - In the implementation block
-(void)setMetadata:(AVTimedMetadataGroup *)arg1 ;
-(AVTimedMetadataGroup *)metadata;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

