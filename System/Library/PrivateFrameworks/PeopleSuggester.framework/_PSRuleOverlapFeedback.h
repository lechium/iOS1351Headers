/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class BMBehaviorRetriever, _CDInteractionStore, NSUserDefaults;

@interface _PSRuleOverlapFeedback : NSObject {

	BMBehaviorRetriever* _behaviorRetriever;
	_CDInteractionStore* _interactionStore;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSUserDefaults* _ruleOverlapFeedbackDefaults;

}

@property (nonatomic,readonly) BMBehaviorRetriever * behaviorRetriever;                 //@synthesize behaviorRetriever=_behaviorRetriever - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;                    //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                   //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSUserDefaults * ruleOverlapFeedbackDefaults;              //@synthesize ruleOverlapFeedbackDefaults=_ruleOverlapFeedbackDefaults - In the implementation block
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(id)sharesheetFeedbackEventsSinceDate:(id)arg1 ;
-(id)interactionStoreEventsSinceDate:(id)arg1 ;
-(id)matchFeedbackEvent:(id)arg1 WithInteractions:(id)arg2 ;
-(void)loggingForKnowledgeStoreEvent:(id)arg1 WithMatchingInteraction:(id)arg2 ;
-(id)contextItemsFromEvent:(id)arg1 ;
-(BMBehaviorRetriever *)behaviorRetriever;
-(id)constantFeaturesFromContextItems:(id)arg1 ;
-(id)constantPETFeaturesFromContextItems:(id)arg1 ;
-(id)feedbackPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4 ;
-(BOOL)recipientPredictedCorrectlyByRule:(id)arg1 interaction:(id)arg2 bundleId:(id)arg3 ;
-(BOOL)targetAppPredictedCorrectlyByRule:(id)arg1 bundleId:(id)arg2 ;
-(id)feedbackPETPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4 ;
-(int)bucketedValue:(int)arg1 ;
-(void)reviewLastDayOfShares;
-(NSUserDefaults *)ruleOverlapFeedbackDefaults;
-(void)setRuleOverlapFeedbackDefaults:(NSUserDefaults *)arg1 ;
@end
