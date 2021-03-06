//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsSuggestionsSourceProxy-Protocol.h"

@class MapsSuggestionsDestinationGraph, MapsSuggestionsSourceWrapper, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsSourcesXPCPeer : NSObject <MapsSuggestionsSourceProxy>
{
    MapsSuggestionsSourceWrapper *_wrapper;	// 8 = 0x8
    MapsSuggestionsDestinationGraph *_graph;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002abe8
@property(readonly, retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010002a9b4
- (void)updateGraphWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100029fa0
- (void)_stopMonitoring;	// IMP=0x0000000100029e3c
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;	// IMP=0x0000000100029b60
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;	// IMP=0x0000000100029884
- (void)feedbackForEntryData:(id)arg1 action:(long long)arg2;	// IMP=0x00000001000295a8
- (void)removeEntryData:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002920c
- (void)forceEarlyUpdateForType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028e90
- (void)stopMonitoringWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028c6c
- (void)startMonitoringWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028834
- (id)initWithXPCConnection:(id)arg1 sourceWrapper:(id)arg2 graph:(id)arg3;	// IMP=0x0000000100028674

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

