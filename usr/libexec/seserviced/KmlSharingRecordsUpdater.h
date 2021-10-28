//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SEEndPoint;

@interface KmlSharingRecordsUpdater : NSObject
{
    SEEndPoint *_endpoint;	// 8 = 0x8
    NSMutableDictionary *_invitationIdToConfigMap;	// 16 = 0x10
    NSString *_endpointIdentifier;	// 24 = 0x18
}

+ (id)getSharingRecordsUpdaterForEndpoint:(id)arg1;	// IMP=0x0000000100067af0
+ (void)initRecordUpdaterTable;	// IMP=0x0000000100067a44
- (void).cxx_destruct;	// IMP=0x0000000100068d70
@property(retain, nonatomic) NSString *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;
- (void)deleteAuthWithId:(id)arg1;	// IMP=0x0000000100068c98
- (void)removeConfigsWithSharedKeyIdentifiers:(id)arg1;	// IMP=0x0000000100068af8
- (id)getSharingConfigs;	// IMP=0x0000000100068ae8
- (id)getConfigForSuccessfulSharingWithUuid:(id)arg1;	// IMP=0x0000000100068918
- (id)getInvitationsList;	// IMP=0x00000001000686dc
- (void)unpackAllConfigsOnEndpoint;	// IMP=0x000000010006842c
- (id)saveSharingRecords;	// IMP=0x00000001000680d4
- (id)getConfigWithFriendKeyIdentifier:(id)arg1;	// IMP=0x0000000100067f18
- (id)getConfigWithInvitationId:(id)arg1;	// IMP=0x0000000100067f08
- (void)updateConfig:(id)arg1;	// IMP=0x0000000100067e54
- (id)initWithEndpoint:(id)arg1;	// IMP=0x0000000100067d78

@end
