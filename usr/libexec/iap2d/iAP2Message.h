//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class iAP2GroupParam;

@interface iAP2Message : NSObject
{
    unsigned long long msgTimestampMs;	// 8 = 0x8
    unsigned short msgLen;	// 16 = 0x10
    unsigned short msgID;	// 18 = 0x12
    unsigned short msgLenRemain;	// 20 = 0x14
    int msgParseState;	// 24 = 0x18
    iAP2GroupParam *pGroupParams;	// 32 = 0x20
}

+ (id)createMsgWithID:(unsigned short)arg1;	// IMP=0x000000010000f6b0
- (void)clearMessage;	// IMP=0x00000001000103fc
- (int)sendAndClearMessageOnConnection:(id)arg1 withMessageID:(unsigned short)arg2;	// IMP=0x00000001000103bc
- (int)sendAndClearMessageOnConnection:(id)arg1;	// IMP=0x00000001000102a0
- (int)sendMessageOnConnection:(id)arg1 withMessageID:(unsigned short)arg2;	// IMP=0x0000000100010260
- (int)sendMessageOnConnection:(id)arg1;	// IMP=0x0000000100010148
- (id)description;	// IMP=0x00000001000100dc
- (unsigned short)generateRawMsgBuffer:(char *)arg1;	// IMP=0x0000000100010034
- (unsigned short)getRawMsgLength;	// IMP=0x000000010000ffe8
- (void)setGroupParams:(id)arg1;	// IMP=0x000000010000ffb4
- (id)getGroupParams;	// IMP=0x000000010000ffac
- (id)getParamArray;	// IMP=0x000000010000ff9c
- (unsigned short)getParamCount;	// IMP=0x000000010000ff6c
- (unsigned short)getMsgLen;	// IMP=0x000000010000ff64
- (void)setMsgID:(unsigned short)arg1;	// IMP=0x000000010000ff5c
- (unsigned short)getMsgID;	// IMP=0x000000010000ff54
- (int)parseMsgBuffer:(unsigned long long)arg1:(const char *)arg2:(unsigned short)arg3:(unsigned short *)arg4;	// IMP=0x000000010000fc58
- (id)allocAndAddGroupWithID:(unsigned short)arg1;	// IMP=0x000000010000fbfc
- (int)createParamWithIDAndNSString:(unsigned short)arg1:(id)arg2;	// IMP=0x000000010000fb98
- (int)createParamWithIDAndNSData:(unsigned short)arg1:(id)arg2;	// IMP=0x000000010000fb34
- (int)createParamWithIDAndDataInt64:(unsigned short)arg1:(long long)arg2;	// IMP=0x000000010000fad0
- (int)createParamWithIDAndDataInt32:(unsigned short)arg1:(int)arg2;	// IMP=0x000000010000fa6c
- (int)createParamWithIDAndDataInt16:(unsigned short)arg1:(short)arg2;	// IMP=0x000000010000fa08
- (int)createParamWithIDAndDataInt8:(unsigned short)arg1:(BOOL)arg2;	// IMP=0x000000010000f9a4
- (int)createParamWithIDAndDataU64:(unsigned short)arg1:(unsigned long long)arg2;	// IMP=0x000000010000f940
- (int)createParamWithIDAndDataU32:(unsigned short)arg1:(unsigned int)arg2;	// IMP=0x000000010000f8dc
- (int)createParamWithIDAndDataU16:(unsigned short)arg1:(unsigned short)arg2;	// IMP=0x000000010000f878
- (int)createParamWithIDAndDataU8:(unsigned short)arg1:(unsigned char)arg2;	// IMP=0x000000010000f814
- (int)createParamWithIDAndDataBool:(unsigned short)arg1:(_Bool)arg2;	// IMP=0x000000010000f7b0
- (int)createParamWithIDAndDataRaw:(unsigned short)arg1:(char *)arg2:(unsigned short)arg3;	// IMP=0x000000010000f74c
- (int)createParamWithID:(unsigned short)arg1;	// IMP=0x000000010000f6e8
- (void)reinit;	// IMP=0x000000010000f650
- (void)dealloc;	// IMP=0x000000010000f604
- (id)initWithMsgID:(unsigned short)arg1;	// IMP=0x000000010000f5d4
- (id)init;	// IMP=0x000000010000f560

@end

