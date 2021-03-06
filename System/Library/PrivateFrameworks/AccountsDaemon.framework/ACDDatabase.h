/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDDatabaseConnectionDelegate.h>
#import <libobjc.A.dylib/ACDDatabaseProtocol.h>

@class NSPersistentStoreCoordinator, NSDictionary, NSURL, NSString;

@interface ACDDatabase : NSObject <ACDDatabaseConnectionDelegate, ACDDatabaseProtocol> {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSDictionary* _storeOptions;
	NSURL* _databaseURL;

}

@property (nonatomic,readonly) NSURL * databaseURL;                 //@synthesize databaseURL=_databaseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(NSString *)description;
-(id)createConnection;
-(NSURL *)databaseURL;
-(id)initWithDatabaseURL:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 storeOptions:(id)arg2 ;
-(id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)_shouldResetPersistentStoreAfterError:(id)arg1 ;
-(BOOL)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(id*)arg1 ;
-(id)_backupURL;
-(id)_unverifiedBackupURL;
-(BOOL)_performBackupToURL:(id)arg1 unverifiedBackupURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)restoreFromBackupReturningError:(id*)arg1 ;
-(BOOL)_validateDatabaseAtURL:(id)arg1 error:(id*)arg2 ;
-(void)databaseConnection:(id)arg1 encounteredUnrecoverableError:(id)arg2 ;
-(BOOL)performBackupReturningError:(id*)arg1 ;
-(BOOL)resetReturningError:(id*)arg1 ;
@end

