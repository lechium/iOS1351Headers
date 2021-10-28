/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class _PASLock;

@interface SGNamedEntityDissector : SGPipelineDissector {

	_PASLock* _lock;
	BOOL _significanceCheckEnabled;
	int _linguisticDataNotificationToken;

}
-(id)init;
-(void)dealloc;
-(void)_registerForNotifications;
-(void)dissectInternal:(id)arg1 inContext:(id)arg2 ;
-(id)initWithSignificanceCheckEnabled:(BOOL)arg1 ;
-(id)_collectDataDetectorsWithText:(id)arg1 algorithms:(id)arg2 dataDetections:(id)arg3 isMessagesSource:(BOOL)arg4 lookupQids:(id)arg5 addNamedEntity:(/*^block*/id)arg6 ;
-(void)_harvestLocationFromEntity:(id)arg1 category:(unsigned long long)arg2 enrichment:(id)arg3 algorithm:(unsigned short)arg4 ;
-(void)_collectNLPTaggerResultsWithText:(id)arg1 ddMatches:(id)arg2 eligibleRegions:(id)arg3 isMessagesSource:(BOOL)arg4 addNamedEntity:(/*^block*/id)arg5 ;
-(void)_collectCustomTaggerResultsWithText:(id)arg1 eligibleRegions:(id)arg2 isMessagesSource:(BOOL)arg3 addNamedEntity:(/*^block*/id)arg4 ;
-(id)_entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 dataDetections:(id)arg3 source:(id)arg4 cloudSync:(BOOL)arg5 algorithms:(id)arg6 ;
-(id)entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(BOOL)arg4 algorithms:(id)arg5 ;
@end
