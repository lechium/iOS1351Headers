/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLSQLiteDatabase : NSObject {

	sqlite3Ref _database;

}
+(id)openDatabaseAtPath:(id)arg1 ;
+(sqlite3Ref)_openSQLiteDatabaseAtPath:(const char*)arg1 ;
-(BOOL)close;
-(BOOL)commitTransaction;
-(BOOL)rollbackTransaction;
-(id)initWithOpenedSQLite3Database:(sqlite3Ref)arg1 ;
-(BOOL)beginDeferredTransaction;
-(BOOL)beginExclusiveTransaction;
-(BOOL)prepareAndEvaluateStatement:(id)arg1 ;
-(BOOL)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(/*^block*/id)arg2 ;
-(sqlite3_stmtRef)_prepareStatement:(id)arg1 ;
-(BOOL)_execute:(id)arg1 ;
@end
