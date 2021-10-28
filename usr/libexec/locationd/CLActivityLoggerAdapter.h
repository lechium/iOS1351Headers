//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLActivityLoggerProtocol-Protocol.h"

@class NSString;

@interface CLActivityLoggerAdapter : CLIntersiloService <CLActivityLoggerProtocol>
{
    struct CLActivityLogger *_logger;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x000000010010bc54
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010010bc30
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cbfb3c
@property(nonatomic) struct CLActivityLogger *logger; // @synthesize logger=_logger;
- (void)logData:(id)arg1;	// IMP=0x000000010010bdf4
- (void)endService;	// IMP=0x000000010010bdbc
- (void)beginService;	// IMP=0x000000010010bd10
- (id)init;	// IMP=0x000000010010bccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
