//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountAssistanceProgramMessage : SQLiteEntity
{
}

+ (id)_propertySettersForAssistanceProgramMessage;	// IMP=0x00000001001a574c
+ (id)databaseTable;	// IMP=0x00000001001a5740
+ (void)deleteAssistanceProgramMessagePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001a56a0
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x00000001001a562c
+ (id)insertAssistanceProgramMessage:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001a52a0
+ (id)assistanceProgramMessagesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001a5060
- (id)assistanceProgramMessage;	// IMP=0x00000001001a54f4

@end
