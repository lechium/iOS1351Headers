//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ASDServiceProtocol <NSObject>
- (void)getUpdatesServiceWithReplyHandler:(void (^)(id <ASDUpdatesServiceProtocol>, NSError *))arg1;
- (void)getTestFlightFeedbackServiceWithReplyHandler:(void (^)(id <ASDTestFlightFeedbackServiceProtocol>, NSError *))arg1;
- (void)getRepairServiceWithReplyHandler:(void (^)(id <ASDRepairServiceProtocol>, NSError *))arg1;
- (void)getPurchaseServiceWithReplyHandler:(void (^)(id <ASDPurchaseServiceProtocol>, NSError *))arg1;
- (void)getPurchaseHistoryServiceWithReplyHandler:(void (^)(id <ASDPurchaseHistoryServiceProtocol>, NSError *))arg1;
- (void)getPrivilegedTaskServiceWithReplyHandler:(void (^)(id <ASDPrivilegedTaskServiceProtocol>, NSError *))arg1;
- (void)getPersonalizationServiceWithReplyHandler:(void (^)(id <ASDPersonalizationServiceProtocol>, NSError *))arg1;
- (void)getOcelotServiceWithReplyHandler:(void (^)(id <ASDOcelotServiceProtocol>, NSError *))arg1;
- (void)getLibraryServiceWithReplyHandler:(void (^)(id <ASDAppLibraryServiceProtocol>, NSError *))arg1;
- (void)getInstallationServiceWithReplyHandler:(void (^)(id <ASDInstallationServiceProtocol>, NSError *))arg1;
- (void)getIAPHistoryServiceWithReplyHandler:(void (^)(id <ASDIAPHistoryServiceProtocol>, NSError *))arg1;
- (void)getDiagnosticServiceWithReplyHandler:(void (^)(id <ASDDiagnosticServiceProtocol>, NSError *))arg1;
- (void)getCrossfireServiceWithReplyHandler:(void (^)(id <ASDCrossfireServiceProtocol>, NSError *))arg1;
@end
