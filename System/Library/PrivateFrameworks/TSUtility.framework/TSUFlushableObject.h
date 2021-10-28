/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUFlushable.h>

@protocol NSLocking;
@class TSUFlushingManager, NSObject, NSString;

@interface TSUFlushableObject : NSObject <TSUFlushable> {

	int _retainCount;
	int _ownerCount;
	TSUFlushingManager* _flushingManager;
	NSObject*<NSLocking> _flushingManagerIvarLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(void)unload;
-(void)flush;
-(id)ownerAutoreleasedAccess;
-(BOOL)hasFlushableContent;
-(void)addOwner;
-(void)ownerWillAccess;
-(void)ownerDidAccess;
-(id)ownerRetain;
-(void)ownerRelease;
@end
