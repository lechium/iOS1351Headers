/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSMutableOrderedSet, PLManagedFolder, NSURL;

@interface PLPersistedFolderMetadata : NSObject {

	BOOL _pinned;
	BOOL _inTrash;
	BOOL _customSortAscending;
	int _customSortKey;
	NSString* _title;
	NSString* _uuid;
	NSString* _cloudGUID;
	NSNumber* _kind;
	NSMutableOrderedSet* _childUUIDs;
	NSString* _remappedUUID;
	PLManagedFolder* _folder;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLManagedFolder * folder;                      //@synthesize folder=_folder - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                           //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * cloudGUID;                          //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * kind;                               //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                   //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash;                 //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL customSortAscending;                      //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (assign,nonatomic) int customSortKey;                             //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * childUUIDs;              //@synthesize childUUIDs=_childUUIDs - In the implementation block
@property (nonatomic,retain,readonly) NSString * remappedUUID;              //@synthesize remappedUUID=_remappedUUID - In the implementation block
@property (nonatomic,readonly) BOOL isRootFolder; 
+(void)updateChildrenOrderingInFolder:(id)arg1 usingChildUUIDs:(id)arg2 sourceDescription:(id)arg3 includePendingChanges:(BOOL)arg4 ;
+(BOOL)isValidPath:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)uuid;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)kind;
-(void)setKind:(NSNumber *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)_readMetadata;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)isInTrash;
-(NSString *)cloudGUID;
-(void)removePersistedData;
-(void)updateChildrenOrderingInFolder:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(NSMutableOrderedSet *)childUUIDs;
-(id)insertFolderFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)isRootFolder;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(void)setCloudGUID:(NSString *)arg1 ;
-(void)writePersistedData;
-(void)_saveMetadata;
-(NSURL *)metadataURL;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(BOOL)customSortAscending;
-(int)customSortKey;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(void)setCustomSortKey:(int)arg1 ;
-(void)setInTrash:(BOOL)arg1 ;
-(id)initWithPLManagedFolder:(id)arg1 pathManager:(id)arg2 ;
-(void)setChildUUIDs:(NSMutableOrderedSet *)arg1 ;
-(NSString *)remappedUUID;
-(PLManagedFolder *)folder;
-(void)setFolder:(PLManagedFolder *)arg1 ;
@end
