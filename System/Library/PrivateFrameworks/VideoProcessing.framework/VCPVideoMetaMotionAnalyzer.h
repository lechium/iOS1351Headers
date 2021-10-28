/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoMetaMotionSegment, NSMutableArray, NSArray;

@interface VCPVideoMetaMotionAnalyzer : NSObject {

	HinkleyDetector _hinkleyDetector;
	VCPVideoMetaMotionSegment* _activeSegment;
	NSMutableArray* _mutableResults;
	NSMutableArray* _internalResults;
	SCD_Struct_VC28 _frameTimeRange;

}

@property (nonatomic,retain,readonly) NSArray * results; 
-(id)init;
-(NSArray *)results;
-(int)finalizeAnalysis;
-(void)mergeSimilarSegments;
-(int)processFrameMetadata:(id)arg1 ;
-(BOOL)decideSegmentPointBasedOn:(float)arg1 ;
@end
