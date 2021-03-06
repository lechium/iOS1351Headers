/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDIndexableItem.h>

@class NSString, NSDate, NSData, CSSearchableItem, EDSearchableIndexAttachmentItemMetadatum, EFPromise;

@interface EDSearchableIndexAttachmentItem : NSObject <EFLoggable, EDIndexableItem> {

	CSSearchableItem* _searchableItem;
	BOOL _requiresPreprocessing;
	NSString* _identifier;
	NSData* _underlyingData;
	long long _indexingType;
	unsigned long long _itemInstantiationTime;
	NSString* _attachmentPersistentID;
	NSString* _messagePersistentID;
	EDSearchableIndexAttachmentItemMetadatum* _metadatum;
	EFPromise* _attributeSetForFilePromise;
	double _searchableItemProcessingDelay;

}

@property (nonatomic,retain) EFPromise * attributeSetForFilePromise;                            //@synthesize attributeSetForFilePromise=_attributeSetForFilePromise - In the implementation block
@property (nonatomic,copy) NSString * attachmentPersistentID;                                   //@synthesize attachmentPersistentID=_attachmentPersistentID - In the implementation block
@property (nonatomic,copy) NSString * messagePersistentID;                                      //@synthesize messagePersistentID=_messagePersistentID - In the implementation block
@property (nonatomic,retain) EDSearchableIndexAttachmentItemMetadatum * metadatum;              //@synthesize metadatum=_metadatum - In the implementation block
@property (assign,nonatomic) BOOL requiresPreprocessing;                                        //@synthesize requiresPreprocessing=_requiresPreprocessing - In the implementation block
@property (assign,nonatomic) double searchableItemProcessingDelay;                              //@synthesize searchableItemProcessingDelay=_searchableItemProcessingDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * domainIdentifier; 
@property (assign,nonatomic) long long indexingType;                                            //@synthesize indexingType=_indexingType - In the implementation block
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) unsigned long long itemInstantiationTime;                        //@synthesize itemInstantiationTime=_itemInstantiationTime - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedSizeInBytes; 
@property (nonatomic,retain) NSData * underlyingData;                                           //@synthesize underlyingData=_underlyingData - In the implementation block
@property (nonatomic,readonly) BOOL hasCompleteData; 
@property (nonatomic,readonly) BOOL alwaysMarkAsIndexed; 
@property (nonatomic,readonly) BOOL shouldExcludeFromIndex; 
+(id)log;
+(id)attachmentPersistentIDFromItemIdentifier:(id)arg1 ;
+(id)identifierForAttachmentPersistentID:(id)arg1 ;
-(NSString *)domainIdentifier;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(NSData *)underlyingData;
-(id)searchableItem;
-(NSDate *)dateReceived;
-(void)setMessagePersistentID:(NSString *)arg1 ;
-(void)setIndexingType:(long long)arg1 ;
-(BOOL)shouldExcludeFromIndex;
-(void)setNeedsAllAttributesIndexingType;
-(long long)indexingType;
-(id)fetchIndexableAttachments;
-(NSString *)messagePersistentID;
-(unsigned long long)estimatedSizeInBytes;
-(BOOL)alwaysMarkAsIndexed;
-(BOOL)requiresPreprocessing;
-(void)setRequiresPreprocessing:(BOOL)arg1 ;
-(EFPromise *)attributeSetForFilePromise;
-(EDSearchableIndexAttachmentItemMetadatum *)metadatum;
-(unsigned long long)itemInstantiationTime;
-(void)setUnderlyingData:(NSData *)arg1 ;
-(BOOL)hasCompleteData;
-(id)initWithAttachmentPersistentID:(id)arg1 messagePersistentID:(id)arg2 metadatum:(id)arg3 ;
-(NSString *)attachmentPersistentID;
-(void)setAttachmentPersistentID:(NSString *)arg1 ;
-(void)setMetadatum:(EDSearchableIndexAttachmentItemMetadatum *)arg1 ;
-(void)setAttributeSetForFilePromise:(EFPromise *)arg1 ;
-(double)searchableItemProcessingDelay;
-(void)setSearchableItemProcessingDelay:(double)arg1 ;
@end

