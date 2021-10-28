/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICNetworkConstraints.h>

@interface ICMutableNetworkConstraints : ICNetworkConstraints
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setShouldAllowDataForCellularNetworkTypes:(BOOL)arg1 ;
-(void)setSizeLimit:(id)arg1 forNetworkType:(long long)arg2 ;
-(void)setShouldAllowDataForAllNetworkTypes:(BOOL)arg1 ;
-(void)setShouldAllowData:(BOOL)arg1 forNetworkType:(long long)arg2 ;
-(void)setShouldAllowDataForWiFiNetworkTypes:(BOOL)arg1 ;
@end
