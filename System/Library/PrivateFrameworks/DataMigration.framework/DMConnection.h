/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DMXPCConnection;

@interface DMConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(id)init;
-(void)dealloc;
-(void)reportMigrationFailure;
-(void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned)arg1 ;
-(void)isMigrationNeeded:(/*^block*/id)arg1 ;
-(void)userDataDisposition:(/*^block*/id)arg1 ;
-(void)previousBuildVersion:(/*^block*/id)arg1 ;
-(void)orderedPluginIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)changeVisibility:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)migrationPhaseDescription:(/*^block*/id)arg1 ;
-(void)migrationPluginResults:(/*^block*/id)arg1 ;
-(void)deferExitWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelDeferredExitWithCompletion:(/*^block*/id)arg1 ;
-(void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 ;
@end

