//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCM_BTConnection : NSObject
{
    NSString *mAddress;	// 8 = 0x8
    unsigned long long mConnectedServices;	// 16 = 0x10
    unsigned long long mDeviceType;	// 24 = 0x18
    unsigned char mRole;	// 32 = 0x20
    unsigned char mMode;	// 33 = 0x21
    unsigned short mConnTO;	// 34 = 0x22
    unsigned short mConnInterval;	// 36 = 0x24
    unsigned short mLatency;	// 38 = 0x26
    unsigned short mConnectedServicesCount;	// 40 = 0x28
}

- (unsigned long long)getServiceCount;	// IMP=0x000000010006573c
- (unsigned long long)getServices;	// IMP=0x0000000100065720
- (unsigned long long)getMode;	// IMP=0x0000000100065700
- (unsigned long long)getRole;	// IMP=0x00000001000656e0
- (unsigned long long)getDeviceType;	// IMP=0x00000001000656c4
- (id)getAddress;	// IMP=0x00000001000656a8
- (void)manageServiceDisconnection;	// IMP=0x0000000100065680
- (void)manageServiceConnection;	// IMP=0x0000000100065658
- (void)updateConnectionInfo:(id)arg1;	// IMP=0x0000000100065560
- (id)description;	// IMP=0x00000001000654a0
- (void)dealloc;	// IMP=0x00000001000653fc
- (void)initWithAddress:(id)arg1;	// IMP=0x0000000100065364
- (id)init;	// IMP=0x00000001000652c0

@end

