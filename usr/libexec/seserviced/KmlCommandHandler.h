//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KmlEndpointCreationConfig, KmlKeyDataTransmitter, KmlSecureChannel, NSArray, NSString;

@interface KmlCommandHandler : NSObject
{
    NSArray *_expectedCommands;	// 8 = 0x8
    KmlSecureChannel *_secureChannel;	// 16 = 0x10
    NSString *_pairingPassword;	// 24 = 0x18
    KmlEndpointCreationConfig *_keyConfig;	// 32 = 0x20
    _Bool _writeDataEnd;	// 40 = 0x28
    long long _currentCommand;	// 48 = 0x30
    long long _opControlFlowType;	// 56 = 0x38
    KmlKeyDataTransmitter *_keyData;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010005467c
@property(retain, nonatomic) KmlKeyDataTransmitter *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) long long opControlFlowType; // @synthesize opControlFlowType=_opControlFlowType;
@property(nonatomic) long long currentCommand; // @synthesize currentCommand=_currentCommand;
- (_Bool)validateOpControlFlowWithOperation:(unsigned char)arg1 reason:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x0000000100053be0
- (id)getOwnerKeyConfig;	// IMP=0x0000000100053bd8
- (id)getOpqueAttestation;	// IMP=0x0000000100053bc8
- (id)isKeyCreationConfigValid;	// IMP=0x0000000100053bb8
- (id)handleWriteDataCommand:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100053748
- (id)handleGetResponseCommand:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000536c8
- (id)handleGetDataCommand:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100053648
- (id)handleOpControlFlowCommand:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100053114
- (id)handlePakeVerifyCommand:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100052cc8
- (id)handlePakeRequestCommand:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100051e30
- (id)handlePakeRequestCommandForProbing;	// IMP=0x0000000100051dec
- (id)handleSelectCommand:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100051b84
- (id)handleIncomingCommand:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100051888
- (_Bool)isIncomingCommandAndDataValid:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000515e8
- (_Bool)isDataValid:(id)arg1 commandType:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000514f8
- (long long)getCommandType:(id)arg1;	// IMP=0x00000001000513ec
- (void)adjustExpectedAndCurrentCommands:(long long)arg1;	// IMP=0x0000000100050efc
- (_Bool)isCommandValid:(long long)arg1;	// IMP=0x0000000100050e9c
- (void)resetExpectedCommands;	// IMP=0x0000000100050e88
- (id)initWithSecureChannel:(id)arg1 pairingPassword:(id)arg2;	// IMP=0x0000000100050cac

@end

