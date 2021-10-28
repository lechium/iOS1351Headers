//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSSet, NSURL;
@protocol CSDFileTransferringDelegate;

@protocol CSDFileTransferring <NSObject>
@property(nonatomic) __weak id <CSDFileTransferringDelegate> delegate;
- (void)unzipArchiveAtURL:(NSURL *)arg1 completion:(void (^)(NSURL *))arg2;
- (void)transferFileAtURL:(NSURL *)arg1 toDestinations:(NSSet *)arg2 withMetadata:(NSDictionary *)arg3;
@end
