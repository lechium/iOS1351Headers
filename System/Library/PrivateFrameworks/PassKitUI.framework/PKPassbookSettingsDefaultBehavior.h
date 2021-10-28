/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPassbookSettingsDataSource.h>

@class PKPassLibraryDefaultDataProvider, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults, PKPassbookPeerPaymentSettingsDefaultBehavior, NSString;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {

	PKPassLibraryDefaultDataProvider* _passLibraryDataProvider;
	PKPaymentDefaultDataProvider* _paymentDataProvider;
	PKPaymentOptionsDefaults* _options;
	PKPassbookPeerPaymentSettingsDefaultBehavior* _peerPaymentDefaultBehavior;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)deviceName;
-(BOOL)supportsCredentialType:(long long)arg1 ;
-(id)secureElementID;
-(BOOL)secureElementIsProductionSigned;
-(id)setupDelegate;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)peerPaymentDelegate;
-(id)peerPaymentDataSource;
-(id)optionsDelegate;
-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)hasFelicaSecureElement;
-(BOOL)deviceSupportsInAppPayments;
@end
