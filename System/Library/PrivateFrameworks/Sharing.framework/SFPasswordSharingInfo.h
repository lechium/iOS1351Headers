/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface SFPasswordSharingInfo : NSObject <NSSecureCoding> {

	NSNumber* _channel;
	NSString* _networkName;
	NSString* _psk;

}

@property (nonatomic,retain) NSNumber * channel;                  //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * networkName;              //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSString * psk;                      //@synthesize psk=_psk - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)channel;
-(void)setChannel:(NSNumber *)arg1 ;
-(void)setNetworkName:(NSString *)arg1 ;
-(void)setPsk:(NSString *)arg1 ;
-(NSString *)networkName;
-(NSString *)psk;
@end

