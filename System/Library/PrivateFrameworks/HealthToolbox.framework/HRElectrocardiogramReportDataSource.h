/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HKElectrocardiogram, NSString, NSDateComponents, UIColor;


@protocol HRElectrocardiogramReportDataSource <NSObject>
@property (nonatomic,readonly) HKElectrocardiogram * sample; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSDateComponents * dateOfBirthComponents; 
@property (nonatomic,readonly) UIColor * tintColor; 
@required
-(UIColor *)tintColor;
-(NSString *)firstName;
-(NSString *)lastName;
-(HKElectrocardiogram *)sample;
-(NSDateComponents *)dateOfBirthComponents;

@end

