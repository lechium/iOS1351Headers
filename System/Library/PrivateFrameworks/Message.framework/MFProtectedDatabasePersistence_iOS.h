/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailDaemon/EDProtectedDatabasePersistence.h>

@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence
+(id)protectedDatabaseName;
+(id)journalDatabaseName;
-(BOOL)protectedDataAvailable;
-(void)finishJournalReconciliation:(unsigned long long)arg1 ;
-(void)addAdditionalCriteriaToCleanupActivity:(id)arg1 ;
-(BOOL)supportsJournaling;
@end

