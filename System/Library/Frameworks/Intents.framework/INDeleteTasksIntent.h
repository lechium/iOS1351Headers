/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INDeleteTasksIntentExport.h>

@class INTaskList, NSArray, NSNumber, NSString;

@interface INDeleteTasksIntent : INIntent <INDeleteTasksIntentExport>

@property (nonatomic,copy,readonly) INTaskList * taskList; 
@property (nonatomic,copy,readonly) NSArray * tasks; 
@property (nonatomic,copy,readonly) NSNumber * all; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(NSNumber *)all;
-(id)_dictionaryRepresentation;
-(NSArray *)tasks;
-(void)setTasks:(NSArray *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setAll:(NSNumber *)arg1 ;
-(INTaskList *)taskList;
-(void)setTaskList:(INTaskList *)arg1 ;
-(id)initWithTaskList:(id)arg1 tasks:(id)arg2 all:(id)arg3 ;
@end
