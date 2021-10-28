//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BYDeviceMigrationDelegate-Protocol.h"

@class BuddyMigrationLockscreenDisconnectController, BuddyMigrationLockscreenProgressController, BuddyMigrationNavigationController, NSString, SBSSecureAppAssertion, UIWindow;
@protocol OS_dispatch_queue;

@interface BuddyMigrationLockscreenController : NSObject <BYDeviceMigrationDelegate>
{
    UIWindow *_secureWindow;	// 8 = 0x8
    SBSSecureAppAssertion *_assertion;	// 16 = 0x10
    BuddyMigrationLockscreenDisconnectController *_disconnectController;	// 24 = 0x18
    BuddyMigrationLockscreenProgressController *_progressController;	// 32 = 0x20
    BuddyMigrationNavigationController *_navigationController;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_disconnectionQueue;	// 48 = 0x30
    long long _connectionState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000bb80c
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *disconnectionQueue; // @synthesize disconnectionQueue=_disconnectionQueue;
@property(retain, nonatomic) BuddyMigrationNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) BuddyMigrationLockscreenProgressController *progressController; // @synthesize progressController=_progressController;
@property(retain, nonatomic) BuddyMigrationLockscreenDisconnectController *disconnectController; // @synthesize disconnectController=_disconnectController;
@property(retain, nonatomic) SBSSecureAppAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain, nonatomic) UIWindow *secureWindow; // @synthesize secureWindow=_secureWindow;
- (void)deviceMigrationManager:(id)arg1 didUpdateProgress:(id)arg2;	// IMP=0x00000001000bb6fc
- (void)deviceMigrationManager:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000001000bb674
- (void)deviceMigrationManager:(id)arg1 didChangeConnectionInformation:(id)arg2;	// IMP=0x00000001000bb17c
- (void)_screenDidDisconnect:(id)arg1;	// IMP=0x00000001000bb07c
- (void)_screenDidConnect:(id)arg1;	// IMP=0x00000001000baea0
- (void)deactivate;	// IMP=0x00000001000badac
- (void)activate;	// IMP=0x00000001000baaec
- (void)setProgressTitle:(id)arg1;	// IMP=0x00000001000baa80
- (id)initWithProgressTitle:(id)arg1;	// IMP=0x00000001000ba9d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
