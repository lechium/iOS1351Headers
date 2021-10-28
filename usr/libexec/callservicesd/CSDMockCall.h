//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSDCall.h"

@class CXCallSource, NSDate, NSDictionary, NSString, NSUUID, TUCallDisplayContext, TUCallProvider, TUHandle;
@protocol CXAudioSessionActivationStateObserver;

@interface CSDMockCall : CSDCall
{
    _Bool _mockIsVideo;	// 8 = 0x8
    _Bool _mockHostedOnCurrentDevice;	// 9 = 0x9
    _Bool _mockEndpointOnCurrentDevice;	// 10 = 0xa
    _Bool _mockBlocked;	// 11 = 0xb
    _Bool _mockVoicemail;	// 12 = 0xc
    _Bool _mockEmergency;	// 13 = 0xd
    _Bool _mockSOS;	// 14 = 0xe
    _Bool _mockOutgoing;	// 15 = 0xf
    _Bool _mockConferenced;	// 16 = 0x10
    _Bool _mockUsingBaseband;	// 17 = 0x11
    _Bool _mockSupportsTTYWithVoice;	// 18 = 0x12
    _Bool _mockNeedsManualInCallSounds;	// 19 = 0x13
    _Bool _mockHasStartedOutgoing;	// 20 = 0x14
    _Bool _mockHasSentInvitation;	// 21 = 0x15
    _Bool _mockConnecting;	// 22 = 0x16
    _Bool _mockConnected;	// 23 = 0x17
    _Bool _mockUplinkMuted;	// 24 = 0x18
    _Bool _mockUplinkWasExplicitlyMuted;	// 25 = 0x19
    _Bool _mockMayRequireBreakBeforeMake;	// 26 = 0x1a
    _Bool _mockPrefersExclusiveAccessToCellularNetwork;	// 27 = 0x1b
    _Bool _mockIsThirdPartyVideo;	// 28 = 0x1c
    _Bool _mockShouldSuppressInCallUI;	// 29 = 0x1d
    int _mockService;	// 32 = 0x20
    int _mockCallStatus;	// 36 = 0x24
    int _mockTTYType;	// 40 = 0x28
    int _mockDisconnectedReason;	// 44 = 0x2c
    int _mockSubtype;	// 48 = 0x30
    int _mockProviderProcessIdentifier;	// 52 = 0x34
    int _mockCallRelaySupport;	// 56 = 0x38
    NSString *_mockUniqueProxyIdentifier;	// 64 = 0x40
    double _mockCallDuration;	// 72 = 0x48
    TUHandle *_mockHandle;	// 80 = 0x50
    NSString *_mockLocalizedLabel;	// 88 = 0x58
    NSString *_mockCompanyName;	// 96 = 0x60
    NSString *_mockCallUUID;	// 104 = 0x68
    NSString *_mockCallerNameFromNetwork;	// 112 = 0x70
    long long _mockBytesOfDataUsed;	// 120 = 0x78
    NSString *_mockAudioCategory;	// 128 = 0x80
    NSString *_mockAudioMode;	// 136 = 0x88
    NSUUID *_mockCallGroupUUID;	// 144 = 0x90
    TUCallProvider *_mockBackingProvider;	// 152 = 0x98
    TUCallProvider *_mockDisplayProvider;	// 160 = 0xa0
    NSDictionary *_mockProviderContext;	// 168 = 0xa8
    long long _mockProviderErrorCode;	// 176 = 0xb0
    TUCallDisplayContext *_mockDisplayContext;	// 184 = 0xb8
    long long _mockAudioInterruptionProviderType;	// 192 = 0xc0
    NSString *_mockDisplayName;	// 200 = 0xc8
    NSString *_mockContactIdentifier;	// 208 = 0xd0
    NSDate *_mockDateCreated;	// 216 = 0xd8
    NSDate *_mockDateConnected;	// 224 = 0xe0
    id <CXAudioSessionActivationStateObserver> _mockAudioInterruptionActivationStateObserver;	// 232 = 0xe8
    CXCallSource *_mockBackingCallSource;	// 240 = 0xf0
    unsigned long long _mockInitialLinkType;	// 248 = 0xf8
}

+ (id)mockCallFromBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100108280
+ (id)mockCall;	// IMP=0x0000000100108270
- (void).cxx_destruct;	// IMP=0x000000010010924c
@property(nonatomic, getter=shouldSuppressInCallUI) _Bool mockShouldSuppressInCallUI; // @synthesize mockShouldSuppressInCallUI=_mockShouldSuppressInCallUI;
@property(nonatomic, getter=callRelaySupport) int mockCallRelaySupport; // @synthesize mockCallRelaySupport=_mockCallRelaySupport;
@property(nonatomic, getter=initialLinkType) unsigned long long mockInitialLinkType; // @synthesize mockInitialLinkType=_mockInitialLinkType;
@property(nonatomic, getter=isThirdPartyVideo) _Bool mockIsThirdPartyVideo; // @synthesize mockIsThirdPartyVideo=_mockIsThirdPartyVideo;
@property(retain, nonatomic, getter=backingCallSource) CXCallSource *mockBackingCallSource; // @synthesize mockBackingCallSource=_mockBackingCallSource;
@property(retain, nonatomic, getter=audioInterruptionActivationStateObserver) id <CXAudioSessionActivationStateObserver> mockAudioInterruptionActivationStateObserver; // @synthesize mockAudioInterruptionActivationStateObserver=_mockAudioInterruptionActivationStateObserver;
@property(nonatomic, getter=providerProcessIdentifier) int mockProviderProcessIdentifier; // @synthesize mockProviderProcessIdentifier=_mockProviderProcessIdentifier;
@property(retain, nonatomic, getter=dateConnected) NSDate *mockDateConnected; // @synthesize mockDateConnected=_mockDateConnected;
@property(retain, nonatomic, getter=dateCreated) NSDate *mockDateCreated; // @synthesize mockDateCreated=_mockDateCreated;
@property(copy, nonatomic, getter=contactIdentifier) NSString *mockContactIdentifier; // @synthesize mockContactIdentifier=_mockContactIdentifier;
@property(nonatomic, getter=prefersExclusiveAccessToCellularNetwork) _Bool mockPrefersExclusiveAccessToCellularNetwork; // @synthesize mockPrefersExclusiveAccessToCellularNetwork=_mockPrefersExclusiveAccessToCellularNetwork;
@property(copy, nonatomic, getter=displayName) NSString *mockDisplayName; // @synthesize mockDisplayName=_mockDisplayName;
@property(nonatomic, getter=audioInterruptionProviderType) long long mockAudioInterruptionProviderType; // @synthesize mockAudioInterruptionProviderType=_mockAudioInterruptionProviderType;
@property(nonatomic, getter=mayRequireBreakBeforeMake) _Bool mockMayRequireBreakBeforeMake; // @synthesize mockMayRequireBreakBeforeMake=_mockMayRequireBreakBeforeMake;
@property(nonatomic, getter=uplinkWasExplicitlyMuted) _Bool mockUplinkWasExplicitlyMuted; // @synthesize mockUplinkWasExplicitlyMuted=_mockUplinkWasExplicitlyMuted;
@property(nonatomic, getter=isUplinkMuted, setter=setUplinkMuted:) _Bool mockUplinkMuted; // @synthesize mockUplinkMuted=_mockUplinkMuted;
@property(nonatomic, getter=isConnected) _Bool mockConnected; // @synthesize mockConnected=_mockConnected;
@property(nonatomic, getter=isConnecting) _Bool mockConnecting; // @synthesize mockConnecting=_mockConnecting;
@property(nonatomic, getter=hasSentInvitation) _Bool mockHasSentInvitation; // @synthesize mockHasSentInvitation=_mockHasSentInvitation;
@property(nonatomic, getter=hasStartedOutgoing) _Bool mockHasStartedOutgoing; // @synthesize mockHasStartedOutgoing=_mockHasStartedOutgoing;
@property(copy, nonatomic, getter=displayContext) TUCallDisplayContext *mockDisplayContext; // @synthesize mockDisplayContext=_mockDisplayContext;
@property(nonatomic, getter=providerErrorCode) long long mockProviderErrorCode; // @synthesize mockProviderErrorCode=_mockProviderErrorCode;
@property(copy, nonatomic, getter=providerContext) NSDictionary *mockProviderContext; // @synthesize mockProviderContext=_mockProviderContext;
@property(copy, nonatomic, getter=displayProvider) TUCallProvider *mockDisplayProvider; // @synthesize mockDisplayProvider=_mockDisplayProvider;
@property(copy, nonatomic, getter=backingProvider) TUCallProvider *mockBackingProvider; // @synthesize mockBackingProvider=_mockBackingProvider;
@property(copy, nonatomic, getter=callGroupUUID) NSUUID *mockCallGroupUUID; // @synthesize mockCallGroupUUID=_mockCallGroupUUID;
@property(copy, nonatomic, getter=audioMode) NSString *mockAudioMode; // @synthesize mockAudioMode=_mockAudioMode;
@property(copy, nonatomic, getter=audioCategory) NSString *mockAudioCategory; // @synthesize mockAudioCategory=_mockAudioCategory;
@property(nonatomic, getter=needsManualInCallSounds) _Bool mockNeedsManualInCallSounds; // @synthesize mockNeedsManualInCallSounds=_mockNeedsManualInCallSounds;
@property(nonatomic, getter=subtype) int mockSubtype; // @synthesize mockSubtype=_mockSubtype;
@property(nonatomic, getter=bytesOfDataUsed) long long mockBytesOfDataUsed; // @synthesize mockBytesOfDataUsed=_mockBytesOfDataUsed;
@property(copy, nonatomic, getter=callerNameFromNetwork) NSString *mockCallerNameFromNetwork; // @synthesize mockCallerNameFromNetwork=_mockCallerNameFromNetwork;
@property(copy, nonatomic, getter=callUUID) NSString *mockCallUUID; // @synthesize mockCallUUID=_mockCallUUID;
@property(copy, nonatomic, getter=companyName) NSString *mockCompanyName; // @synthesize mockCompanyName=_mockCompanyName;
@property(copy, nonatomic, getter=localizedLabel) NSString *mockLocalizedLabel; // @synthesize mockLocalizedLabel=_mockLocalizedLabel;
@property(retain, nonatomic, getter=handle) TUHandle *mockHandle; // @synthesize mockHandle=_mockHandle;
@property(nonatomic, getter=disconnectedReason) int mockDisconnectedReason; // @synthesize mockDisconnectedReason=_mockDisconnectedReason;
@property(nonatomic, getter=supportsTTYWithVoice) _Bool mockSupportsTTYWithVoice; // @synthesize mockSupportsTTYWithVoice=_mockSupportsTTYWithVoice;
@property(nonatomic, getter=ttyType) int mockTTYType; // @synthesize mockTTYType=_mockTTYType;
@property(nonatomic, getter=isUsingBaseband) _Bool mockUsingBaseband; // @synthesize mockUsingBaseband=_mockUsingBaseband;
@property(nonatomic, getter=isConferenced) _Bool mockConferenced; // @synthesize mockConferenced=_mockConferenced;
@property(nonatomic, getter=isOutgoing) _Bool mockOutgoing; // @synthesize mockOutgoing=_mockOutgoing;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool mockSOS; // @synthesize mockSOS=_mockSOS;
@property(nonatomic, getter=isEmergency) _Bool mockEmergency; // @synthesize mockEmergency=_mockEmergency;
@property(nonatomic, getter=callDuration) double mockCallDuration; // @synthesize mockCallDuration=_mockCallDuration;
@property(nonatomic, getter=isVoicemail) _Bool mockVoicemail; // @synthesize mockVoicemail=_mockVoicemail;
@property(nonatomic, getter=isBlocked) _Bool mockBlocked; // @synthesize mockBlocked=_mockBlocked;
@property(nonatomic, getter=isEndpointOnCurrentDevice) _Bool mockEndpointOnCurrentDevice; // @synthesize mockEndpointOnCurrentDevice=_mockEndpointOnCurrentDevice;
@property(nonatomic, getter=isHostedOnCurrentDevice) _Bool mockHostedOnCurrentDevice; // @synthesize mockHostedOnCurrentDevice=_mockHostedOnCurrentDevice;
@property(nonatomic, getter=isVideo) _Bool mockIsVideo; // @synthesize mockIsVideo=_mockIsVideo;
@property(copy, nonatomic, getter=uniqueProxyIdentifier) NSString *mockUniqueProxyIdentifier; // @synthesize mockUniqueProxyIdentifier=_mockUniqueProxyIdentifier;
@property(nonatomic, getter=callStatus) int mockCallStatus; // @synthesize mockCallStatus=_mockCallStatus;
@property(nonatomic, getter=service) int mockService; // @synthesize mockService=_mockService;
- (void)disconnectWithReason:(int)arg1;	// IMP=0x0000000100108b9c
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x00000001001089f0
- (void)answerWithRequest:(id)arg1;	// IMP=0x0000000100108910
- (void)unhold;	// IMP=0x0000000100108900
- (void)hold;	// IMP=0x00000001001088f0
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;	// IMP=0x00000001001088e4
- (void)updateWithCall:(id)arg1;	// IMP=0x00000001001083b8
- (id)initWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x00000001001082d4

@end
