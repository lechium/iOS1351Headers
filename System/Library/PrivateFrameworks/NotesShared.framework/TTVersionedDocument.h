/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NotesShared/NotesShared-Structs.h>
@interface TTVersionedDocument : NSObject {

	Document* _documentArchive;

}

@property (assign,nonatomic) Document* documentArchive;                            //@synthesize documentArchive=_documentArchive - In the implementation block
@property (nonatomic,readonly) unsigned long long futureVersionCount; 
+(unsigned)versionedDocumentSerializationVersion;
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)serialize;
-(void)loadArchive:(const Document*)arg1 ;
-(void)saveToArchive:(Document*)arg1 ;
-(id)initWithArchive:(const Document*)arg1 ;
-(void)loadData:(id)arg1 ;
-(void)loadDocumentArchive:(Document*)arg1 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(Document*)documentArchive;
-(void)saveCurrentVersion:(Version*)arg1 ;
-(unsigned long long)futureVersionCount;
-(unsigned long long)mergeWithVersionedDocument:(id)arg1 ;
-(unsigned)maxDocumentVersion;
-(void)setDocumentArchive:(Document*)arg1 ;
@end

