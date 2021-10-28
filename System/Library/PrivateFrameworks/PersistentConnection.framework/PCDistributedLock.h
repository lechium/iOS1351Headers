/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {

	NSString* _path;
	int _fd;

}
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)initWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)tryLock;
-(BOOL)_lockBlocking:(BOOL)arg1 ;
@end
