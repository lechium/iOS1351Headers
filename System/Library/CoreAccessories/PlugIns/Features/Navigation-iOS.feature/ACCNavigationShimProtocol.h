/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Features/Navigation-iOS.feature/Navigation-iOS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCNavigationShimProtocol
@required
-(void)notifyNavigationAccessoryClientsOfStateChange;
-(void)updateRouteGuidanceInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3;
-(void)updateManeuverInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3;
-(id)navigationShimAccessoryList;
-(id)navigationShimAccessoryForConnectionID:(unsigned)arg1;

@end
