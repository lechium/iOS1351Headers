//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SGDSuggestManagerBaseProtocol-Protocol.h"
#import "_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h"
#import "_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h"

@class CSSearchableItem, NSArray, NSString;

@protocol SGDSuggestManagerMessagesProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)harvestedSuggestionsFromMessages:(NSArray *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(SGXPCResponse3 *))arg4;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(SGXPCResponse3 *))arg4;
- (void)suggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(SGXPCResponse3 *))arg3;
@end

