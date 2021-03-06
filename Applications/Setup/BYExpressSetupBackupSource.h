//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BYExpressSetupDataSource-Protocol.h"

@class BYBackupMetadata, NSString, RestorableBackupItem;

@interface BYExpressSetupBackupSource : NSObject <BYExpressSetupDataSource>
{
    RestorableBackupItem *_backupItem;	// 8 = 0x8
    BYBackupMetadata *_backupMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000aae40
@property(retain, nonatomic) BYBackupMetadata *backupMetadata; // @synthesize backupMetadata=_backupMetadata;
- (id)siriVoiceProfileAvailabilityMetadata;	// IMP=0x00000001000aae24
- (id)locationServicesSettings;	// IMP=0x00000001000aae1c
- (id)siriOptIn;	// IMP=0x00000001000aadb0
- (id)deviceAnalyticsOptIn;	// IMP=0x00000001000aad54
- (id)appAnalyticsOptIn;	// IMP=0x00000001000aacf8
- (_Bool)locationServicesOptIn;	// IMP=0x00000001000aace8
- (id)findMyPhoneOptIn;	// IMP=0x00000001000aac7c
- (id)appleID;	// IMP=0x00000001000aac08
- (id)firstName;	// IMP=0x00000001000aab94
- (id)sourceDeviceClass;	// IMP=0x00000001000aab3c
- (id)sourceDeviceName;	// IMP=0x00000001000aaae4
- (_Bool)dataAvailable;	// IMP=0x00000001000aaadc
- (id)initWithBackupItem:(id)arg1;	// IMP=0x00000001000aaa64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

