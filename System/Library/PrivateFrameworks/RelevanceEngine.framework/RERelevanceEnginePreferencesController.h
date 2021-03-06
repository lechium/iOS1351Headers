/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/RERelevanceEnginePreferencesDelegate.h>

@protocol OS_dispatch_queue;
@class NSMapTable, RERelevanceEnginePreferences, NSObject, NSString;

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate> {

	NSMapTable* _preferences;
	RERelevanceEnginePreferences* _effectivePreferences;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) RERelevanceEnginePreferences * effectivePreferences; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(RERelevanceEnginePreferences *)effectivePreferences;
-(void)setPreferences:(id)arg1 forObject:(id)arg2 ;
-(void)removePreferencesForObject:(id)arg1 ;
-(void)relevanceEnginePreferencesDidUpdate:(id)arg1 ;
-(void)_resetEffectivePreferences;
@end

