/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WAUtil : NSObject
+(unsigned long long)getAWDTimestamp;
+(id)deviceName;
+(id)_getBasePersistenceKeychainQuery;
+(id)getObscureKey;
+(id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)arg1 ;
+(id)unobscureModelData:(id)arg1 forModelkey:(id)arg2 ;
+(id)rotateUUIDsForMessage:(id)arg1 ;
+(id)getCopyOfMessage:(id)arg1 withNumericalValuesSubstractedByValuesInMessage:(id)arg2 ;
+(id)rotateObscureKey;
+(BOOL)storeToken:(id)arg1 withIdentifier:(id)arg2 ;
+(id)getTokenForIdentifier:(id)arg1 ;
+(id)getMessageInstanceForKey:(id)arg1 andGroupType:(long long)arg2 ;
+(id)groupTypeToString:(long long)arg1 ;
+(id)groupTypeToAWDComponentID;
+(id)trimTokenForLogging:(id)arg1 ;
+(id)getValueForEntitlementForCurrentProcess:(id)arg1 ;
+(id)_generateInvocationForMethod:(void*)arg1 ;
@end

