/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBPresentationObservationToken.h>
#import <libobjc.A.dylib/SBNotificationBannerDestinationObserver.h>

@class SBNotificationBannerDestination, NSString;

@interface SBNotificationLongLookBannerPresentationObservationToken : SBPresentationObservationToken <SBNotificationBannerDestinationObserver> {

	SBNotificationBannerDestination* _notificationBannerDestination;

}

@property (nonatomic,readonly) SBNotificationBannerDestination * notificationBannerDestination;              //@synthesize notificationBannerDestination=_notificationBannerDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)state;
-(id)initWithNotificationBannerDestination:(id)arg1 ;
-(void)notificationBannerDestinationWillPresentLongLook:(id)arg1 ;
-(void)notificationBannerDestinationDidPresentLongLook:(id)arg1 ;
-(void)notificationBannerDestinationWillDismissLongLook:(id)arg1 ;
-(void)notificationBannerDestinationDidDismissLongLook:(id)arg1 ;
-(SBNotificationBannerDestination *)notificationBannerDestination;
@end

