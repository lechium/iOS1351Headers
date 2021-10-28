//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface PromotedIAPDatabase : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x00000001001e1f6c
+ (void)_createDatabaseDirectory;	// IMP=0x00000001001e1e34
- (void).cxx_destruct;	// IMP=0x00000001001e208c
- (void)removeOverridesForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e1970
- (void)setOrderForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e1154
- (void)getOrderForIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e0d0c
- (void)setVisibility:(long long)arg1 forIAP:(id)arg2 app:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001e04f8
- (void)getVisibilityForAllIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e0064
- (void)getVisibilityForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001df984
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001df878
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001df7cc
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001df6bc
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00000001001df458
- (id)init;	// IMP=0x00000001001df3b8

@end
