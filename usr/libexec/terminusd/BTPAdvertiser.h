//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface BTPAdvertiser : NSObject
{
    unsigned short _port;	// 8 = 0x8
    unsigned int _srcIfIndex;	// 12 = 0xc
    unsigned int _dstIfIndex;	// 16 = 0x10
    struct _DNSServiceRef_t *_sdRefRegister;	// 24 = 0x18
    NSString *_bonjourName;	// 32 = 0x20
    NSString *_bonjourType;	// 40 = 0x28
    NSString *_bonjourDomain;	// 48 = 0x30
    NSString *_hostTarget;	// 56 = 0x38
    NSData *_txtRecord;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100004ca4
@property(retain, nonatomic) NSData *txtRecord; // @synthesize txtRecord=_txtRecord;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *hostTarget; // @synthesize hostTarget=_hostTarget;
@property(retain, nonatomic) NSString *bonjourDomain; // @synthesize bonjourDomain=_bonjourDomain;
@property(retain, nonatomic) NSString *bonjourType; // @synthesize bonjourType=_bonjourType;
@property(retain, nonatomic) NSString *bonjourName; // @synthesize bonjourName=_bonjourName;
@property(nonatomic) unsigned int dstIfIndex; // @synthesize dstIfIndex=_dstIfIndex;
@property(nonatomic) unsigned int srcIfIndex; // @synthesize srcIfIndex=_srcIfIndex;
@property(nonatomic) struct _DNSServiceRef_t *sdRefRegister; // @synthesize sdRefRegister=_sdRefRegister;
- (void)dealloc;	// IMP=0x0000000100004b7c
- (void)stop;	// IMP=0x0000000100004af8
- (_Bool)start;	// IMP=0x00000001000048a4
- (id)initWithSrcIfIndex:(unsigned int)arg1 dstIfIndex:(unsigned int)arg2 name:(id)arg3 type:(id)arg4 domain:(id)arg5 hostTarget:(id)arg6 port:(unsigned short)arg7 txtRecord:(id)arg8;	// IMP=0x00000001000046fc

@end
