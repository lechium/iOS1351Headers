/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/WeatherPreferencesPersistence.h>

@class NSMutableDictionary, NSString;

@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence> {

	BOOL _synchronizeWasCalled;
	NSMutableDictionary* _inMemoryStore;

}

@property (retain) NSMutableDictionary * inMemoryStore;              //@synthesize inMemoryStore=_inMemoryStore - In the implementation block
@property (readonly) BOOL synchronizeWasCalled;                      //@synthesize synchronizeWasCalled=_synchronizeWasCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setInMemoryStore:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)inMemoryStore;
-(BOOL)synchronizeWasCalled;
@end
