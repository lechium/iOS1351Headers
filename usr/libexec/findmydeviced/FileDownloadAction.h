//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"

@class FMDAssetRegistry, FMDServerInteractionController, FMFileDownloadRequest, NSString;
@protocol FMDAsset;

@interface FileDownloadAction : NSObject <Action>
{
    id <FMDAsset> _asset;	// 8 = 0x8
    FMDServerInteractionController *_serverInteractionController;	// 16 = 0x10
    FMDAssetRegistry *_assetRegistry;	// 24 = 0x18
    FMFileDownloadRequest *_request;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100028df8
@property(retain, nonatomic) FMFileDownloadRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) FMDAssetRegistry *assetRegistry; // @synthesize assetRegistry=_assetRegistry;
@property(nonatomic) __weak FMDServerInteractionController *serverInteractionController; // @synthesize serverInteractionController=_serverInteractionController;
@property(retain, nonatomic) id <FMDAsset> asset; // @synthesize asset=_asset;
- (_Bool)shouldCancelAction:(id)arg1;	// IMP=0x0000000100028c4c
- (_Bool)shouldWaitForAction:(id)arg1;	// IMP=0x0000000100028c44
- (void)willCancelAction;	// IMP=0x0000000100028bd4
- (void)_saveAsset:(id)arg1 fromLocation:(id)arg2;	// IMP=0x0000000100028b1c
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028538
- (id)actionType;	// IMP=0x000000010002852c
- (id)initWithAsset:(id)arg1 serverInteractionController:(id)arg2 assetRegistry:(id)arg3;	// IMP=0x0000000100028458

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
