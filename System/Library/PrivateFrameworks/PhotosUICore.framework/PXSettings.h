/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISettings.h>

@class NSMutableSet, NSSet;

@interface PXSettings : _UISettings {

	NSMutableSet* _archivedSettings;
	NSSet* _cachedTransientProperties;
	long long _version;

}

@property (assign,nonatomic) long long version;              //@synthesize version=_version - In the implementation block
+(id)sharedInstance;
+(id)_userDefaults;
+(id)suiteName;
+(id)_defaultsKey;
+(void)setSuiteName:(id)arg1 ;
+(id)transientProperties;
+(id)_signatureDictionaryWithDefaultSettings:(id*)arg1 ;
+(id)createSharedInstance;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(void)save;
-(void)addKeyPathObserver:(id)arg1 ;
-(void)removeKeyPathObserver:(id)arg1 ;
-(id)parentSettings;
-(void)addKeyObserver:(id)arg1 ;
-(void)removeKeyObserver:(id)arg1 ;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)performPostSaveActions;
-(void)defaultValueDidChangeForKey:(id)arg1 ;
-(BOOL)_isTransientKey:(id)arg1 ;
-(void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3 ;
-(void)_validateArchivableValue:(id)arg1 forKey:(id)arg2 ;
-(void)addDeferredKeyObserver:(id)arg1 ;
-(void)addDeferredKeyPathObserver:(id)arg1 ;
@end
