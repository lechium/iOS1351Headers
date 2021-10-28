/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectContext, PFUbiquityMetadataFactoryEntry, NSString, PFUbiquityLocation;

@interface _PFUbiquityStack : NSObject {

	NSManagedObjectContext* _metadataMOC;
	PFUbiquityMetadataFactoryEntry* _metadataEntry;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootURL;
	NSString* _storeName;
	PFUbiquityLocation* _metadataStoreFileLocation;

}

@property (nonatomic,readonly) NSManagedObjectContext * metadataMOC;                        //@synthesize metadataMOC=_metadataMOC - In the implementation block
@property (nonatomic,readonly) PFUbiquityMetadataFactoryEntry * metadataEntry;              //@synthesize metadataEntry=_metadataEntry - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                      //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootURL;                        //@synthesize ubiquityRootURL=_ubiquityRootURL - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                        //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * metadataStoreFileLocation;              //@synthesize metadataStoreFileLocation=_metadataStoreFileLocation - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)allPeers;
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootURL;
-(NSManagedObjectContext *)metadataMOC;
-(id)createMetadataStoreKnowledgeVector:(id*)arg1 ;
-(id)createMinMetadataStoreKnowledgeVector:(id*)arg1 ;
-(PFUbiquityLocation *)metadataStoreFileLocation;
-(id)initWithMetadataEntry:(id)arg1 ;
-(BOOL)purgeAndInitializeMetadataStoreFileWithError:(id*)arg1 ;
-(BOOL)purgeMetadataForStoreMetadata:(id)arg1 withError:(id*)arg2 ;
-(id)peerForPeerID:(id)arg1 createIfMissing:(BOOL)arg2 ;
-(PFUbiquityMetadataFactoryEntry *)metadataEntry;
@end
