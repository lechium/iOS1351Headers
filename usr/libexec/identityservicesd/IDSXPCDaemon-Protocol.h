//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol IDSXPCDaemon
- (void)interalTestingCollaboratorWithCompletion:(void (^)(id <IDSXPCInternalTesting>, NSError *))arg1;
- (void)registrationCollaboratorWithCompletion:(void (^)(id <IDSXPCRegistration>, NSError *))arg1;
- (void)opportunisticCollaboratorWithCompletion:(void (^)(id <IDSXPCOpportunistic>, NSError *))arg1;
- (void)reunionSyncCollaboratorForClientProcessName:(NSString *)arg1 withCompletion:(void (^)(id <IDSXPCReunionSync>, NSError *))arg2;
- (void)pairedDeviceManagerCollaboratorWithCompletion:(void (^)(id <IDSXPCPairedDeviceManager>, NSError *))arg1;
- (void)pairingCollaboratorWithCompletion:(void (^)(id <IDSXPCPairing>, NSError *))arg1;
- (void)activateWithCompletion:(void (^)(NSError *))arg1;
@end

