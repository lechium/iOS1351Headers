/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSCache;


@protocol IMAssistantMessageHandlerDataSource <NSObject>
@property (nonatomic,readonly) id<IMAssistantContactsDataSource> contactsDataSource; 
@property (nonatomic,readonly) id<IMAssistantChatDataSource> chatDataSource; 
@property (nonatomic,readonly) id<IMAssistantAccountDataSource> accountDataSource; 
@property (nonatomic,readonly) id<IMAssistantCoreTelephonySubscriptionsDataSource> coreTelephonySubscriptionsDataSource; 
@property (nonatomic,readonly) id<IMLocationManager> locationManagerDataSource; 
@property (nonatomic,readonly) NSCache * handleToContactIdentifierCache; 
@property (nonatomic,readonly) NSCache * spiHandleToPersonCache; 
@property (nonatomic,readonly) NSCache * contactIdentifierToUnifiedContactIdentifierCache; 
@property (nonatomic,readonly) BOOL isInternationalSpamFilteringEnabled; 
@required
-(BOOL)isInternationalSpamFilteringEnabled;
-(id<IMAssistantContactsDataSource>)contactsDataSource;
-(id<IMLocationManager>)locationManagerDataSource;
-(id<IMAssistantChatDataSource>)chatDataSource;
-(id<IMAssistantAccountDataSource>)accountDataSource;
-(id<IMAssistantCoreTelephonySubscriptionsDataSource>)coreTelephonySubscriptionsDataSource;
-(BOOL)screentimeAllowedToShowChat:(id)arg1;
-(BOOL)screentimeAllowedToShowConversationWithHandleIDs:(id)arg1;
-(NSCache *)contactIdentifierToUnifiedContactIdentifierCache;
-(NSCache *)handleToContactIdentifierCache;
-(NSCache *)spiHandleToPersonCache;

@end

