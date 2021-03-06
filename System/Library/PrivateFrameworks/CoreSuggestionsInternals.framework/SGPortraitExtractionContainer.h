/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SGExternalEnrichment.h>

@class NSMutableArray, NSMutableDictionary, PPSource;

@interface SGPortraitExtractionContainer : NSObject <SGExternalEnrichment> {

	BOOL _cloudSync;
	NSMutableArray* _entities;
	NSMutableArray* _topics;
	NSMutableDictionary* _locations;
	PPSource* _source;
	unsigned long long _entityAlgorithm;
	unsigned long long _topicAlgorithm;
	double _decayRate;
	double _sentimentScore;

}

@property (nonatomic,retain) NSMutableArray * entities;                       //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSMutableArray * topics;                         //@synthesize topics=_topics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locations;                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) PPSource * source;                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long entityAlgorithm;              //@synthesize entityAlgorithm=_entityAlgorithm - In the implementation block
@property (assign,nonatomic) unsigned long long topicAlgorithm;               //@synthesize topicAlgorithm=_topicAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL cloudSync;                                  //@synthesize cloudSync=_cloudSync - In the implementation block
@property (assign,nonatomic) double decayRate;                                //@synthesize decayRate=_decayRate - In the implementation block
@property (assign,nonatomic) double sentimentScore;                           //@synthesize sentimentScore=_sentimentScore - In the implementation block
-(void)setSource:(PPSource *)arg1 ;
-(PPSource *)source;
-(double)decayRate;
-(double)sentimentScore;
-(NSMutableArray *)entities;
-(void)setLocations:(NSMutableDictionary *)arg1 ;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)locations;
-(NSMutableArray *)topics;
-(void)setTopics:(NSMutableArray *)arg1 ;
-(void)setDecayRate:(double)arg1 ;
-(void)setSentimentScore:(double)arg1 ;
-(void)writeWithEntityStore:(id)arg1 ;
-(void)flushWrites;
-(id)asyncWriteQueue;
-(unsigned long long)_donateLocationsWithContextualNamedEntities:(id)arg1 ;
-(void)addLocation:(id)arg1 algorithm:(unsigned short)arg2 ;
-(void)writeSynchronous;
-(unsigned long long)entityAlgorithm;
-(void)setEntityAlgorithm:(unsigned long long)arg1 ;
-(unsigned long long)topicAlgorithm;
-(void)setTopicAlgorithm:(unsigned long long)arg1 ;
-(BOOL)cloudSync;
-(void)setCloudSync:(BOOL)arg1 ;
@end

