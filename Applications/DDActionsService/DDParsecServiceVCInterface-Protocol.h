//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DDScannerResult, NSDictionary, NSString;

@protocol DDParsecServiceVCInterface
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)setDDViewScale:(double)arg1;
- (void)setDDViewStyle:(long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setSheetMode:(_Bool)arg1;
- (void)setPreviewMode:(_Bool)arg1;
- (void)startQueryWithResult:(DDScannerResult *)arg1 context:(NSDictionary *)arg2;
- (void)startQueryWithString:(NSString *)arg1 range:(struct _NSRange)arg2;
@end
