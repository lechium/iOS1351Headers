/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SUNetworkObserver <NSObject>
@optional
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
-(void)cellularRoamingStatusChanged:(BOOL)arg1;
-(void)carrierBundleChanged;
-(void)operatorBundleChanged;

@end

