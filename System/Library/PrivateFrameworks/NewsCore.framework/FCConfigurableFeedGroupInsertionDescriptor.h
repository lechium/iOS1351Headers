/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedGroupInsertionDescriptor.h>

@class NSString, NSSet;

@interface FCConfigurableFeedGroupInsertionDescriptor : NSObject <FCFeedGroupInsertionDescriptor> {

	NSString* _sourceIdentifier;
	NSSet* _precedingSourceIdentifiers;
	unsigned long long _firstGroupMinPrecedingTopicGroups;
	unsigned long long _minPrecedingTopicGroups;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                                  //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * precedingSourceIdentifiers;                           //@synthesize precedingSourceIdentifiers=_precedingSourceIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long firstGroupMinPrecedingTopicGroups;              //@synthesize firstGroupMinPrecedingTopicGroups=_firstGroupMinPrecedingTopicGroups - In the implementation block
@property (nonatomic,readonly) unsigned long long minPrecedingTopicGroups;                        //@synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceIdentifier;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(id)initWithSourceIdentifier:(id)arg1 precedingSourceIdentifiers:(id)arg2 firstGroupMinPrecedingTopicGroups:(unsigned long long)arg3 minPrecedingTopicGroups:(unsigned long long)arg4 ;
-(NSSet *)precedingSourceIdentifiers;
-(unsigned long long)minPrecedingTopicGroups;
-(unsigned long long)firstGroupMinPrecedingTopicGroups;
@end

