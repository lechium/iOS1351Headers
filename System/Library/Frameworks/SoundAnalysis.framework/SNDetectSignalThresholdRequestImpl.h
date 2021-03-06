/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNSystemConfiguration, NSString;

@interface SNDetectSignalThresholdRequestImpl : NSObject <SNAnalyzing> {

	SNSystemConfiguration* _systemConfiguration;
	shared_ptr<DSPGraph::Graph>* _graph;
	unsigned _blockSize;
	double _sampleRate;
	double _magnitudeThreshold;

}

@property (assign,nonatomic) double sampleRate;                                 //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned blockSize;                                //@synthesize blockSize=_blockSize - In the implementation block
@property (assign,nonatomic) double magnitudeThreshold;                         //@synthesize magnitudeThreshold=_magnitudeThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(id)init;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(unsigned)blockSize;
-(void)updateGraph;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(void)setBlockSize:(unsigned)arg1 ;
-(double)magnitudeThreshold;
-(void)setMagnitudeThreshold:(double)arg1 ;
@end

