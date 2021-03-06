/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CNContactProperty, NSDictionary;

@interface CNUIUserActionItem : NSObject {

	NSString* _type;
	NSString* _bundleIdentifier;
	CNContactProperty* _contactProperty;
	NSString* _label;
	long long _group;
	unsigned long long _options;
	NSString* _teamIdentifier;
	NSDictionary* _associatedRecentContactMetadata;

}

@property (nonatomic,retain) NSString * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long group;                                                  //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                                            //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * associatedRecentContactMetadata;              //@synthesize associatedRecentContactMetadata=_associatedRecentContactMetadata - In the implementation block
@property (nonatomic,readonly) NSString * type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * targetHandle; 
@property (nonatomic,readonly) NSString * sanitizedTargetHandle; 
@property (nonatomic,readonly) CNContactProperty * contactProperty;                              //@synthesize contactProperty=_contactProperty - In the implementation block
@property (nonatomic,readonly) BOOL shouldGroupByBundleIdentifier; 
@property (nonatomic,readonly) BOOL shouldCurateIfPerformed; 
@property (nonatomic,readonly) BOOL isSuggested; 
+(id)workspace;
+(id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 isSuggested:(BOOL)arg5 ;
+(id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(BOOL)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
+(id)payItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 ;
+(id)emailItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 ;
+(id)textItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)textItemWithLabel:(id)arg1 targetPhoneNumber:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)ttyItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 ;
+(id)ttyRelayItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 ;
+(id)_voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
+(id)payItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 ;
+(id)emailItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 ;
+(id)textItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
+(id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 isSuggested:(BOOL)arg5 ;
+(id)_voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 dialRequest:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
+(id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
+(id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 dialRequest:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
+(id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3 callProviderManager:(id)arg4 ;
+(id)thirdPartyCallActionItemForHandle:(id)arg1 contactProperty:(id)arg2 actionType:(id)arg3 bundleIdentifier:(id)arg4 callProviderManager:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)options;
-(NSString *)type;
-(NSString *)bundleIdentifier;
-(id)url;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(long long)group;
-(CNContactProperty *)contactProperty;
-(NSString *)teamIdentifier;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(BOOL)isSuggested;
-(id)performActionWithContext:(id)arg1 ;
-(BOOL)shouldGroupByBundleIdentifier;
-(NSString *)targetHandle;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 group:(long long)arg4 options:(unsigned long long)arg5 ;
-(BOOL)shouldCurateIfPerformed;
-(BOOL)shouldUseLabelForQuickActionButtonTitle;
-(NSDictionary *)associatedRecentContactMetadata;
-(NSString *)sanitizedTargetHandle;
-(BOOL)isHandledByFirstPartyApp;
-(BOOL)shouldUseApplicationNameForLabel;
-(void)associateWithRecentContactMetadata:(id)arg1 ;
-(id)initWithItem:(id)arg1 contactProperty:(id)arg2 ;
@end

