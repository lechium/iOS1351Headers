/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AVAudioFile, SNAudioStreamAnalyzer, NSObject;

@interface SNAudioFileAnalyzer : NSObject {

	AVAudioFile* _audioFile;
	SNAudioStreamAnalyzer* _streamAnalyzer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _wasCancelled;

}
-(void)analyze;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)detailedDescription;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)cancelAnalysis;
@end

