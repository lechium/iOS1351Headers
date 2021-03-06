/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NNMKProtoMailbox, NSString;

@interface NNMKProtoInitialMessagesSync : PBCodable <NSCopying> {

	NSData* _dateForRequestingMoreMessages;
	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSMutableArray* _initialMessages;
	NNMKProtoMailbox* _mailbox;
	unsigned _mailboxSyncVersion;
	NSString* _syncedMailboxAccountId;
	NSString* _syncedMailboxCustomName;
	unsigned _syncedMailboxType;
	NSString* _syncedMailboxURL;
	BOOL _organizedByThread;
	SCD_Struct_NN5 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                             //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                                  //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,retain) NSMutableArray * initialMessages;                     //@synthesize initialMessages=_initialMessages - In the implementation block
@property (nonatomic,readonly) BOOL hasDateForRequestingMoreMessages; 
@property (nonatomic,retain) NSData * dateForRequestingMoreMessages;               //@synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages - In the implementation block
@property (assign,nonatomic) BOOL hasSyncedMailboxType; 
@property (assign,nonatomic) unsigned syncedMailboxType;                           //@synthesize syncedMailboxType=_syncedMailboxType - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncedMailboxAccountId; 
@property (nonatomic,retain) NSString * syncedMailboxAccountId;                    //@synthesize syncedMailboxAccountId=_syncedMailboxAccountId - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncedMailboxURL; 
@property (nonatomic,retain) NSString * syncedMailboxURL;                          //@synthesize syncedMailboxURL=_syncedMailboxURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncedMailboxCustomName; 
@property (nonatomic,retain) NSString * syncedMailboxCustomName;                   //@synthesize syncedMailboxCustomName=_syncedMailboxCustomName - In the implementation block
@property (nonatomic,readonly) BOOL hasMailbox; 
@property (nonatomic,retain) NNMKProtoMailbox * mailbox;                           //@synthesize mailbox=_mailbox - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxSyncVersion; 
@property (assign,nonatomic) unsigned mailboxSyncVersion;                          //@synthesize mailboxSyncVersion=_mailboxSyncVersion - In the implementation block
@property (assign,nonatomic) BOOL hasOrganizedByThread; 
@property (assign,nonatomic) BOOL organizedByThread;                               //@synthesize organizedByThread=_organizedByThread - In the implementation block
+(Class)initialMessageType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NNMKProtoMailbox *)mailbox;
-(void)setMailbox:(NNMKProtoMailbox *)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(NSData *)dateSynced;
-(void)setDateForRequestingMoreMessages:(NSData *)arg1 ;
-(void)setMailboxSyncVersion:(unsigned)arg1 ;
-(void)addInitialMessage:(id)arg1 ;
-(unsigned long long)initialMessagesCount;
-(void)clearInitialMessages;
-(id)initialMessageAtIndex:(unsigned long long)arg1 ;
-(void)setSyncedMailboxAccountId:(NSString *)arg1 ;
-(void)setSyncedMailboxURL:(NSString *)arg1 ;
-(void)setSyncedMailboxCustomName:(NSString *)arg1 ;
-(BOOL)hasDateForRequestingMoreMessages;
-(void)setSyncedMailboxType:(unsigned)arg1 ;
-(void)setHasSyncedMailboxType:(BOOL)arg1 ;
-(BOOL)hasSyncedMailboxType;
-(BOOL)hasSyncedMailboxAccountId;
-(BOOL)hasSyncedMailboxURL;
-(BOOL)hasSyncedMailboxCustomName;
-(BOOL)hasMailbox;
-(void)setHasMailboxSyncVersion:(BOOL)arg1 ;
-(BOOL)hasMailboxSyncVersion;
-(void)setOrganizedByThread:(BOOL)arg1 ;
-(void)setHasOrganizedByThread:(BOOL)arg1 ;
-(BOOL)hasOrganizedByThread;
-(NSMutableArray *)initialMessages;
-(void)setInitialMessages:(NSMutableArray *)arg1 ;
-(NSData *)dateForRequestingMoreMessages;
-(unsigned)syncedMailboxType;
-(NSString *)syncedMailboxAccountId;
-(NSString *)syncedMailboxURL;
-(NSString *)syncedMailboxCustomName;
-(unsigned)mailboxSyncVersion;
-(BOOL)organizedByThread;
@end

