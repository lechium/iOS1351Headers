/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Celestial/Celestial-Structs.h>
@class NSMutableDictionary;

@interface BWSimpleCache : NSObject {

	NSMutableDictionary* _cache;
	OpaqueFigSimpleMutexRef _propertyMutex;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyAndClearObjectForKey:(id)arg1 ;
@end

