//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface SESWrapper : NSObject
{
    _Bool _useCKVR;	// 8 = 0x8
    _Bool _recoveryPassphraseMutable;	// 9 = 0x9
    NSString *_decodedLabel;	// 16 = 0x10
    NSDate *_escrowDate;	// 24 = 0x18
    NSData *_recoveryBlob;	// 32 = 0x20
    struct ccses_crypto_t *_ccses;	// 40 = 0x28
    struct ccsrp_ctx *_srp;	// 48 = 0x30
    struct ckvr_srp_context *_ckvr;	// 56 = 0x38
    NSString *_dsid;	// 64 = 0x40
    NSString *_recoveryPassphrase;	// 72 = 0x48
    NSString *_label;	// 80 = 0x50
    NSString *_recordID;	// 88 = 0x58
    NSDictionary *_escrowRecord;	// 96 = 0x60
    NSData *_escrowBlob;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100052eac
@property(retain, nonatomic) NSData *escrowBlob; // @synthesize escrowBlob=_escrowBlob;
@property(readonly, copy, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool recoveryPassphraseMutable; // @synthesize recoveryPassphraseMutable=_recoveryPassphraseMutable;
@property(copy, nonatomic) NSString *recoveryPassphrase; // @synthesize recoveryPassphrase=_recoveryPassphrase;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) struct ckvr_srp_context *ckvr; // @synthesize ckvr=_ckvr;
@property(readonly, nonatomic) _Bool useCKVR; // @synthesize useCKVR=_useCKVR;
@property(readonly, nonatomic) struct ccsrp_ctx *srp; // @synthesize srp=_srp;
@property(readonly, nonatomic) struct ccses_crypto_t *ccses; // @synthesize ccses=_ccses;
@property(retain) NSData *recoveryBlob; // @synthesize recoveryBlob=_recoveryBlob;
@property(copy, nonatomic) NSDate *escrowDate; // @synthesize escrowDate=_escrowDate;
@property(copy, nonatomic) NSString *decodedLabel; // @synthesize decodedLabel=_decodedLabel;
- (void)dealloc;	// IMP=0x0000000100052d60
- (id)recoveryResponseForBlob:(id)arg1;	// IMP=0x0000000100052528
- (id)srpResponseForEscrowBlob:(id)arg1 withKey:(struct __SecKey *)arg2 withFullCCKey:(struct ccrsa_full_ctx *)arg3;	// IMP=0x0000000100051b48
- (id)decodedEscrowRecordFromData:(id)arg1;	// IMP=0x00000001000513b4
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey *)arg1 error:(id *)arg2;	// IMP=0x000000010004f790
- (id)srpRecoveryBlobFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004eba0
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;	// IMP=0x000000010004eb24
- (unsigned long long)srpPublicKeySize;	// IMP=0x000000010004eac0
- (unsigned long long)srpKeySize;	// IMP=0x000000010004ea30
- (id)srpInitBlob;	// IMP=0x000000010004e8e8
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5 ckvrFlag:(_Bool)arg6;	// IMP=0x000000010004e70c
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5;	// IMP=0x000000010004e628
- (id)initWithRequest:(id)arg1 ckvrFlag:(_Bool)arg2;	// IMP=0x000000010004e480
- (id)initWithRequest:(id)arg1;	// IMP=0x000000010004e41c

@end
