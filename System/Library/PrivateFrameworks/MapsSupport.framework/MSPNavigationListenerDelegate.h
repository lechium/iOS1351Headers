/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSPNavigationListenerDelegate <NSObject>
@required
-(void)navigationListenerIsReady:(id)arg1;
-(void)navigationListener:(id)arg1 didFailWithError:(id)arg2;
-(void)navigationListenerStopped:(id)arg1;
-(void)navigationListenerETAUpdated:(id)arg1;
-(void)navigationListenerDestinationUpdated:(id)arg1;
-(void)navigationListenerRouteUpdated:(id)arg1;
-(void)navigationListenerTrafficUpdated:(id)arg1;
-(void)navigationListenerArrived:(id)arg1;

@end

