/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MFMailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject {

	NSString* _url;
	long long _mailboxRowid;
	MFMailMessageLibrary* _library;

}
-(void)_loadMailboxRowidIfNecessary:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 URLString:(id)arg2 ;
-(id)knownMessageIDsFromSet:(id)arg1 ;
-(id)messageIDsAddedBeforeDate:(double)arg1 ;
-(void)deleteUIDsNotInArray:(id)arg1 ;
-(unsigned)numberOfMessageIDs;
-(void)deleteAllUIDs;
-(unsigned long long)flagsForUID:(id)arg1 ;
@end

