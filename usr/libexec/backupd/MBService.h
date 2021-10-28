//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MBServiceAccount, MBURLConnection, NSMutableDictionary;

@interface MBService : NSObject
{
    MBURLConnection *_connection;	// 8 = 0x8
    NSMutableDictionary *_locksByBackupUDID;	// 16 = 0x10
    _Bool _cancelled;	// 24 = 0x18
    _Bool _disableWWAN;	// 25 = 0x19
    _Bool _suppressUnauthorizedAlert;	// 26 = 0x1a
    MBServiceAccount *_account;	// 32 = 0x20
    id _delegate;	// 40 = 0x28
    double _protocolVersion;	// 48 = 0x30
}

+ (id)backupUDIDForPath:(id)arg1;	// IMP=0x0000000100142e94
@property(nonatomic) _Bool suppressUnauthorizedAlert; // @synthesize suppressUnauthorizedAlert=_suppressUnauthorizedAlert;
@property(nonatomic) _Bool disableWWAN; // @synthesize disableWWAN=_disableWWAN;
@property(nonatomic, getter=wasCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) double protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MBServiceAccount *account; // @synthesize account=_account;
- (_Bool)sleepWithError:(id *)arg1;	// IMP=0x000000010014536c
- (_Bool)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001452d0
- (_Bool)updateKeySet:(id)arg1 forBackupUDID:(id)arg2 lastModified:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100145224
- (_Bool)createKeySet:(id)arg1 forBackupUDID:(id)arg2 lastModified:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100145178
- (id)keysetForBackupUDID:(id)arg1 lastModified:(long long *)arg2 error:(id *)arg3;	// IMP=0x00000001001450cc
- (_Bool)removeFileIDs:(id)arg1 backupUDID:(id)arg2 snapshotID:(unsigned long long)arg3 lastModified:(long long *)arg4 error:(id *)arg5;	// IMP=0x0000000100145010
- (id)commitFilePutReceipts:(id)arg1 backupUDID:(id)arg2 snapshotID:(unsigned long long)arg3 lastModified:(long long *)arg4 error:(id *)arg5;	// IMP=0x0000000100144f50
- (id)addFiles:(id)arg1 backupUDID:(id)arg2 snapshotID:(unsigned long long)arg3 lastModified:(long long *)arg4 error:(id *)arg5;	// IMP=0x0000000100144e90
- (id)getFileIDs:(id)arg1 backupUDID:(id)arg2 snapshotID:(unsigned long long)arg3 lastModified:(long long *)arg4 error:(id *)arg5;	// IMP=0x0000000100144dd0
- (id)listFilesForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000100144d0c
- (id)listFilesForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100144c5c
- (_Bool)mergeSnapshotForID:(unsigned long long)arg1 backupUDID:(id)arg2 lastModified:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100144bac
- (_Bool)commitSnapshotForID:(unsigned long long)arg1 backupUDID:(id)arg2 lastModified:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100144afc
- (_Bool)deleteSnapshotForID:(unsigned long long)arg1 backupUDID:(id)arg2 lastModified:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100144a4c
- (_Bool)updateSnapshot:(id)arg1 backupUDID:(id)arg2 lastModified:(long long *)arg3 error:(id *)arg4;	// IMP=0x000000010014497c
- (_Bool)createSnapshot:(id)arg1 backupUDID:(id)arg2 lastModified:(long long *)arg3 error:(id *)arg4 snapshotID:(unsigned int *)arg5;	// IMP=0x0000000100144810
- (_Bool)restoreCompleteWithInfo:(id)arg1 backupUDID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100144768
- (_Bool)backupStatusInfo:(id)arg1 backupUDID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001446c0
- (_Bool)removeDomainName:(id)arg1 backupUDID:(id)arg2 lastModified:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100144610
- (_Bool)deleteBackupForUDID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100144574
- (_Bool)postBackup:(id)arg1 lastModified:(long long *)arg2 error:(id *)arg3;	// IMP=0x00000001001444b4
- (id)backupForUDID:(id)arg1 lastModified:(long long *)arg2 error:(id *)arg3;	// IMP=0x00000001001441f8
- (_Bool)deleteAccountWithError:(id *)arg1;	// IMP=0x0000000100144164
- (id)accountWithError:(id *)arg1;	// IMP=0x0000000100144010
- (id)_sendRequestWithMethod:(id)arg1 path:(id)arg2 messages:(id)arg3 responseClass:(Class)arg4 lastModified:(long long *)arg5 error:(id *)arg6;	// IMP=0x0000000100143c08
- (id)_sendRequestWithMethod:(id)arg1 path:(id)arg2 message:(id)arg3 responseClass:(Class)arg4 lastModified:(long long *)arg5 error:(id *)arg6;	// IMP=0x0000000100143964
- (id)_sendRequestWithMethod:(id)arg1 path:(id)arg2 requestBody:(id)arg3 lastModified:(long long *)arg4 error:(id *)arg5;	// IMP=0x0000000100142efc
- (void)cancel;	// IMP=0x0000000100142e7c
- (void)removeLockForBackupUDID:(id)arg1;	// IMP=0x0000000100142e6c
- (void)setLock:(id)arg1 forBackupUDID:(id)arg2;	// IMP=0x0000000100142e5c
- (id)lockForBackupUDID:(id)arg1;	// IMP=0x0000000100142e4c
- (void)dealloc;	// IMP=0x0000000100142dfc
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000100142d90

@end
