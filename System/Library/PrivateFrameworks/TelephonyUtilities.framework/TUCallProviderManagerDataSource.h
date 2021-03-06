/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol TUCallProviderManagerDataSource <NSObject>
@property (nonatomic,readonly) BOOL currentProcessCanAccessInitialState; 
@property (nonatomic,copy,readonly) NSDictionary * providersByIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * localProvidersByIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * pairedHostDeviceProvidersByIdentifier; 
@property (assign,nonatomic,__weak) id<TUCallProviderManagerDataSourceDelegate> delegate; 
@required
-(void)invalidate;
-(id<TUCallProviderManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg1;
-(BOOL)openURL:(id)arg1 isSensitive:(BOOL)arg2 error:(id*)arg3;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)blockUntilInitialStateReceived;
-(BOOL)currentProcessCanAccessInitialState;
-(NSDictionary *)providersByIdentifier;
-(NSDictionary *)localProvidersByIdentifier;
-(NSDictionary *)pairedHostDeviceProvidersByIdentifier;

@end

