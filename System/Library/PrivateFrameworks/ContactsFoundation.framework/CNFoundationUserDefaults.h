/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNFoundationUserDefaults.h>
@class NSDictionary;


@protocol CNFoundationUserDefaults <NSObject>
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
@required
-(id)countryCode;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1;
-(unsigned long long)sortOrder;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(BOOL)arg1;
-(unsigned long long)nameOrder;
-(void)setNameOrder:(unsigned long long)arg1;
-(unsigned long long)newContactNameOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(id)arg1;

@end


@class NSDictionary, CNUserDefaults, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults> {

	CNUserDefaults* _userDefaults;

}

@property (retain) CNUserDefaults * userDefaults;                                                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
+(id)sharedDefaults;
+(id)registeredDefaults;
+(id)makeRegisteredDefaults;
+(unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1 ;
-(id)init;
-(id)countryCode;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1 ;
-(CNUserDefaults *)userDefaults;
-(void)setUserDefaults:(CNUserDefaults *)arg1 ;
-(unsigned long long)sortOrder;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(unsigned long long)nameOrder;
-(void)setNameOrder:(unsigned long long)arg1 ;
-(unsigned long long)newContactNameOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1 ;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(NSDictionary *)arg1 ;
@end

