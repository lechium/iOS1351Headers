//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSPersistentContainer.h>

@interface DMDConfigurationDatabase : NSPersistentContainer
{
}

+ (id)_newDatabaseWithURL:(id)arg1;	// IMP=0x000000010002b0cc
+ (id)newUserDatabase;	// IMP=0x000000010002b06c
+ (id)descriptionForSQLiteStoreWithDatabaseURL:(id)arg1;	// IMP=0x000000010002affc
+ (id)managedObjectModel;	// IMP=0x000000010002ad1c
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b248
- (id)init;	// IMP=0x000000010002b1c0
- (id)description;	// IMP=0x000000010002ae1c

@end
