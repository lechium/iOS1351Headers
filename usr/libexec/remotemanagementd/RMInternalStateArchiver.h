//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RMClientCapabilitiesControllerDelegate-Protocol.h"
#import "RMConfigurationPublisherDelegate-Protocol.h"
#import "RMInternalStatusPublisherDelegate-Protocol.h"
#import "RMPushControllerDelegate-Protocol.h"

@class NSDictionary, NSPersistentContainer, NSPersistentHistoryToken, NSString, RMPersistentActiveIdentifiers;

@interface RMInternalStateArchiver : NSObject <RMClientCapabilitiesControllerDelegate, RMConfigurationPublisherDelegate, RMInternalStatusPublisherDelegate, RMPushControllerDelegate>
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
}

+ (id)sharedArchiver;	// IMP=0x00000001000402b0
- (void).cxx_destruct;	// IMP=0x0000000100040b10
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (id)_unarchiveObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000409ec
- (id)_unarchiveObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00000001000408e4
- (void)_archiveObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000407dc
- (void)clientCapabilitiesController:(id)arg1 didChangeClientCapabilitiesVersionHashByChannelType:(id)arg2;	// IMP=0x00000001000407cc
- (void)pushController:(id)arg1 didChangePushTokenByEnvironmentName:(id)arg2;	// IMP=0x00000001000407bc
- (void)internalStatusPublisher:(id)arg1 didChangeCommandAndDeclarationsPersistentHistoryToken:(id)arg2;	// IMP=0x00000001000407ac
- (void)internalStatusPublisher:(id)arg1 didChangeDeviceStatusByKeyPath:(id)arg2;	// IMP=0x000000010004079c
- (void)configurationPublisher:(id)arg1 didChangePersistentActiveIdentifiers:(id)arg2;	// IMP=0x000000010004078c
- (id)initWithPersistentContainer:(id)arg1;	// IMP=0x0000000100040714
@property(retain, nonatomic) NSDictionary *pushTokenByEnvironmentName;
@property(retain, nonatomic) RMPersistentActiveIdentifiers *persistentActiveIdentifiers;
@property(retain, nonatomic) NSDictionary *deviceStatusByKeyPath;
@property(retain, nonatomic) NSPersistentHistoryToken *commandAndDeclarationStatusPersistentHistoryToken;
@property(retain, nonatomic) NSDictionary *clientCapabilitiesVersionHashByChannelType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

