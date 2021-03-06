//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDContentServer, MSDSignedManifest, NSMutableArray;

@interface MSDAppDataUpdater : NSObject
{
    MSDSignedManifest *_manifest;	// 8 = 0x8
    MSDContentServer *_server;	// 16 = 0x10
    NSMutableArray *_stagedContainers;	// 24 = 0x18
    NSMutableArray *_processedGroupContainer;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100033064
- (void).cxx_destruct;	// IMP=0x0000000100034f50
@property(retain, nonatomic) NSMutableArray *processedGroupContainer; // @synthesize processedGroupContainer=_processedGroupContainer;
@property(retain, nonatomic) NSMutableArray *stagedContainers; // @synthesize stagedContainers=_stagedContainers;
@property(retain, nonatomic) MSDContentServer *server; // @synthesize server=_server;
@property(retain, nonatomic) MSDSignedManifest *manifest; // @synthesize manifest=_manifest;
- (_Bool)clearDataContainer:(id)arg1 type:(id)arg2;	// IMP=0x0000000100034bd8
- (_Bool)shouldSkip:(id)arg1;	// IMP=0x0000000100034b0c
- (void)removeAllStagedContainers;	// IMP=0x00000001000349b4
- (void)addToStagingContainerList:(id)arg1;	// IMP=0x000000010003491c
- (void)resetStagingContainerList;	// IMP=0x00000001000348c8
- (_Bool)updateContainer:(id)arg1 containerType:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000010003443c
- (id)stagingPathFor:(id)arg1;	// IMP=0x000000010003428c
- (_Bool)updateAppData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100033960
- (_Bool)updateAllSystemAppData:(id *)arg1;	// IMP=0x000000010003342c
- (_Bool)updateCustomerAppData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100033174
- (id)init;	// IMP=0x00000001000330d0

@end

