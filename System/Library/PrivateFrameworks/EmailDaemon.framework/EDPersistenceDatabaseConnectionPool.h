/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDPersistenceDatabaseConnectionPoolDelegate;
@class NSLock, NSMutableSet, NSMapTable, _EDPersistenceDatabaseConnectionWrapper, EFResourcePool;

@interface EDPersistenceDatabaseConnectionPool : NSObject {

	NSLock* _cacheLock;
	NSMutableSet* _cache;
	unsigned long long _cacheSize;
	unsigned long long _cacheGeneration;
	NSLock* _checkoutLock;
	NSMapTable* _checkoutMap;
	NSLock* _writerLock;
	_EDPersistenceDatabaseConnectionWrapper* _writerConnection;
	int _writersWaiting;
	unsigned long long _maxConcurrentBackgroundReaders;
	int _backgroundReadersWaiting;
	EFResourcePool* _backgroundReaderResources;
	id<EDPersistenceDatabaseConnectionPoolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EDPersistenceDatabaseConnectionPoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long cacheSize; 
@property (nonatomic,readonly) unsigned long long maxConcurrentBackgroundReaders;                          //@synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundReadersWaiting; 
@property (nonatomic,readonly) unsigned long long writersWaiting; 
-(id)init;
-(void)dealloc;
-(id<EDPersistenceDatabaseConnectionPoolDelegate>)delegate;
-(void)setDelegate:(id<EDPersistenceDatabaseConnectionPoolDelegate>)arg1 ;
-(void)flush;
-(unsigned long long)cacheSize;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(void)checkInConnection:(id)arg1 ;
-(id)readerConnection;
-(id)writerConnection;
-(id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2 ;
-(unsigned long long)writersWaiting;
-(id)backgroundReaderConnection;
-(id)_connectionWithType:(unsigned long long)arg1 ;
-(BOOL)_lockForConnectionType:(unsigned long long)arg1 resource:(id*)arg2 ;
-(void)_unlockForConnectionType:(unsigned long long)arg1 resource:(id)arg2 ;
-(unsigned long long)maxConcurrentReaders;
-(unsigned long long)backgroundReadersWaiting;
-(unsigned long long)maxConcurrentBackgroundReaders;
@end

