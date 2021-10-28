/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcuts/VCSyncDataHandler.h>
#import <libobjc.A.dylib/WFDatabaseResultObserver.h>

@class WFDatabaseResult;

@interface VCDatabaseSyncDataHandler : VCSyncDataHandler <WFDatabaseResultObserver> {

	WFDatabaseResult* _result;

}

@property (nonatomic,readonly) WFDatabaseResult * result;              //@synthesize result=_result - In the implementation block
+(Class)changeClass;
-(WFDatabaseResult *)result;
-(id)initWithResult:(id)arg1 ;
-(void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteSyncedData:(id*)arg1 ;
@end
