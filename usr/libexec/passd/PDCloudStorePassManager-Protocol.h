//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, PKCatalog, PKPass;

@protocol PDCloudStorePassManager
- (void)deleteCardWithUniqueID:(NSString *)arg1 forReason:(unsigned long long)arg2 withDiagnosticReason:(NSString *)arg3;
- (void)writeCatalogOfRecord:(PKCatalog *)arg1 source:(long long)arg2;
- (_Bool)writeCard:(PKPass *)arg1 source:(long long)arg2 error:(id *)arg3;
- (PKCatalog *)catalogOfRecord;
@end
