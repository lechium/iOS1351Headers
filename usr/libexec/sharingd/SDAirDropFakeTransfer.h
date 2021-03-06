//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;
@protocol SDAirDropAlertManager;

__attribute__((visibility("hidden")))
@interface SDAirDropFakeTransfer : NSObject
{
    NSBundle *_bundle;	// 8 = 0x8
    _Bool _debugModeEnabled;	// 16 = 0x10
    NSObject<SDAirDropAlertManager> *_transferManager;	// 24 = 0x18
}

+ (id)sharedFakeTransfer;	// IMP=0x00000001000f7a08
- (void).cxx_destruct;	// IMP=0x00000001000fa23c
@property(nonatomic) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(retain, nonatomic) NSObject<SDAirDropAlertManager> *transferManager; // @synthesize transferManager=_transferManager;
- (void)replaceItemsWithItems:(id)arg1 inFakeTransferData:(id)arg2;	// IMP=0x00000001000fa1d4
- (void)addProgressPropertiesWithBytesCopied:(long long)arg1 totalBytes:(long long)arg2 timeRemaining:(long long)arg3 filesCopied:(long long)arg4 toFakeTransferData:(id)arg5;	// IMP=0x00000001000fa048
- (void)addIconPropertiesWithImage:(struct CGImage *)arg1 toFakeTransferData:(id)arg2;	// IMP=0x00000001000fa02c
- (id)generateFakeTransferDataFromBundleID:(id)arg1 files:(id)arg2 items:(id)arg3 itemsDescription:(id)arg4;	// IMP=0x00000001000f9c6c
- (CDUnknownBlockType)createBlockToPerformBlockOnMainQueue:(CDUnknownBlockType)arg1 withDelay:(float)arg2;	// IMP=0x00000001000f9aa0
- (id)writeDataToFile:(id)arg1 ofType:(id)arg2;	// IMP=0x00000001000f98fc
- (void)startFakeTransferWithItems:(id)arg1 fromBundleID:(id)arg2 withItemsDescription:(id)arg3 previewImage:(id)arg4 desiredDuration:(float)arg5 totalBytes:(long long)arg6;	// IMP=0x00000001000f8ac4
- (void)startFakeTransferWithItemSources:(id)arg1;	// IMP=0x00000001000f891c
- (void)startFakeTransferInCategory:(long long)arg1 ofType:(long long)arg2;	// IMP=0x00000001000f83c0
- (id)init;	// IMP=0x00000001000f7aac

@end

