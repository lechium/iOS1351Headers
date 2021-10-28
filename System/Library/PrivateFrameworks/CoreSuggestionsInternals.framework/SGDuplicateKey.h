/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SGEntityKey;
@class NSObject, NSData;

@interface SGDuplicateKey : NSObject <NSCopying> {

	long long _entityType;
	NSObject*<SGEntityKey> _entityKey;
	SGDuplicateKey* _parentKey;

}

@property (nonatomic,readonly) long long entityType;                          //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) NSObject*<SGEntityKey> entityKey;              //@synthesize entityKey=_entityKey - In the implementation block
@property (nonatomic,readonly) SGDuplicateKey * parentKey;                    //@synthesize parentKey=_parentKey - In the implementation block
@property (nonatomic,readonly) NSData * compositeHash; 
+(id)duplicateKeyForMessage:(id)arg1 fromSource:(id)arg2 ;
+(id)duplicateKeyForEmailWithSource:(id)arg1 messageId:(id)arg2 ;
+(id)duplicateKeyForTextMessageWithSource:(id)arg1 uniqueIdentifier:(id)arg2 ;
+(id)duplicateKeyForInteractionWithBundleId:(id)arg1 personHandle:(id)arg2 ;
+(id)duplicateKeyForInteraction:(id)arg1 fromBundleIdentifier:(id)arg2 ;
+(id)duplicateKeyForInteractionIdentifier:(id)arg1 fromBundleIdentifier:(id)arg2 ;
+(id)duplicateKeyForCuratedContactWithExternalId:(int)arg1 ;
+(id)duplicateKeyForPseudoContactWithIdentity:(id)arg1 parentKey:(id)arg2 ;
+(id)duplicateKeyForCuratedEventWithExternalID:(id)arg1 ;
+(id)duplicateKeyForPseudoEventWithGroupId:(id)arg1 parentKey:(id)arg2 ;
+(id)duplicateKeyForPseudoReminderWithGroupId:(id)arg1 parentKey:(id)arg2 ;
+(id)duplicateKeyForNaturalLanguageEventWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 participants:(id)arg4 parentKey:(id)arg5 ;
+(id)duplicateKeyForUnrecognizedContactWithIdentity:(id)arg1 ;
+(id)duplicateKeyForSearchableItem:(id)arg1 ;
+(id)duplicateKeyForSchemaOrg;
+(id)duplicateKeyForWebPageFromSource:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bundleId;
-(id)serialize;
-(SGDuplicateKey *)parentKey;
-(long long)entityType;
-(id)messageKey;
-(id)initWithSearchableItem:(id)arg1 ;
-(id)initWithSerialized:(id)arg1 ;
-(id)identityKey;
-(id)initWithEntityKey:(id)arg1 entityType:(long long)arg2 parentKey:(id)arg3 ;
-(id)initWithSerializedEntityKey:(id)arg1 entityType:(long long)arg2 serializedParentKey:(id)arg3 ;
-(BOOL)isEqualToDuplicateKey:(id)arg1 ;
-(id)curatedEventKey;
-(id)contactDetailKey;
-(id)curatedContactKey;
-(id)pseudoContactKey;
-(id)unrecognizedContactKey;
-(id)emailKey;
-(id)textMessageKey;
-(id)webPageKey;
-(id)interactionKey;
-(id)pseudoEventKey;
-(id)pseudoReminderKey;
-(NSData *)compositeHash;
-(NSObject*<SGEntityKey>)entityKey;
@end
