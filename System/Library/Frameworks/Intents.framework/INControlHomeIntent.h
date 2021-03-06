/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INControlHomeIntentExport.h>

@class INHomeUserTask, NSArray, INDateComponentsRange, NSString;

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (nonatomic,copy,readonly) INHomeUserTask * userTask; 
@property (nonatomic,copy,readonly) NSArray * filters; 
@property (nonatomic,copy,readonly) INDateComponentsRange * time; 
@property (nonatomic,copy,readonly) NSArray * contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(NSArray *)contents;
-(id)_metadata;
-(INDateComponentsRange *)time;
-(NSArray *)filters;
-(void)setTime:(INDateComponentsRange *)arg1 ;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setContents:(NSArray *)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(BOOL)_hasTitle;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INHomeUserTask *)userTask;
-(void)setUserTask:(INHomeUserTask *)arg1 ;
-(id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3 ;
-(id)initWithUserTask:(id)arg1 filters:(id)arg2 ;
-(id)initWithContents:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
@end

