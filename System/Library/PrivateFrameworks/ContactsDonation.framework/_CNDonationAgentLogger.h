/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNDonationAgentLogger.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger> {

	NSObject*<OS_os_log> _log_t;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log_t;              //@synthesize log_t=_log_t - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_os_log>)log_t;
-(void)agentWillStart;
-(void)agentDidStart;
-(void)agentWillStop;
-(void)donationServiceWillStart;
-(void)donationServiceDidStart;
-(void)donationServiceWillStop;
-(void)maintenanceServiceWillStart;
-(void)maintenanceServiceDidStart;
-(void)maintenanceServiceWillStop;
-(void)beginRestorePersistedState;
-(void)endRestorePersistedState;
-(void)acceptingConnectionFromProcess:(int)arg1 ;
-(void)denyingRequestFromProcess:(int)arg1 ;
-(void)acceptingDonations:(id)arg1 ;
-(void)preExpiredDonations:(id)arg1 ;
-(void)agentWillHandleRequest:(SEL)arg1 ;
-(void)agentDidHandleRequest:(SEL)arg1 ;
-(void)featureNotEnabled:(SEL)arg1 ;
-(void)featureWillDisable;
-(void)featureDidDisable;
-(void)featureWillEnable;
-(void)featureDidEnable;
-(void)contactsChangedNotificationFoundName:(BOOL)arg1 nameChanged:(BOOL)arg2 ;
-(void)contactsChangedNotificationEmailAddressesChanged:(BOOL)arg1 ;
-(void)willDiscoverExtensions;
-(void)didDiscoverExtension:(id)arg1 ;
-(void)didDiscoverUnexpectedExtensionType:(id)arg1 ;
-(void)didDiscoverExtensions;
-(void)didFailToDiscoverExtensions:(id)arg1 ;
-(void)willLoadExtensionVersions;
-(void)willSaveExtensionVersions;
-(void)willRejectDonationIdentifier:(id)arg1 ;
-(void)didRejectDonationIdentifier:(id)arg1 ;
-(void)couldNotRejectUnknownDonationIdentifier:(id)arg1 ;
-(void)couldNotRejectDonationIdentifier:(id)arg1 error:(id)arg2 ;
-(void)willRejectClusterIdentifier:(id)arg1 ;
-(void)didRejectClusterIdentifier:(id)arg1 ;
-(void)couldNotRejectUnknownClusterIdentifier:(id)arg1 ;
-(void)couldNotRejectClusterIdentifier:(id)arg1 error:(id)arg2 ;
-(void)willListRejections;
-(void)didListRejections;
-(void)willRemoveAllRejections;
-(void)didRemoveAllRejections;
-(void)willRenewValues:(id)arg1 withDonor:(id)arg2 ;
-(void)didRenewValue:(id)arg1 untilDate:(id)arg2 ;
-(void)couldNotRenewBecauseNotADonorExtension:(id)arg1 ;
-(void)couldNotRenewBecauseDonorError:(id)arg1 ;
-(void)couldNotRenewBecauseLoadingError:(id)arg1 ;
@end

