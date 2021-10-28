/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSNovDetector : NSObject {

	void* _novDetect;

}
-(void)dealloc;
-(void)reset;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)resetBest;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getAnalyzedResultForPhraseId:(unsigned)arg1 ;
-(unsigned)numResultsAvailable;
-(id)getOptionValue:(id)arg1 ;
@end
