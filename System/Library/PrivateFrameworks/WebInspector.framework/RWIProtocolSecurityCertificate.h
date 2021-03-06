/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolSecurityCertificate : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * subject; 
@property (assign,nonatomic) double validFrom; 
@property (assign,nonatomic) double validUntil; 
@property (nonatomic,copy) NSArray * dnsNames; 
@property (nonatomic,copy) NSArray * ipAddresses; 
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(double)validUntil;
-(NSArray *)ipAddresses;
-(void)setValidUntil:(double)arg1 ;
-(void)setValidFrom:(double)arg1 ;
-(double)validFrom;
-(void)setDnsNames:(NSArray *)arg1 ;
-(NSArray *)dnsNames;
-(void)setIpAddresses:(NSArray *)arg1 ;
@end

