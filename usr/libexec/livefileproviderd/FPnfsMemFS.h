//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFileProviderLiveItemCore-Protocol.h"

@class FPnfsMemNode, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FPnfsMemFS : NSObject <NSFileProviderLiveItemCore>
{
    NSString *rootPath;	// 8 = 0x8
    _Atomic unsigned long long filehandle;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *opQueue;	// 24 = 0x18
    NSMutableDictionary *fhMap;	// 32 = 0x20
    FPnfsMemNode *_rootNode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000e180
@property(readonly) FPnfsMemNode *rootNode; // @synthesize rootNode=_rootNode;
- (void)LIVerifyExistenceWithFileIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e160
- (void)LIGetPathsAndAttributesForFileIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e14c
- (void)LIGetParentsAndAttributesForFileIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e138
- (void)LISetUpdateInterest:(id)arg1 interest:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e0a4
- (void)LIAccessCheck:(id)arg1 requestedAccess:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e094
- (void)LISearchAbort:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e084
- (void)LISearchReplenishCredits:(id)arg1 credits:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e074
- (void)LISearch:(id)arg1 token:(id)arg2 criteria:(id)arg3 resumeAt:(id)arg4 maxData:(unsigned int)arg5 maxDelay:(double)arg6 initialCredits:(unsigned int)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x000000010000e064
- (void)LIListXattrs:(id)arg1 forPID:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e050
- (void)LISetXattr:(id)arg1 name:(id)arg2 value:(id)arg3 how:(int)arg4 forPID:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010000e040
- (void)LIGetXattr:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000e02c
- (void)LISetFsAttr:(id)arg1 name:(id)arg2 value:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000e018
- (void)LIGetFsAttr:(id)arg1 name:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ddb4
- (void)LIWrite:(id)arg1 atOffset:(unsigned long long)arg2 withBuffer:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000dcb4
- (void)LIWrite:(id)arg1 atOffset:(unsigned long long)arg2 withBuffer:(id)arg3 forPID:(int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000dbb4
- (void)LIStatFS:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000da60
- (void)LISetAttr:(id)arg1 setAttrs:(id)arg2 forPID:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000d960
- (void)LIRename:(id)arg1 name:(id)arg2 toDir:(id)arg3 andName:(id)arg4 withFlags:(unsigned int)arg5 forPID:(int)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000010000d65c
- (void)LIRemoveDir:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000d4dc
- (void)LIRemove:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000d3b8
- (void)LIReclaim:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d2c0
- (void)LIReadLink:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d1bc
- (void)LIReadDirAndAttrs:(id)arg1 intoBuffer:(id)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000d038
- (void)LIReadDirAndAttrs:(id)arg1 amount:(unsigned long long)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000ce6c
- (void)LIReadDir:(id)arg1 intoBuffer:(id)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000ccec
- (void)LIReadDir:(id)arg1 amount:(unsigned long long)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000cb24
- (void)LIRead:(id)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ca24
- (void)LIRead:(id)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 forPID:(int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000c924
- (void)LIRead:(id)arg1 atOffset:(unsigned long long)arg2 withBuffer:(id)arg3 forPID:(int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000c824
- (void)LIPathConf:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c6cc
- (void)LIOpen:(id)arg1 withMode:(int)arg2 forPID:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000c5d0
- (void)LIMakeClone:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 withAttrs:(id)arg4 andFlags:(unsigned int)arg5 forPID:(int)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000010000c4a4
- (void)LIMakeLink:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 forPID:(int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000c37c
- (void)LIMakeSymLink:(id)arg1 named:(id)arg2 withContents:(id)arg3 andAttrs:(id)arg4 forPID:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010000c250
- (void)LIMakeDir:(id)arg1 named:(id)arg2 withAttrs:(id)arg3 forPID:(int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000c09c
- (void)LILookup:(id)arg1 name:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000bee8
- (void)LIGetRootFileHandle:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bd74
- (void)LIGetDomainAttributes:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bcbc
- (void)LIGetAttr:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bb4c
- (void)LICreate:(id)arg1 named:(id)arg2 withAttrs:(id)arg3 forPID:(int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000ba24
- (void)LIClose:(id)arg1 withMode:(int)arg2 forPID:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b92c
- (void)rmMountPath:(id)arg1;	// IMP=0x000000010000b4dc
- (id)mkMountPath:(id)arg1 mountID:(unsigned int)arg2;	// IMP=0x000000010000addc
- (void)rmNode:(id)arg1;	// IMP=0x000000010000acf8
- (id)findNode:(id)arg1;	// IMP=0x000000010000ace8
- (id)findNode:(id)arg1 nascentOk:(_Bool)arg2;	// IMP=0x000000010000aa54
- (void)addNode:(id)arg1 withLock:(_Bool)arg2;	// IMP=0x000000010000a838
- (unsigned long long)nextFileHandle;	// IMP=0x000000010000a820
- (void)performSharedMemFS:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a6c0
- (void)performExclusiveMemFS:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a560
- (id)initWithRootPath:(id)arg1;	// IMP=0x000000010000a430

@end

