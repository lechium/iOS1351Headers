/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFLock : NSLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)lock;
-(void)unlock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(BOOL)isLockedByMe;
@end

