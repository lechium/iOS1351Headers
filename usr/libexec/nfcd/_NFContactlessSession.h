//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_NFSession.h"

#import "NFContactlessSessionInterface-Protocol.h"

@class NFApplet, NFSecureElementWrapper, NSArray, NSMutableDictionary, NSSet;

@interface _NFContactlessSession : _NFSession <NFContactlessSessionInterface>
{
    _Bool _fieldPresent;	// 8 = 0x8
    NFApplet *_activeApplet;	// 16 = 0x10
    NSArray *_activeGroupMembers;	// 24 = 0x18
    NSMutableDictionary *_appletMap;	// 32 = 0x20
    NSArray *_applets;	// 40 = 0x28
    unsigned long long _emulationState;	// 48 = 0x30
    unsigned long long _activeAppletEmulationProtocol;	// 56 = 0x38
    _Bool _plasticCardMode;	// 64 = 0x40
    NFSecureElementWrapper *_secureElementWrapper;	// 72 = 0x48
    NSArray *_secureElementWrappers;	// 80 = 0x50
    NSSet *_activeKeyIdentifiers;	// 88 = 0x58
}

+ (id)validateEntitlements:(id)arg1;	// IMP=0x0000000100034480
@property _Bool plasticCardMode; // @synthesize plasticCardMode=_plasticCardMode;
@property(readonly) NSSet *activeKeyIdentifiers; // @synthesize activeKeyIdentifiers=_activeKeyIdentifiers;
@property(retain) NSArray *secureElementWrappers; // @synthesize secureElementWrappers=_secureElementWrappers;
@property(retain) NFSecureElementWrapper *secureElementWrapper; // @synthesize secureElementWrapper=_secureElementWrapper;
- (void)handleFelicaStateEvent:(id)arg1;	// IMP=0x0000000100038964
- (void)handleSelectEvent:(id)arg1;	// IMP=0x00000001000387f8
- (void)handleFieldReset;	// IMP=0x00000001000386f0
- (void)handleFieldNotification:(id)arg1;	// IMP=0x00000001000386bc
- (void)handleFieldChanged:(_Bool)arg1;	// IMP=0x0000000100038578
- (_Bool)startDefaultMode;	// IMP=0x0000000100038568
- (_Bool)startDefaultModeAndKeepSEOn:(_Bool)arg1;	// IMP=0x0000000100038284
- (_Bool)startFieldDetectMode;	// IMP=0x0000000100038274
- (_Bool)_startFieldDetectAndKeepSEOn:(_Bool)arg1;	// IMP=0x0000000100038210
- (_Bool)startWiredMode;	// IMP=0x00000001000381bc
- (_Bool)startCardEmulationWithType:(unsigned long long)arg1;	// IMP=0x00000001000381b0
- (oneway void)stopCardEmulation:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037fdc
- (oneway void)startCardEmulation:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037ca0
- (oneway void)setActiveApplet:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037a84
- (oneway void)getApplets:(CDUnknownBlockType)arg1;	// IMP=0x00000001000379b8
- (_Bool)_configureEmulationType:(unsigned long long)arg1 routingConfigWhenEmulationOff:(unsigned long long)arg2 fieldDetect:(long long)arg3;	// IMP=0x0000000100037558
- (_Bool)_configureEmulationType:(unsigned long long)arg1;	// IMP=0x00000001000374a8
- (unsigned long long)_getActiveAppletEmulationProtocol:(id)arg1;	// IMP=0x0000000100037094
- (id)_getRelatedGroupMembersForActiveApplet;	// IMP=0x0000000100036da0
- (id)_getAppletsForAids:(id)arg1;	// IMP=0x0000000100036b58
- (id)preloadApplets;	// IMP=0x0000000100036110
- (id)setActiveApplet:(id)arg1;	// IMP=0x00000001000356f0
- (id)setActiveKeys:(id)arg1 onApplet:(id)arg2;	// IMP=0x0000000100035400
- (id)_activateKeys:(_Bool)arg1 forIdentifiers:(id)arg2 onApplet:(id)arg3;	// IMP=0x0000000100035110
- (id)seidForApplet:(id)arg1;	// IMP=0x00000001000350cc
- (void)switchToSecureElementWrapperForApplet:(id)arg1;	// IMP=0x0000000100035094
- (id)_getSecureElementWrapperForApplet:(id)arg1;	// IMP=0x0000000100034d60
- (void)_setActiveSecureElementWrapper:(id)arg1;	// IMP=0x0000000100034be8
- (_Bool)useFilteredApplets;	// IMP=0x0000000100034be0
@property(readonly) NSArray *applets;
@property(readonly) NSArray *activeAppletGroupMembers;
@property(readonly) NFApplet *activeApplet;
- (void)cleanup;	// IMP=0x00000001000348f4
- (void)didStartSession:(id)arg1;	// IMP=0x000000010003478c
- (_Bool)willStartSession;	// IMP=0x000000010003472c
- (unsigned long long)initialRoutingMode;	// IMP=0x0000000100034724
- (void)dealloc;	// IMP=0x0000000100034674

@end
