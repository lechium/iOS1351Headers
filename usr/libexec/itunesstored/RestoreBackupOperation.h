//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "MBManagerDelegate-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface RestoreBackupOperation : ISOperation <MBManagerDelegate>
{
    NSString *_bundleID;	// 96 = 0x60
    _Bool _isFailed;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 112 = 0x70
    long long _priority;	// 120 = 0x78
}

+ (_Bool)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long *)arg2;	// IMP=0x000000010010f914
+ (_Bool)cancelApplicationRestoresWithBundleIDs:(id)arg1;	// IMP=0x000000010010f484
+ (_Bool)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000010010f360
@property(readonly) long long priority; // @synthesize priority=_priority;
- (void)managerDidLoseConnectionToService:(id)arg1;	// IMP=0x0000000100111158
- (void)managerDidFinishRestore:(id)arg1;	// IMP=0x0000000100110fc8
- (void)managerDidFinishBackup:(id)arg1;	// IMP=0x0000000100110e38
- (void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;	// IMP=0x0000000100110c50
- (void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;	// IMP=0x0000000100110a84
- (void)manager:(id)arg1 didFailBackupWithError:(id)arg2;	// IMP=0x00000001001108b8
- (void)run;	// IMP=0x000000010010fc5c
- (void)cancel;	// IMP=0x000000010010fc0c
@property(readonly, getter=isFailed) _Bool failed;
@property(readonly) NSString *bundleIdentifier;
- (void)dealloc;	// IMP=0x000000010010f2fc
- (id)initWithBundleIdentifier:(id)arg1 withPriority:(long long)arg2 isFailed:(_Bool)arg3;	// IMP=0x000000010010f258

@end

