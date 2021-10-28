/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, HMFUnfairLock, HMFClassRegistry, NSArray, NSString;

@interface HMFPreferences : HMFObject <HMFObject> {

	NSMutableDictionary* _preferences;
	HMFUnfairLock* _lock;
	HMFClassRegistry* _classRegistry;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                              //@synthesize lock=_lock - In the implementation block
@property (readonly) HMFClassRegistry * classRegistry;                            //@synthesize classRegistry=_classRegistry - In the implementation block
@property (copy,readonly) NSArray * preferences; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)sharedPreferences;
+(id)classRegistry;
+(id)defaultValues;
+(Class)preferenceClassForPreferenceKey:(id)arg1 ;
+(id)defaultValueForPreferenceKey:(id)arg1 ;
+(void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2 ;
+(void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)init;
-(HMFUnfairLock *)lock;
-(NSArray *)preferences;
-(NSString *)propertyDescription;
-(HMFClassRegistry *)classRegistry;
-(Class)preferenceClassForPreferenceKey:(id)arg1 ;
-(void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2 ;
-(id)preferenceForKey:(id)arg1 ;
@end
