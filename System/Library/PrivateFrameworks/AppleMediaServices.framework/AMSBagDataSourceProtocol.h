/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSString;


@protocol AMSBagDataSourceProtocol <NSObject>
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy) id dataSourceChangedHandler; 
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler; 
@optional
-(void)setDataSourceChangedHandler:(/*^block*/id)arg1;
-(void)setDataSourceDataInvalidatedHandler:(/*^block*/id)arg1;
-(id)dataSourceChangedHandler;
-(id)dataSourceDataInvalidatedHandler;

@required
-(BOOL)isLoaded;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(void)loadWithCompletion:(/*^block*/id)arg1;
-(NSString *)profileVersion;
-(id)bagKeyInfoForKey:(id)arg1;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2;

@end

