/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSMutableDictionary;

@interface SGNaturalLanguageDissector : SGPipelineDissector {

	NSMutableDictionary* _conversations;

}
+(id)ipsosMessageWithEntity:(id)arg1 store:(id)arg2 ;
+(BOOL)allowNaturalLanguageDissector;
-(id)init;
-(void)dissectInternal:(id)arg1 inContext:(id)arg2 ;
-(id)initWithoutSharedInstance;
-(void)addEnrichmentForEvents:(id)arg1 forMessage:(id)arg2 toEntity:(id)arg3 ;
-(id)conversationWithIdentifier:(id)arg1 ;
@end
