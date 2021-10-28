/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol INIntentSlotDescriptionExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long tag; 
@property (nonatomic,copy,readonly) NSString * facadePropertyName; 
@property (nonatomic,copy,readonly) NSString * dataPropertyName; 
@property (nonatomic,readonly) long long valueType; 
@property (nonatomic,readonly) long long valueStyle; 
@property (nonatomic,readonly) BOOL isExtended; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,readonly) SEL resolveSelector; 
@property (nonatomic,readonly) SEL deprecatedResolveSelector; 
@property (nonatomic,copy,readonly) NSArray * resolveSelectorStrings; 
@required
-(id)init;
-(NSString *)name;
-(unsigned long long)tag;
-(long long)valueType;
-(BOOL)isExtended;
-(BOOL)isPrivate;
-(NSString *)facadePropertyName;
-(NSString *)dataPropertyName;
-(long long)valueStyle;
-(SEL)resolveSelector;
-(SEL)deprecatedResolveSelector;
-(NSArray *)resolveSelectorStrings;

@end
