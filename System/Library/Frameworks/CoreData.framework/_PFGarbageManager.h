/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {

	NSMutableDictionary* _storeLinksDirs;
	NSMutableDictionary* _filesToCleanUp;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)defaultInstance;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)_init__;
-(void)_deleteIfNecessary:(id)arg1 ;
-(void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2 ;
-(BOOL)registerURLForCleanup:(id)arg1 ;
-(id)temporaryLinksDirectoryForStore:(id)arg1 ;
-(void)doCleanupForURL:(id)arg1 ;
@end

