/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class WBSSQLiteStatement, WBSSQLiteRow;

@interface WBSSQLiteRowEnumerator : NSEnumerator {

	WBSSQLiteStatement* _statement;
	WBSSQLiteRow* _row;
	int _lastResultCode;

}

@property (nonatomic,readonly) WBSSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) int lastResultCode;                          //@synthesize lastResultCode=_lastResultCode - In the implementation block
-(id)nextObject;
-(WBSSQLiteStatement *)statement;
-(int)lastResultCode;
-(id)initWithResultsOfStatement:(id)arg1 ;
@end
