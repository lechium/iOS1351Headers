/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAsset, NSArray, NSMutableDictionary, NSDictionary;

@interface VCPLightVideoAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	AVAsset* _avAsset;
	CGAffineTransform _transform;
	NSArray* _metaTracks;
	NSMutableDictionary* _publicMutableResults;
	NSMutableDictionary* _privateMutableResults;

}

@property (nonatomic,readonly) NSDictionary * publicResults; 
@property (nonatomic,readonly) NSDictionary * privateResults; 
-(NSDictionary *)privateResults;
-(id)findMetaTrackforType:(id)arg1 ;
-(NSDictionary *)publicResults;
-(int)processMetaTrackForType:(id)arg1 cancel:(/*^block*/id)arg2 flags:(unsigned long long*)arg3 ;
-(int)checkTimeRangeConsistency;
-(id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(int)analyzeAsset:(/*^block*/id)arg1 flags:(unsigned long long*)arg2 ;
@end
