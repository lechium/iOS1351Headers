/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTUserLabel;

@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding> {

	NSString* _sourceIccid;
	NSString* _carrierName;
	NSString* _deviceName;
	CTUserLabel* _planLabel;
	NSString* _phoneNumber;
	long long _status;

}

@property (nonatomic,retain) NSString * sourceIccid;               //@synthesize sourceIccid=_sourceIccid - In the implementation block
@property (nonatomic,retain) NSString * carrierName;               //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) CTUserLabel * planLabel;              //@synthesize planLabel=_planLabel - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) long long status;                     //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(NSString *)phoneNumber;
-(NSString *)carrierName;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setSourceIccid:(NSString *)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setPlanLabel:(CTUserLabel *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSString *)sourceIccid;
-(NSString *)deviceName;
-(CTUserLabel *)planLabel;
@end

