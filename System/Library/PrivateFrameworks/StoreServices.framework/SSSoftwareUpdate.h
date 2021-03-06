/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSDate, NSString;

@interface SSSoftwareUpdate : NSObject {

	NSDictionary* _dictionary;
	NSDate* _installDate;
	long long _updateState;

}

@property (nonatomic,readonly) NSDictionary * updateDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSDate * installDate;                             //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,readonly) long long parentalControlsRank; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (assign,nonatomic) long long updateState;                          //@synthesize updateState=_updateState - In the implementation block
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSDate *)installDate;
-(void)setInstallDate:(NSDate *)arg1 ;
-(long long)updateState;
-(long long)storeItemIdentifier;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(long long)parentalControlsRank;
-(NSDictionary *)updateDictionary;
-(void)setUpdateState:(long long)arg1 ;
@end

