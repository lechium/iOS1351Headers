/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNEnumeratorRefillStrategy.h>

@class NSArray, CNContactStore;

@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {

	BOOL _unifyResults;
	NSArray* _keys;
	CNContactStore* _contactStore;

}

@property (nonatomic,copy,readonly) NSArray * keys;                        //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) BOOL unifyResults;                          //@synthesize unifyResults=_unifyResults - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(NSArray *)keys;
-(CNContactStore *)contactStore;
-(BOOL)unifyResults;
-(id)initWithKeysToFetch:(id)arg1 unifyResults:(BOOL)arg2 contactStore:(id)arg3 ;
-(id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2 ;
-(id)objectsRepresentedByBatch:(id)arg1 ;
-(id)fetchContactsWithIdentifiers:(id)arg1 ;
-(id)updateChanges:(id)arg1 withFetchedContacts:(id)arg2 ;
@end
