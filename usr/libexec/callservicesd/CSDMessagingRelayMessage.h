//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class CSDMessagingAVConferenceInviteData, CSDMessagingCallCapabilitiesState, CSDMessagingCallDisplayContext, CSDMessagingCallModel, CSDMessagingCallModelState, CSDMessagingCallProvider, CSDMessagingHandle, CSDMessagingRoute, IDSDestination, NSArray, NSData, NSMutableArray, NSSet, NSString, NSUUID, TUCallCapabilitiesState, TUCallDisplayContext, TUCallModel, TUCallProvider, TUDialRequest, TUHandle;

@interface CSDMessagingRelayMessage : PBCodable <NSCopying>
{
    double _hostCallCreationTime;	// 8 = 0x8
    double _messageSendTime;	// 16 = 0x10
    NSString *_callerNameFromNetwork;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
    NSString *_destinationID;	// 40 = 0x28
    NSData *_dummyPayload;	// 48 = 0x30
    NSMutableArray *_endpointIDSDestinationURIs;	// 56 = 0x38
    CSDMessagingHandle *_handle;	// 64 = 0x40
    NSString *_hardPauseDigits;	// 72 = 0x48
    unsigned int _hardPauseState;	// 80 = 0x50
    CSDMessagingAVConferenceInviteData *_inviteData;	// 88 = 0x58
    NSString *_isoCountryCode;	// 96 = 0x60
    NSString *_localSenderIdentityAccountUUIDString;	// 104 = 0x68
    NSString *_localSenderIdentityUUIDString;	// 112 = 0x70
    NSString *_oBSOLETEConferenceIdentifier;	// 120 = 0x78
    NSMutableArray *_otherUniqueProxyIdentifiers;	// 128 = 0x80
    CSDMessagingCallCapabilitiesState *_protoCallCapabilitiesState;	// 136 = 0x88
    CSDMessagingCallModel *_protoCallModel;	// 144 = 0x90
    CSDMessagingCallModelState *_protoCallModelState;	// 152 = 0x98
    NSMutableArray *_protoCalls;	// 160 = 0xa0
    NSData *_protoDTMFKey;	// 168 = 0xa8
    unsigned int _protoDisconnectedReason;	// 176 = 0xb0
    CSDMessagingCallDisplayContext *_protoDisplayContext;	// 184 = 0xb8
    unsigned int _protoPriority;	// 192 = 0xc0
    unsigned int _protoProtocolVersion;	// 196 = 0xc4
    CSDMessagingCallProvider *_protoProvider;	// 200 = 0xc8
    unsigned int _protoService;	// 208 = 0xd0
    unsigned int _protoSoundRegion;	// 212 = 0xd4
    unsigned int _protoTTYType;	// 216 = 0xd8
    NSMutableArray *_providers;	// 224 = 0xe0
    int _receivedMessageType;	// 232 = 0xe8
    NSMutableArray *_remoteParticipantHandles;	// 240 = 0xf0
    int _requestActionType;	// 248 = 0xf8
    CSDMessagingRoute *_route;	// 256 = 0x100
    NSMutableArray *_routes;	// 264 = 0x108
    NSString *_sourceIdentifier;	// 272 = 0x110
    float _systemVolume;	// 280 = 0x118
    int _type;	// 284 = 0x11c
    NSString *_uniqueProxyIdentifier;	// 288 = 0x120
    _Bool _protoCannotBeAnswered;	// 296 = 0x128
    _Bool _protoCannotRelayAudioOrVideoOnPairedDevice;	// 297 = 0x129
    _Bool _protoEmergency;	// 298 = 0x12a
    _Bool _protoExpectedEndpointOnMessagingDevice;	// 299 = 0x12b
    _Bool _protoNeedsManualInCallSounds;	// 300 = 0x12c
    _Bool _protoRemoteUplinkMuted;	// 301 = 0x12d
    _Bool _protoSOS;	// 302 = 0x12e
    _Bool _protoShouldSuppressRingtone;	// 303 = 0x12f
    _Bool _protoSupportsTTYWithVoice;	// 304 = 0x130
    _Bool _protoUplinkMuted;	// 305 = 0x131
    _Bool _protoVideo;	// 306 = 0x132
    _Bool _protoVoicemail;	// 307 = 0x133
    _Bool _protoWantsHoldMusic;	// 308 = 0x134
    struct {
        unsigned int hostCallCreationTime:1;
        unsigned int messageSendTime:1;
        unsigned int hardPauseState:1;
        unsigned int protoDisconnectedReason:1;
        unsigned int protoPriority:1;
        unsigned int protoProtocolVersion:1;
        unsigned int protoService:1;
        unsigned int protoSoundRegion:1;
        unsigned int protoTTYType:1;
        unsigned int receivedMessageType:1;
        unsigned int requestActionType:1;
        unsigned int systemVolume:1;
        unsigned int type:1;
        unsigned int protoCannotBeAnswered:1;
        unsigned int protoCannotRelayAudioOrVideoOnPairedDevice:1;
        unsigned int protoEmergency:1;
        unsigned int protoExpectedEndpointOnMessagingDevice:1;
        unsigned int protoNeedsManualInCallSounds:1;
        unsigned int protoRemoteUplinkMuted:1;
        unsigned int protoSOS:1;
        unsigned int protoShouldSuppressRingtone:1;
        unsigned int protoSupportsTTYWithVoice:1;
        unsigned int protoUplinkMuted:1;
        unsigned int protoVideo:1;
        unsigned int protoVoicemail:1;
        unsigned int protoWantsHoldMusic:1;
    } _has;	// 312 = 0x138
}

+ (Class)endpointIDSDestinationURIsType;	// IMP=0x000000010004c368
+ (Class)routesType;	// IMP=0x000000010004c288
+ (Class)remoteParticipantHandlesType;	// IMP=0x000000010004b7cc
+ (Class)providersType;	// IMP=0x000000010004b554
+ (Class)otherUniqueProxyIdentifiersType;	// IMP=0x000000010004b408
+ (Class)protoCallType;	// IMP=0x000000010004a674
- (void).cxx_destruct;	// IMP=0x000000010005390c
@property(nonatomic) unsigned int protoPriority; // @synthesize protoPriority=_protoPriority;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSMutableArray *endpointIDSDestinationURIs; // @synthesize endpointIDSDestinationURIs=_endpointIDSDestinationURIs;
@property(retain, nonatomic) CSDMessagingRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(nonatomic) _Bool protoSupportsTTYWithVoice; // @synthesize protoSupportsTTYWithVoice=_protoSupportsTTYWithVoice;
@property(nonatomic) unsigned int protoTTYType; // @synthesize protoTTYType=_protoTTYType;
@property(retain, nonatomic) NSString *localSenderIdentityAccountUUIDString; // @synthesize localSenderIdentityAccountUUIDString=_localSenderIdentityAccountUUIDString;
@property(retain, nonatomic) NSMutableArray *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain, nonatomic) NSString *localSenderIdentityUUIDString; // @synthesize localSenderIdentityUUIDString=_localSenderIdentityUUIDString;
@property(nonatomic) float systemVolume; // @synthesize systemVolume=_systemVolume;
@property(nonatomic) _Bool protoRemoteUplinkMuted; // @synthesize protoRemoteUplinkMuted=_protoRemoteUplinkMuted;
@property(nonatomic) _Bool protoUplinkMuted; // @synthesize protoUplinkMuted=_protoUplinkMuted;
@property(nonatomic) _Bool protoVideo; // @synthesize protoVideo=_protoVideo;
@property(retain, nonatomic) CSDMessagingCallProvider *protoProvider; // @synthesize protoProvider=_protoProvider;
@property(retain, nonatomic) CSDMessagingAVConferenceInviteData *inviteData; // @synthesize inviteData=_inviteData;
@property(retain, nonatomic) CSDMessagingCallDisplayContext *protoDisplayContext; // @synthesize protoDisplayContext=_protoDisplayContext;
@property(retain, nonatomic) NSMutableArray *providers; // @synthesize providers=_providers;
@property(nonatomic) _Bool protoSOS; // @synthesize protoSOS=_protoSOS;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) CSDMessagingCallModel *protoCallModel; // @synthesize protoCallModel=_protoCallModel;
@property(retain, nonatomic) NSMutableArray *otherUniqueProxyIdentifiers; // @synthesize otherUniqueProxyIdentifiers=_otherUniqueProxyIdentifiers;
@property(nonatomic) _Bool protoEmergency; // @synthesize protoEmergency=_protoEmergency;
@property(nonatomic) unsigned int protoSoundRegion; // @synthesize protoSoundRegion=_protoSoundRegion;
@property(retain, nonatomic) CSDMessagingCallCapabilitiesState *protoCallCapabilitiesState; // @synthesize protoCallCapabilitiesState=_protoCallCapabilitiesState;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(nonatomic) _Bool protoExpectedEndpointOnMessagingDevice; // @synthesize protoExpectedEndpointOnMessagingDevice=_protoExpectedEndpointOnMessagingDevice;
@property(nonatomic) _Bool protoCannotRelayAudioOrVideoOnPairedDevice; // @synthesize protoCannotRelayAudioOrVideoOnPairedDevice=_protoCannotRelayAudioOrVideoOnPairedDevice;
@property(nonatomic) _Bool protoNeedsManualInCallSounds; // @synthesize protoNeedsManualInCallSounds=_protoNeedsManualInCallSounds;
@property(nonatomic) double messageSendTime; // @synthesize messageSendTime=_messageSendTime;
@property(nonatomic) double hostCallCreationTime; // @synthesize hostCallCreationTime=_hostCallCreationTime;
@property(retain, nonatomic) NSData *dummyPayload; // @synthesize dummyPayload=_dummyPayload;
@property(nonatomic) _Bool protoShouldSuppressRingtone; // @synthesize protoShouldSuppressRingtone=_protoShouldSuppressRingtone;
@property(nonatomic) unsigned int protoProtocolVersion; // @synthesize protoProtocolVersion=_protoProtocolVersion;
@property(nonatomic) unsigned int hardPauseState; // @synthesize hardPauseState=_hardPauseState;
@property(retain, nonatomic) NSString *hardPauseDigits; // @synthesize hardPauseDigits=_hardPauseDigits;
@property(retain, nonatomic) NSMutableArray *protoCalls; // @synthesize protoCalls=_protoCalls;
@property(retain, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(nonatomic) _Bool protoVoicemail; // @synthesize protoVoicemail=_protoVoicemail;
@property(retain, nonatomic) NSString *oBSOLETEConferenceIdentifier; // @synthesize oBSOLETEConferenceIdentifier=_oBSOLETEConferenceIdentifier;
@property(nonatomic) unsigned int protoDisconnectedReason; // @synthesize protoDisconnectedReason=_protoDisconnectedReason;
@property(retain, nonatomic) NSData *protoDTMFKey; // @synthesize protoDTMFKey=_protoDTMFKey;
@property(nonatomic) _Bool protoCannotBeAnswered; // @synthesize protoCannotBeAnswered=_protoCannotBeAnswered;
@property(nonatomic) _Bool protoWantsHoldMusic; // @synthesize protoWantsHoldMusic=_protoWantsHoldMusic;
@property(nonatomic) unsigned int protoService; // @synthesize protoService=_protoService;
@property(retain, nonatomic) CSDMessagingCallModelState *protoCallModelState; // @synthesize protoCallModelState=_protoCallModelState;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100052800
- (unsigned long long)hash;	// IMP=0x0000000100052130
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100051758
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100050a78
- (void)copyTo:(id)arg1;	// IMP=0x000000010005004c
- (void)writeTo:(id)arg1;	// IMP=0x000000010004f608
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010004f600
- (id)dictionaryRepresentation;	// IMP=0x000000010004c490
- (id)description;	// IMP=0x000000010004c3dc
@property(nonatomic) _Bool hasProtoPriority;
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
- (id)endpointIDSDestinationURIsAtIndex:(unsigned long long)arg1;	// IMP=0x000000010004c350
- (unsigned long long)endpointIDSDestinationURIsCount;	// IMP=0x000000010004c338
- (void)addEndpointIDSDestinationURIs:(id)arg1;	// IMP=0x000000010004c2c4
- (void)clearEndpointIDSDestinationURIs;	// IMP=0x000000010004c2ac
@property(readonly, nonatomic) _Bool hasRoute;
- (id)routesAtIndex:(unsigned long long)arg1;	// IMP=0x000000010004c270
- (unsigned long long)routesCount;	// IMP=0x000000010004c258
- (void)addRoutes:(id)arg1;	// IMP=0x000000010004c1e4
- (void)clearRoutes;	// IMP=0x000000010004c1cc
- (int)StringAsRequestActionType:(id)arg1;	// IMP=0x000000010004bbac
- (id)requestActionTypeAsString:(int)arg1;	// IMP=0x000000010004b918
@property(nonatomic) _Bool hasRequestActionType;
@property(nonatomic) int requestActionType; // @synthesize requestActionType=_requestActionType;
@property(nonatomic) _Bool hasProtoSupportsTTYWithVoice;
@property(nonatomic) _Bool hasProtoTTYType;
@property(readonly, nonatomic) _Bool hasLocalSenderIdentityAccountUUIDString;
- (id)remoteParticipantHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x000000010004b7b4
- (unsigned long long)remoteParticipantHandlesCount;	// IMP=0x000000010004b79c
- (void)addRemoteParticipantHandles:(id)arg1;	// IMP=0x000000010004b728
- (void)clearRemoteParticipantHandles;	// IMP=0x000000010004b710
@property(readonly, nonatomic) _Bool hasLocalSenderIdentityUUIDString;
@property(nonatomic) _Bool hasSystemVolume;
@property(nonatomic) _Bool hasProtoRemoteUplinkMuted;
@property(nonatomic) _Bool hasProtoUplinkMuted;
@property(nonatomic) _Bool hasProtoVideo;
@property(readonly, nonatomic) _Bool hasProtoProvider;
@property(readonly, nonatomic) _Bool hasInviteData;
@property(readonly, nonatomic) _Bool hasProtoDisplayContext;
- (id)providersAtIndex:(unsigned long long)arg1;	// IMP=0x000000010004b53c
- (unsigned long long)providersCount;	// IMP=0x000000010004b524
- (void)addProviders:(id)arg1;	// IMP=0x000000010004b4b0
- (void)clearProviders;	// IMP=0x000000010004b498
@property(nonatomic) _Bool hasProtoSOS;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) _Bool hasProtoCallModel;
- (id)otherUniqueProxyIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000010004b3f0
- (unsigned long long)otherUniqueProxyIdentifiersCount;	// IMP=0x000000010004b3d8
- (void)addOtherUniqueProxyIdentifiers:(id)arg1;	// IMP=0x000000010004b364
- (void)clearOtherUniqueProxyIdentifiers;	// IMP=0x000000010004b34c
@property(nonatomic) _Bool hasProtoEmergency;
@property(nonatomic) _Bool hasProtoSoundRegion;
@property(readonly, nonatomic) _Bool hasProtoCallCapabilitiesState;
@property(readonly, nonatomic) _Bool hasContactIdentifier;
@property(nonatomic) _Bool hasProtoExpectedEndpointOnMessagingDevice;
@property(nonatomic) _Bool hasProtoCannotRelayAudioOrVideoOnPairedDevice;
@property(nonatomic) _Bool hasProtoNeedsManualInCallSounds;
@property(nonatomic) _Bool hasMessageSendTime;
@property(nonatomic) _Bool hasHostCallCreationTime;
@property(readonly, nonatomic) _Bool hasDummyPayload;
@property(nonatomic) _Bool hasProtoShouldSuppressRingtone;
@property(nonatomic) _Bool hasProtoProtocolVersion;
- (int)StringAsReceivedMessageType:(id)arg1;	// IMP=0x000000010004a9fc
- (id)receivedMessageTypeAsString:(int)arg1;	// IMP=0x000000010004a768
@property(nonatomic) _Bool hasReceivedMessageType;
@property(nonatomic) int receivedMessageType; // @synthesize receivedMessageType=_receivedMessageType;
@property(nonatomic) _Bool hasHardPauseState;
@property(readonly, nonatomic) _Bool hasHardPauseDigits;
- (id)protoCallAtIndex:(unsigned long long)arg1;	// IMP=0x000000010004a65c
- (unsigned long long)protoCallsCount;	// IMP=0x000000010004a644
- (void)addProtoCall:(id)arg1;	// IMP=0x000000010004a5d0
- (void)clearProtoCalls;	// IMP=0x000000010004a5b8
@property(readonly, nonatomic) _Bool hasCallerNameFromNetwork;
@property(nonatomic) _Bool hasProtoVoicemail;
@property(readonly, nonatomic) _Bool hasOBSOLETEConferenceIdentifier;
@property(nonatomic) _Bool hasProtoDisconnectedReason;
@property(readonly, nonatomic) _Bool hasProtoDTMFKey;
@property(nonatomic) _Bool hasProtoCannotBeAnswered;
@property(nonatomic) _Bool hasProtoWantsHoldMusic;
@property(nonatomic) _Bool hasProtoService;
@property(readonly, nonatomic) _Bool hasProtoCallModelState;
@property(readonly, nonatomic) _Bool hasSourceIdentifier;
@property(readonly, nonatomic) _Bool hasDestinationID;
@property(readonly, nonatomic) _Bool hasUniqueProxyIdentifier;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000100049d54
- (id)typeAsString:(int)arg1;	// IMP=0x0000000100049ac0
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long priority;
@property(nonatomic) _Bool supportsTTYWithVoice;
@property(nonatomic) int ttyType;
@property(copy, nonatomic) NSSet *remoteParticipantTUHandles;
@property(retain, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property(retain, nonatomic) NSUUID *localSenderIdentityUUID;
@property(retain, nonatomic) IDSDestination *endpointIDSDestination;
@property(retain, nonatomic) TUCallDisplayContext *displayContext;
- (void)setTuProvider:(id)arg1 isVideo:(_Bool)arg2;	// IMP=0x000000010002cef4
@property(nonatomic, getter=isVideo) _Bool video;
@property(retain, nonatomic) TUCallProvider *tuProvider;
@property(retain, nonatomic) NSArray *tuProviders;
@property(retain, nonatomic) TUHandle *tuHandle;
- (void)addCall:(id)arg1;	// IMP=0x000000010002c6c4
@property(retain, nonatomic) TUCallModel *callModel;
@property(nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool sos;
@property(nonatomic, getter=isEmergency) _Bool emergency;
@property(retain, nonatomic) TUCallCapabilitiesState *callCapabilitiesState;
@property(nonatomic) long long soundRegion;
@property(nonatomic, getter=isExpectedEndpointOnMessagingDevice) _Bool expectedEndpointOnMessagingDevice;
@property(nonatomic) _Bool cannotRelayAudioOrVideoOnPairedDevice;
@property(nonatomic) _Bool needsManualInCallSounds;
@property(nonatomic) _Bool shouldSuppressRingtone;
- (void)customizeForProtocolVersion:(int)arg1;	// IMP=0x000000010002b744
- (void)addProtocolVersion;	// IMP=0x000000010002b734
@property(nonatomic) int protocolVersion;
@property(nonatomic) int hardPauseDigitsState;
@property(nonatomic, getter=isVoicemail) _Bool voicemail;
@property(nonatomic) unsigned char DTMFKey;
@property(nonatomic) _Bool cannotBeAnswered;
@property(nonatomic) int disconnectedReason;
@property(nonatomic) _Bool wantsHoldMusic;
- (void)setService:(int)arg1;	// IMP=0x000000010002b3e4
- (int)service;	// IMP=0x000000010002b3d8
@property(readonly, nonatomic) TUDialRequest *dialRequest;
@property(readonly, copy, nonatomic) NSString *receivedMessageTypeString;
@property(readonly, copy, nonatomic) NSString *typeString;
- (id)initWithType:(int)arg1 uniqueProxyIdentifier:(id)arg2;	// IMP=0x000000010002a994
- (id)initWithType:(int)arg1;	// IMP=0x000000010002a8ac
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010002a5fc

@end

