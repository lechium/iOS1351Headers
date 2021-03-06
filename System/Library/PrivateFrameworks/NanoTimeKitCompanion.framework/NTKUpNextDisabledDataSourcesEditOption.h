/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption {

	NSSet* _disabledBundleIdentifiers;

}

@property (nonatomic,readonly) NSSet * disabledBundleIdentifiers;              //@synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedName;
-(id)JSONObjectRepresentation;
-(NSSet *)disabledBundleIdentifiers;
-(id)dailySnapshotKey;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(id)initWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2 ;
-(id)_alphabeticallySortedIdentifiers;
@end

