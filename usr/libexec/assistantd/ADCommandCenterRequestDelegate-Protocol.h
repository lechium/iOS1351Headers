//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AceObject, NSError;
@protocol SAAceCommand;

@protocol ADCommandCenterRequestDelegate <NSObject>
- (void)adRequestEncounteredIntermediateError:(NSError *)arg1;
- (void)adRequestDidCompleteWithSuccess:(_Bool)arg1 error:(NSError *)arg2;
- (void)adRequestDidReceiveCommand:(AceObject<SAAceCommand> *)arg1 reply:(void (^)(AceObject<SAAceCommand> *, NSError *))arg2;
- (void)adRequestWillReceiveCommand:(AceObject<SAAceCommand> *)arg1;
@end
