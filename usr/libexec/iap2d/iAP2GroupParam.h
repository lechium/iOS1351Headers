//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface iAP2GroupParam : NSObject
{
    unsigned short groupID;	// 8 = 0x8
    unsigned short groupLen;	// 10 = 0xa
    unsigned short groupLenRemain;	// 12 = 0xc
    int groupParseState;	// 16 = 0x10
    NSMutableArray *pParamArray;	// 24 = 0x18
}

+ (id)allocGroupParamID:(unsigned short)arg1;	// IMP=0x000000010000e720
- (id)description;	// IMP=0x000000010000f3f4
- (unsigned short)generateRawGroupParamBuffer:(char *)arg1;	// IMP=0x000000010000f264
- (unsigned short)getRawGroupParamLength;	// IMP=0x000000010000f13c
- (int)parseGroupParams:(const char *)arg1:(unsigned short)arg2:(unsigned short)arg3:(unsigned short *)arg4;	// IMP=0x000000010000ed80
- (void)addParamArray:(id)arg1;	// IMP=0x000000010000ed70
- (void)setParamArray:(id)arg1;	// IMP=0x000000010000ed3c
- (id)getParamArray;	// IMP=0x000000010000ed34
- (unsigned short)getGroupLen;	// IMP=0x000000010000ed2c
- (void)setGroupID:(unsigned short)arg1;	// IMP=0x000000010000ed24
- (unsigned short)getGroupID;	// IMP=0x000000010000ed1c
- (void)dealloc;	// IMP=0x000000010000ecd0
- (id)initWithGroupIDLen:(unsigned short)arg1:(unsigned short)arg2;	// IMP=0x000000010000eba8
- (id)init;	// IMP=0x000000010000eb34
- (id)allocAndAddGroupWithID:(unsigned short)arg1;	// IMP=0x000000010000eae4
- (int)allocAndAddParamID:(unsigned short)arg1 withNSString:(id)arg2;	// IMP=0x000000010000ea80
- (int)allocAndAddParamID:(unsigned short)arg1 withNSData:(id)arg2;	// IMP=0x000000010000ea1c
- (int)allocAndAddParamID:(unsigned short)arg1 withU64Data:(unsigned long long)arg2;	// IMP=0x000000010000e9b8
- (int)allocAndAddParamID:(unsigned short)arg1 withU32Data:(unsigned int)arg2;	// IMP=0x000000010000e954
- (int)allocAndAddParamID:(unsigned short)arg1 withU16Data:(unsigned short)arg2;	// IMP=0x000000010000e8f0
- (int)allocAndAddParamID:(unsigned short)arg1 withU8Data:(unsigned char)arg2;	// IMP=0x000000010000e88c
- (int)allocAndAddParamID:(unsigned short)arg1 withBoolData:(_Bool)arg2;	// IMP=0x000000010000e828
- (int)allocAndAddParamID:(unsigned short)arg1 withRawData:(char *)arg2 andRawLen:(unsigned short)arg3;	// IMP=0x000000010000e7c4
- (int)allocAndAddParamID:(unsigned short)arg1;	// IMP=0x000000010000e760

@end
