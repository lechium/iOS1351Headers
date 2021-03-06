/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSSet, NSDictionary, PGGraph, NSMutableDictionary;

@interface PGGraphRelationshipProcessor : NSObject {

	unsigned long long _runOptions;
	NSMutableArray* _analyzersToRun;
	unsigned long long _numberOfSignals;
	NSSet* _personNodes;
	NSSet* _momentNodes;
	NSSet* _contactIdentifiers;
	NSDictionary* _personIdentifierByContactIdentifier;
	PGGraph* _graph;
	NSMutableDictionary* _relationshipAnalyzerPropertiesByPersonLocalIdentifier;
	NSMutableDictionary* _partnerScoreByPersonLocalIdentifier;
	NSMutableDictionary* _parentScoreByPersonLocalIdentifier;
	NSMutableDictionary* _childScoreByPersonLocalIdentifier;
	NSMutableDictionary* _familyScoreByPersonLocalIdentifier;
	NSMutableDictionary* _coworkerScoreByPersonLocalIdentifier;
	NSMutableDictionary* _friendScoreByPersonLocalIdentifier;

}

@property (nonatomic,readonly) unsigned long long runOptions;                                                          //@synthesize runOptions=_runOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * analyzersToRun;                                                          //@synthesize analyzersToRun=_analyzersToRun - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * relationshipAnalyzerPropertiesByPersonLocalIdentifier;              //@synthesize relationshipAnalyzerPropertiesByPersonLocalIdentifier=_relationshipAnalyzerPropertiesByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * partnerScoreByPersonLocalIdentifier;                                //@synthesize partnerScoreByPersonLocalIdentifier=_partnerScoreByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * parentScoreByPersonLocalIdentifier;                                 //@synthesize parentScoreByPersonLocalIdentifier=_parentScoreByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * childScoreByPersonLocalIdentifier;                                  //@synthesize childScoreByPersonLocalIdentifier=_childScoreByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * familyScoreByPersonLocalIdentifier;                                 //@synthesize familyScoreByPersonLocalIdentifier=_familyScoreByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coworkerScoreByPersonLocalIdentifier;                               //@synthesize coworkerScoreByPersonLocalIdentifier=_coworkerScoreByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * friendScoreByPersonLocalIdentifier;                                 //@synthesize friendScoreByPersonLocalIdentifier=_friendScoreByPersonLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSSet * personNodes;                                                                    //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,readonly) NSSet * contactIdentifiers;                                                             //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDictionary * personIdentifierByContactIdentifier;                                     //@synthesize personIdentifierByContactIdentifier=_personIdentifierByContactIdentifier - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes;                                                                    //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) PGGraph * graph;                                                                        //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSignals;                                                     //@synthesize numberOfSignals=_numberOfSignals - In the implementation block
-(PGGraph *)graph;
-(NSSet *)contactIdentifiers;
-(NSSet *)momentNodes;
-(NSSet *)personNodes;
-(id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2 ;
-(void)_extractSignalsFromRunOptions;
-(unsigned long long)runOptions;
-(NSMutableArray *)analyzersToRun;
-(void)setAnalyzersToRun:(NSMutableArray *)arg1 ;
-(unsigned long long)numberOfSignals;
-(void)runRelationshipAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(void)enumerateInferredRelationshipsUsingBlock:(/*^block*/id)arg1 ;
-(void)_aggregateScores;
-(void)_enumerateInferredPartnerUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateInferredRelationshipMembersFromScores:(id)arg1 cumulativeThreshold:(double)arg2 minimumConfidence:(double)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_socialGroupNodesIncludingPersonLocalIdentifiers:(id)arg1 minimumMatches:(unsigned long long)arg2 amongSocialGroupNodes:(id)arg3 ;
-(void)_enumerateInferredFamilyMembersUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateInferredParentsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateInferredChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateInferredFriendsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateInferredCoworkersUsingBlock:(/*^block*/id)arg1 ;
-(id)personLocalIdentifierForContactIdentifier:(id)arg1 ;
-(id)relationshipAnalyzerPropertiesForPersonLocalIdentifier:(id)arg1 ;
-(NSDictionary *)personIdentifierByContactIdentifier;
-(NSMutableDictionary *)relationshipAnalyzerPropertiesByPersonLocalIdentifier;
-(void)setRelationshipAnalyzerPropertiesByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)partnerScoreByPersonLocalIdentifier;
-(void)setPartnerScoreByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)parentScoreByPersonLocalIdentifier;
-(void)setParentScoreByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)childScoreByPersonLocalIdentifier;
-(void)setChildScoreByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)familyScoreByPersonLocalIdentifier;
-(void)setFamilyScoreByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)coworkerScoreByPersonLocalIdentifier;
-(void)setCoworkerScoreByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)friendScoreByPersonLocalIdentifier;
-(void)setFriendScoreByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
@end

