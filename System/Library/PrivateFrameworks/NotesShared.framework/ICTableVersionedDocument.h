/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/TTVersionedDocument.h>

@class NSUUID, CRDocument, ICTable;

@interface ICTableVersionedDocument : TTVersionedDocument {

	NSUUID* _replica;
	CRDocument* _innerTableDocument;
	ICTable* _table;

}

@property (nonatomic,retain) ICTable * table;                      //@synthesize table=_table - In the implementation block
@property (readonly) CRDocument * innerTableDocument;              //@synthesize innerTableDocument=_innerTableDocument - In the implementation block
@property (nonatomic,readonly) NSUUID * replica;                   //@synthesize replica=_replica - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
+(id)tableDoc;
+(id)tableDocWithColumnCount:(unsigned long long)arg1 rowCount:(unsigned long long)arg2 ;
-(ICTable *)table;
-(void)setTable:(ICTable *)arg1 ;
-(NSUUID *)replica;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(void)setReplica:(NSUUID *)arg1 ;
-(CRDocument *)innerTableDocument;
-(unsigned long long)mergeWithTableVersionedDocument:(id)arg1 ;
@end
