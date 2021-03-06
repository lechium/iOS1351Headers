/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class ML3ServiceDatabaseImport, NSError, NSData;

@interface ML3ImportOperation : NSOperation {

	/*^block*/id _clientCompletionHandler;
	BOOL _suspended;
	BOOL _success;
	float _progress;
	ML3ServiceDatabaseImport* _import;
	/*^block*/id _progressBlock;
	NSError* _error;
	NSData* _returnData;

}

@property (nonatomic,readonly) unsigned long long importSource; 
@property (nonatomic,readonly) ML3ServiceDatabaseImport * import;              //@synthesize import=_import - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) float progress;                                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id progressBlock;                                   //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,readonly) BOOL success;                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * returnData;                            //@synthesize returnData=_returnData - In the implementation block
+(id)importOperationWithSourceType:(unsigned long long)arg1 databaseImport:(id)arg2 ;
-(id)init;
-(NSError *)error;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(float)progress;
-(BOOL)isSuspended;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(BOOL)success;
-(void)setProgress:(float)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(id)longDescription;
-(unsigned long long)importSource;
-(/*^block*/id)_clientCompletionHandler;
-(ML3ServiceDatabaseImport *)import;
-(void)_writerTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabaseImport:(id)arg1 ;
-(void)setReturnData:(NSData *)arg1 ;
-(void)_setClientCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)returnData;
@end

