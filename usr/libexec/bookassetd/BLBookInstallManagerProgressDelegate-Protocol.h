//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLBookInstallManager, BLBookInstallOperation, BLDownload, NSString, SSOperationProgress;

@protocol BLBookInstallManagerProgressDelegate <NSObject>
- (void)installManager:(BLBookInstallManager *)arg1 didFinishInstallForOperation:(BLBookInstallOperation *)arg2;
- (void)installManager:(BLBookInstallManager *)arg1 updatedProgress:(SSOperationProgress *)arg2 forInstallOperation:(BLBookInstallOperation *)arg3;
- (void)installManager:(BLBookInstallManager *)arg1 didStartInstallWithOperation:(BLBookInstallOperation *)arg2 forDownloadID:(NSString *)arg3;
- (void)installManager:(BLBookInstallManager *)arg1 willRestartInstallForDownload:(BLDownload *)arg2;
@end
