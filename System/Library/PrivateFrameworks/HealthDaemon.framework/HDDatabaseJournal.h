/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDDatabaseJournalDelegate;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSString, NSLock, NSFileHandle, NSProgress;

@interface HDDatabaseJournal : NSObject {

	os_unfair_lock_s _progressLock;
	long long _type;
	id<HDDatabaseJournalDelegate> _delegate;
	NSString* _path;
	NSLock* _journalLock;
	NSFileHandle* _fileHandle;
	NSProgress* _parentProgress;

}

@property (nonatomic,copy) NSString * path;                                              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSLock * journalLock;                                       //@synthesize journalLock=_journalLock - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;                                  //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,retain) NSProgress * parentProgress;                                //@synthesize parentProgress=_parentProgress - In the implementation block
@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<HDDatabaseJournalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)type;
-(id<HDDatabaseJournalDelegate>)delegate;
-(void)setDelegate:(id<HDDatabaseJournalDelegate>)arg1 ;
-(void)lock;
-(void)unlock;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(BOOL)addJournalEntries:(id)arg1 error:(id*)arg2 ;
-(id)initWithType:(long long)arg1 path:(id)arg2 ;
-(id)progressForJournalMerge;
-(BOOL)mergeWithProfile:(id)arg1 ;
-(BOOL)performMergeTransactionWithProfile:(id)arg1 transactionContext:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(unsigned long long)journalFileCount;
-(BOOL)_appendData:(id)arg1 error:(id*)arg2 ;
-(id)_mergeTransactionContextWithContext:(id)arg1 ;
-(BOOL)_processJournalFilesWithProfile:(id)arg1 ;
-(void)_executeAtomically:(/*^block*/id)arg1 ;
-(id)_journalFiles;
-(BOOL)_processJournalFile:(id)arg1 profile:(id)arg2 accessibilityAssertion:(id)arg3 ;
-(unsigned)_processJournalFile:(id)arg1 profile:(id)arg2 transaction:(id)arg3 fileHandle:(id)arg4 fileSize:(unsigned long long*)arg5 error:(id*)arg6 ;
-(id)_nameOfNextJournalFile;
-(BOOL)_openNextJournalFileWithError:(id*)arg1 ;
-(id)_sortedListOfJournalFiles;
-(id)_loadJournalEntry:(id)arg1 ;
-(unsigned)_processJournalFile:(id)arg1 profile:(id)arg2 transaction:(id)arg3 fileHandle:(id)arg4 mapping:(void*)arg5 length:(unsigned long long)arg6 error:(id*)arg7 ;
-(unsigned)_processOkemoJournalWithVersion:(unsigned)arg1 fileHandle:(id)arg2 mapping:(void*)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id*)arg8 ;
-(unsigned)_processMonarchJournalWithVersion:(unsigned)arg1 fileHandle:(id)arg2 mapping:(void*)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id*)arg8 ;
-(BOOL)_loadJournalFromMapping:(void*)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id*)arg4 error:(id*)arg5 ;
-(BOOL)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id*)arg2 error:(id*)arg3 ;
-(void)_mergeJournalEntries:(id)arg1 profile:(id)arg2 ;
-(BOOL)_performPostJournalMergeWithVersion:(unsigned)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(void)_unitTesting_closeCurrentJournalFile;
-(id)_unitTesting_journalFiles;
-(NSLock *)journalLock;
-(void)setJournalLock:(NSLock *)arg1 ;
-(NSProgress *)parentProgress;
-(void)setParentProgress:(NSProgress *)arg1 ;
@end

