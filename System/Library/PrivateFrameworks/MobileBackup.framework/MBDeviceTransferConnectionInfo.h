/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MBDeviceTransferConnectionInfo : NSObject <NSCopying, NSSecureCoding> {

	long long _connectionState;
	long long _connectionType;

}

@property (assign,nonatomic) long long connectionState;              //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) long long connectionType;               //@synthesize connectionType=_connectionType - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)connectionTypeFromLinkType:(int)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)connectionType;
-(long long)connectionState;
-(void)setConnectionType:(long long)arg1 ;
-(void)setConnectionState:(long long)arg1 ;
@end
