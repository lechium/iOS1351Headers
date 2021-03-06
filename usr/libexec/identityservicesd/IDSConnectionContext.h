//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDeviceConnectionInfo, IDSGenericConnection;

@interface IDSConnectionContext : NSObject
{
    CDUnknownBlockType _readHandler;	// 8 = 0x8
    IDSGenericConnection *_connection;	// 16 = 0x10
    IDSDeviceConnectionInfo *_deviceConnectionInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001004ef4f0
@property(retain, nonatomic) IDSDeviceConnectionInfo *deviceConnectionInfo; // @synthesize deviceConnectionInfo=_deviceConnectionInfo;
@property(retain, nonatomic) IDSGenericConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
- (id)initWithReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001004ef12c

@end

