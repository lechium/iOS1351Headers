/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNReputationLogger : NSObject
+(id)queryLog;
+(id)obfuscateHandle:(id)arg1 ;
+(id)describeScore:(long long)arg1 ;
+(id)obfuscate:(id)arg1 ;
+(id)performanceLog;
-(void)timeToResolve:(double)arg1 ;
-(void)beginQueryForHandle:(id)arg1 ;
-(void)queryForHandle:(id)arg1 didFinishWithReputation:(id)arg2 ;
-(void)queryForHandle:(id)arg1 didFailWithError:(id)arg2 ;
-(void)couldNotQueryCoreRecentsWithError:(id)arg1 ;
-(void)coreRecentsConfirmedTrust;
-(void)coreRecentsCouldNotConfirmTrust;
-(void)couldNotQueryContactsForEmailAddressWithError:(id)arg1 ;
-(void)contactsConfirmedTrustOfEmailAddress;
-(void)contactsCouldNotConfirmTrustOfEmailAddress;
-(void)couldNotQueryContactsForPhoneNumberWithError:(id)arg1 ;
-(void)contactsConfirmedTrustOfPhoneNumber;
-(void)contactsCouldNotConfirmTrustOfPhoneNumber;
-(void)reputationUnestablished;
@end

