/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNEntitlementVerification <NSObject>
@required
+(BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 isFirstOrSecondPartyWithError:(id*)arg2;

@end
