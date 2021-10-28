/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMBModelProperties
@required
+(BOOL)hmbShouldLogPrivateInformation;
+(void)setHmbShouldLogPrivateInformation:(BOOL)arg1;
-(id)hmbPropertyNamed:(id)arg1;
-(void)hmbSetProperty:(id)arg1 named:(id)arg2;
-(BOOL)hmbPropertyWasSet:(id)arg1;
-(BOOL)hmbPropertyIsReadOnly:(id)arg1;
-(id)hmbPropertyNamed:(id)arg1 isSet:(BOOL*)arg2;
-(void)hmbUnsetPropertyNamed:(id)arg1;
-(id)hmbDefaultValueForPropertyNamed:(id)arg1;
-(BOOL)hmbPropertyIsAvailable:(id)arg1;

@end
