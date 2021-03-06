/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/ASKClientExports.h>

@class NSString, ACAccount;

@interface ASKClient : NSObject <ASKClientExports> {

	ACAccount* _activeiTunesAccount;

}

@property (retain) ACAccount * activeiTunesAccount;                                    //@synthesize activeiTunesAccount=_activeiTunesAccount - In the implementation block
@property (readonly) CGSize screenSize; 
@property (readonly) double screenCornerRadius; 
@property (copy,readonly) NSString * guid; 
@property (copy,readonly) NSString * thinnedApplicationVariantIdentifier; 
@property (readonly) BOOL newPaymentMethodEnabled; 
@property (copy,readonly) NSString * storefrontIdentifier; 
@property (readonly) NSString * deviceType; 
@property (readonly) NSString * buildType; 
@property (readonly) BOOL isActivityAvailable; 
@property (readonly) BOOL isElectrocardiogramInstallationAllowed; 
@property (readonly) BOOL isSidepackingEnabled; 
@property (readonly) BOOL supportsHEIF; 
@property (copy,readonly) NSString * activePairedWatchSystemVersion; 
-(id)init;
-(void)dealloc;
-(NSString *)deviceType;
-(BOOL)isActivityAvailable;
-(NSString *)guid;
-(CGSize)screenSize;
-(NSString *)storefrontIdentifier;
-(NSString *)thinnedApplicationVariantIdentifier;
-(void)accountStoreDidChange:(id)arg1 ;
-(NSString *)buildType;
-(ACAccount *)activeiTunesAccount;
-(double)screenCornerRadius;
-(void)setActiveiTunesAccount:(ACAccount *)arg1 ;
-(BOOL)deviceHasCapabilities:(id)arg1 ;
-(BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
-(id)isPairedSystemVersionAtLeast:(id)arg1 ;
-(BOOL)newPaymentMethodEnabled;
-(BOOL)isElectrocardiogramInstallationAllowed;
-(BOOL)isSidepackingEnabled;
-(BOOL)supportsHEIF;
-(NSString *)activePairedWatchSystemVersion;
@end

