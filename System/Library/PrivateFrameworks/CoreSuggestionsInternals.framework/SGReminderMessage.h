/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSDictionary, SGTextMessage, SGPipelineEntity, NSArray;

@interface SGReminderMessage : NSObject {

	NSDictionary* _modelOutput;
	SGTextMessage* _message;
	SGPipelineEntity* _entity;
	NSArray* _enrichedTaggedCharacterRanges;

}

@property (nonatomic,retain) NSDictionary * modelOutput;                           //@synthesize modelOutput=_modelOutput - In the implementation block
@property (nonatomic,retain) SGTextMessage * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) SGPipelineEntity * entity;                            //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSArray * enrichedTaggedCharacterRanges;              //@synthesize enrichedTaggedCharacterRanges=_enrichedTaggedCharacterRanges - In the implementation block
+(id)blacklist;
+(id)_labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 modelOutput:(id)arg3 ;
+(id)allDayDateComponentsFromDate:(id)arg1 ;
+(BOOL)blacklistedContent:(id)arg1 ;
+(id)detectedTitleInModelOutput:(id)arg1 enrichedTaggedCharacterRanges:(id)arg2 textContent:(id)arg3 ;
+(id)regexFromJoinedArray:(id)arg1 ;
+(id)triggerOptionalTokens;
+(BOOL)validActionVerbIndexRange:(NSRange)arg1 enrichedTaggedCharacterRanges:(id)arg2 ;
+(BOOL)validObjectCoreIndexRange:(NSRange)arg1 enrichedTaggedCharacterRanges:(id)arg2 ;
+(BOOL)validModelOutput:(id)arg1 error:(id*)arg2 ;
+(BOOL)enrichedTaggedCharacterRangesContainsProfanity:(id)arg1 ;
-(SGTextMessage *)message;
-(void)setMessage:(SGTextMessage *)arg1 ;
-(void)setEntity:(SGPipelineEntity *)arg1 ;
-(SGPipelineEntity *)entity;
-(BOOL)hasTrigger;
-(id)dueLocation;
-(id)initWithMessage:(id)arg1 entity:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4 ;
-(BOOL)isConfirmation;
-(BOOL)isProposal;
-(BOOL)isTriggerOptional;
-(id)detectedTitle;
-(id)detectedDueDateComponents;
-(id)_labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 ;
-(NSDictionary *)modelOutput;
-(void)setModelOutput:(NSDictionary *)arg1 ;
-(NSArray *)enrichedTaggedCharacterRanges;
-(void)setEnrichedTaggedCharacterRanges:(NSArray *)arg1 ;
@end
