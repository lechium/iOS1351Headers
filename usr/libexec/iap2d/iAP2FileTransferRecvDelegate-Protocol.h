//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, iAP2FileTransferRecv;

@protocol iAP2FileTransferRecvDelegate
- (_Bool)fileTransferRecv:(iAP2FileTransferRecv *)arg1 didFinish:(_Bool)arg2;
- (_Bool)fileTransferRecv:(iAP2FileTransferRecv *)arg1 didGetBuff:(NSData *)arg2 soFar:(unsigned long long)arg3 outOf:(unsigned long long)arg4;

@optional
- (_Bool)fileTransferRecvDidTimeout:(iAP2FileTransferRecv *)arg1;
@end
