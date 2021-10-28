//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineScopeCleanupTasksImplementation-Protocol.h"

@class NSString;

@interface CPLPrequeliteScopeCleanupTasks : CPLPrequeliteStorage <CPLEngineScopeCleanupTasksImplementation>
{
}

- (id)statusDictionary;	// IMP=0x0000000100059dbc
- (id)status;	// IMP=0x0000000100059d00
- (_Bool)hasCleanupTasks;	// IMP=0x0000000100059c7c
- (_Bool)deleteCleanupTaskForScopeWithIndex:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000100059b90
- (long long)nextCleanupTaskScopeIndexOfType:(unsigned long long *)arg1;	// IMP=0x0000000100059a58
- (_Bool)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000100059940
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0000000100059924
- (_Bool)initializeStorage;	// IMP=0x00000001000598c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
