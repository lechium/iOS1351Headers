//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSNumber;

@protocol ASDIAPHistoryServiceProtocol
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(void (^)(NSArray *, _Bool, NSError *))arg1;
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withReplyHandler:(void (^)(NSArray *, _Bool, NSError *))arg2;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 withReplyHandler:(void (^)(NSArray *, _Bool, _Bool, NSError *))arg3;
- (void)setSubscriptionEntitlementsWithDictionary:(NSDictionary *)arg1 forAccountID:(NSNumber *)arg2 segment:(unsigned long long)arg3;
- (void)refreshIAPsForActiveAccountWithReplyHandler:(void (^)(NSError *))arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(NSArray *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getAllIAPsForActiveAccountWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
@end

