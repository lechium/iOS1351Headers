//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PTPOperationResponsePacket : NSObject
{
    int _numParameters;	// 8 = 0x8
    unsigned short _responseCode;	// 12 = 0xc
    unsigned int _transactionID;	// 16 = 0x10
    unsigned int _parameters[5];	// 20 = 0x14
}

- (void)setParameter5:(unsigned int)arg1;	// IMP=0x000000010001f304
- (unsigned int)parameter5;	// IMP=0x000000010001f2fc
- (void)setParameter4:(unsigned int)arg1;	// IMP=0x000000010001f2f4
- (unsigned int)parameter4;	// IMP=0x000000010001f2ec
- (void)setParameter3:(unsigned int)arg1;	// IMP=0x000000010001f2e4
- (unsigned int)parameter3;	// IMP=0x000000010001f2dc
- (void)setParameter2:(unsigned int)arg1;	// IMP=0x000000010001f2d4
- (unsigned int)parameter2;	// IMP=0x000000010001f2cc
- (void)setParameter1:(unsigned int)arg1;	// IMP=0x000000010001f2c4
- (unsigned int)parameter1;	// IMP=0x000000010001f2bc
- (void)setPparameter:(unsigned int)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000010001f2a8
- (unsigned int)parameterAtIndex:(unsigned int)arg1;	// IMP=0x000000010001f28c
- (void)setNumParameters:(unsigned int)arg1;	// IMP=0x000000010001f27c
- (int)numParameters;	// IMP=0x000000010001f274
- (void)setTransactionID:(unsigned int)arg1;	// IMP=0x000000010001f26c
- (unsigned int)transactionID;	// IMP=0x000000010001f264
- (void)setResponseCode:(unsigned short)arg1;	// IMP=0x000000010001f25c
- (unsigned short)responseCode;	// IMP=0x000000010001f254
- (id)description;	// IMP=0x000000010001f204
- (id)contentForUSBUsingBuffer:(void *)arg1 capacity:(unsigned int)arg2;	// IMP=0x000000010001f11c
- (id)contentForUSB;	// IMP=0x000000010001f038
- (id)contentForTCP;	// IMP=0x000000010001ef54
- (id)initWithUSBBuffer:(void *)arg1;	// IMP=0x000000010001ee90
- (id)initWithTCPBuffer:(void *)arg1;	// IMP=0x000000010001edd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001ec98
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 parameter4:(unsigned int)arg6 parameter5:(unsigned int)arg7;	// IMP=0x000000010001ec14
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 parameter4:(unsigned int)arg6;	// IMP=0x000000010001eb94
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5;	// IMP=0x000000010001eb1c
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4;	// IMP=0x000000010001eab0
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3;	// IMP=0x000000010001ea4c
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2;	// IMP=0x000000010001e9f8
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 numParameters:(unsigned int)arg3 parameters:(unsigned int *)arg4;	// IMP=0x000000010001e978

@end
