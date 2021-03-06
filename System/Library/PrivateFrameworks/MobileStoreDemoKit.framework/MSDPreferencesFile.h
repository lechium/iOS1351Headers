/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject {

	NSMutableDictionary* _cache;

}

@property (retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
+(id)preferencesFileUrl;
+(id)preferencesFilePath;
+(BOOL)preferencesFileExists;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(BOOL)removeObjectForKey:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)removeObjectsForKeys:(id)arg1 ;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(void)populateCache;
-(void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1 ;
-(BOOL)saveCache;
@end

