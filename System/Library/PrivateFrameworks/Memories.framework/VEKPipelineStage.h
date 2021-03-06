/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, VEKProgress;

@interface VEKPipelineStage : NSObject {

	BOOL _isCancelled;
	NSArray* _outputType;
	VEKProgress* _progress;

}

@property (readonly) NSArray * inputTypes; 
@property (readonly) NSArray * outputType;                //@synthesize outputType=_outputType - In the implementation block
@property (readonly) VEKProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (assign) BOOL isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
-(BOOL)isCancelled;
-(VEKProgress *)progress;
-(NSArray *)outputType;
-(void)setIsCancelled:(BOOL)arg1 ;
-(id)outputTypes;
-(NSArray *)inputTypes;
-(id)runStageWithInput:(id)arg1 ;
@end

