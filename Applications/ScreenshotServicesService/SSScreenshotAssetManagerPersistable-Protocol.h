//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString;

@protocol SSScreenshotAssetManagerPersistable
@property(readonly, nonatomic) unsigned long long saveLocation;
@property(readonly, nonatomic) NSData *imageModificationData;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *filename;
- (void)savePDFWithBlock:(void (^)(NSData *))arg1;
- (void)removePDF;
- (void)requestImageWithBlock:(void (^)(UIImage *))arg1;
@end

