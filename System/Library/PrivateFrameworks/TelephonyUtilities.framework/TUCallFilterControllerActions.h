/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TUCallFilterControllerActions <NSObject>
@required
-(BOOL)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3;
-(unsigned long long)filterStatusForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3;
-(BOOL)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;

@end

