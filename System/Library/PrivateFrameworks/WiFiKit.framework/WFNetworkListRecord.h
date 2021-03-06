/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFNetworkListRecord <NSObject,NSCopying>
@required
-(id)title;
-(unsigned long long)uniqueIdentifier;
-(id)subtitle;
-(id)ssid;
-(long long)rssi;
-(BOOL)isSecure;
-(BOOL)isKnown;
-(unsigned long long)signalBars;
-(BOOL)isAdhoc;
-(BOOL)iOSHotspot;
-(float)scaledRSSI;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isEnterprise;
-(BOOL)isPopular;
-(BOOL)prominentDisplay;
-(BOOL)isInstantHotspot;
-(id)hotspotBatteryLife;
-(id)hotspotSignalStrength;
-(id)hotspotCellularProtocol;
-(BOOL)canBeDisplayedAsCurrent;

@end

