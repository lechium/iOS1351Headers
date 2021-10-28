//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "KmlBindingAttestationUpdateProtocol-Protocol.h"
#import "KmlKeyTrackingReceiptUpdateProtocol-Protocol.h"
#import "KmlSessionProtocol-Protocol.h"

@class NSArray, NSString;

@protocol KmlKeyManagementProtocol <KmlSessionProtocol, KmlKeyTrackingReceiptUpdateProtocol, KmlBindingAttestationUpdateProtocol>
- (oneway void)countImmobilizerTokensForKeyWithIdentifier:(NSString *)arg1 callback:(void (^)(unsigned long long, unsigned long long))arg2;
- (oneway void)removeSharedKeysWithIdentifiers:(NSArray *)arg1 ownerKeyWithIdentifier:(NSString *)arg2 callback:(void (^)(NSError *))arg3;
- (oneway void)cancelInvitationsWithIdentifiers:(NSArray *)arg1 sentByOwnerKeyWithIdentifier:(NSString *)arg2 callback:(void (^)(NSError *))arg3;
- (oneway void)listReceivedSharingInvitationsWithCallback:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)listSharingInvitationsForKeyIdentifier:(NSString *)arg1 callback:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)remoteTerminateKeys:(NSArray *)arg1 ownerKey:(NSString *)arg2 callback:(void (^)(DAKeyEncryptedRequest *, NSError *))arg3;
- (oneway void)cancelAllFriendInvitationsWithCompletionHandler:(void (^)(NSError *))arg1;
- (oneway void)localDeleteKey:(NSString *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)deleteKey:(NSString *)arg1 callback:(void (^)(NSData *, NSError *))arg2;
@end
