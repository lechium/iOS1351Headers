/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUIKit/CCUIMenuModuleItem.h>

@interface CCUIWiFiMenuModuleItem : CCUIMenuModuleItem {

	BOOL _hotspot;
	BOOL _secure;
	unsigned long long _signalBars;

}

@property (assign,getter=isHotspot,nonatomic) BOOL hotspot;              //@synthesize hotspot=_hotspot - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) unsigned long long signalBars;              //@synthesize signalBars=_signalBars - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isHotspot;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
-(void)setSignalBars:(unsigned long long)arg1 ;
-(unsigned long long)signalBars;
-(void)setHotspot:(BOOL)arg1 ;
@end
