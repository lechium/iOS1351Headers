//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKDataDetectorsService : NSObject
{
}

+ (void)loadStoreGamesListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100126844
+ (id)loadLocalGamesList;	// IMP=0x00000001001266e8
+ (void)clearData;	// IMP=0x00000001001266e4
+ (void)updateData;	// IMP=0x000000010012654c
+ (void)pushDataToDataDetectors:(id)arg1;	// IMP=0x0000000100126548
+ (id)dataDetectorsEntitiesForDictionary:(id)arg1;	// IMP=0x000000010012636c
+ (id)dataDetectorsKeywords;	// IMP=0x0000000100126138
+ (id)dataDetectorsStorageFilePath;	// IMP=0x0000000100125ff0

@end

