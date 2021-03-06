/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSqlitePreparedStatement.h>
#import <libobjc.A.dylib/BSSqliteDatabaseConnectionObserver.h>

@class NSString;

@interface _BSSqlitePreparedSimpleStatement : BSSqlitePreparedStatement <BSSqliteDatabaseConnectionObserver> {

	sqlite3_stmtRef _statement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithDatabaseConnection:(id)arg1 statement:(sqlite3_stmtRef)arg2 ;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
-(int)_bindKey:(id)arg1 value:(id)arg2 ;
-(id)_sqliteError:(int)arg1 ;
-(int)_bindParameterIndex:(int)arg1 nullValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 stringValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 numberValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 dataValue:(id)arg2 ;
-(void)sqliteDatabaseConnectionWillClose:(id)arg1 ;
@end

