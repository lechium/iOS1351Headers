//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NWPathEvaluator;

@interface DataConnectionAgentInterfaceObserver : NSObject
{
    NWPathEvaluator *fPathEvaluator;	// 8 = 0x8
    NWPathEvaluator *fAgentEvaluator;	// 16 = 0x10
    struct DataConnectionAgentInterfaceAvailabilityObserver *fAvailabilityObserver;	// 24 = 0x18
    basic_string_90719d97 fDomain;	// 32 = 0x20
    basic_string_90719d97 fAgentType;	// 56 = 0x38
    Class fAgentClass;	// 80 = 0x50
    _Bool fPathAvailable;	// 88 = 0x58
    _Bool fAgentAvailable;	// 89 = 0x59
    basic_string_90719d97 fUuid;	// 96 = 0x60
    queue_9c98cea5 fQueue;	// 120 = 0x78
    shared_ptr_b36635fa fLogger;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x00000001005e8b38
- (void).cxx_destruct;	// IMP=0x00000001005e8ac4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001005e8740
- (void)dealloc;	// IMP=0x00000001005e867c
- (void)doUpdateInterface:(basic_string_90719d97)arg1 plainParameters:(id)arg2 domainParameters:(id)arg3;	// IMP=0x00000001005e7e44
- (void)doUpdateUUID:(basic_string_90719d97)arg1;	// IMP=0x00000001005e7e38
- (id)initWithAvailabilityObserver:(struct DataConnectionAgentInterfaceAvailabilityObserver *)arg1 domain:(id)arg2 agentType:(id)arg3 agentClass:(Class)arg4 logName:(const char *)arg5 uuid:(basic_string_90719d97)arg6 queue:(const struct queue *)arg7 registry:(shared_ptr_0fd4464b)arg8;	// IMP=0x00000001005e7a8c
- (basic_string_90719d97)agentType;	// IMP=0x00000001005e7a80

@end
