/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSString, NSArray;

@interface BWAttachedMediaSwapNode : BWNode {

	NSString* _primaryFormatToAttachedMediaKey;
	NSString* _attachedMediaKeyToPrimaryFormat;
	NSArray* _sampleBufferAttachmentsToTransfer;
	BOOL _generatesDroppedSampleMarkerBuffers;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithPrimaryFormatToAttachedMediaKey:(id)arg1 attachedMediaKeyToPrimaryFormat:(id)arg2 sampleBufferAttachmentsToTransfer:(id)arg3 generatesDroppedSampleMarkerBuffers:(BOOL)arg4 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
@end
