/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RTPersistenceExpirationEnforcer : NSObject
-(id)init;
-(id)collectRecordIDsByTypeExpiredBeforeDate:(id)arg1 ownedByThisDevice:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeRecordsOwnedByOtherDevicesExpiredBeforeDate:(id)arg1 allowPropagation:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeExpiredRecordsBeforeDate:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)entitiesWithDeviceAndExpirationProperty:(id)arg1 ownedByThisDevice:(BOOL)arg2 ;
-(BOOL)removeExpiredRecordsWithObjectIDs:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)repairInvalidExpirationDatesWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeRecordsOwnedByThisDeviceExpiredBeforeDate:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
@end

