//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SKProductPageRemoteViewController;

@protocol SKProductPageRemoteViewControllerDelegate <NSObject>
- (void)productPageRemoteViewControllerLoadDidFinish:(SKProductPageRemoteViewController *)arg1;
- (void)productPageRemoteViewController:(SKProductPageRemoteViewController *)arg1 finishWithResult:(unsigned long long)arg2 completion:(void (^)(void))arg3;

@optional
- (void)productPageRemoteViewControllerTerminatedWithError:(NSError *)arg1;
@end
